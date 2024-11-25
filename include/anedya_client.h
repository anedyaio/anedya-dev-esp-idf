#pragma once

#include <stdlib.h>
#include "anedya_err.h"
#include "anedya_commons.h"
#include "anedya_config.h"
#include "anedya_client.h"
#include "anedya_sdk_config.h"
#include "anedya_txn.h"

#ifdef __cplusplus
extern "C"
{
#endif

    struct anedya_txn_store_t
    {
        anedya_txn_t *txns[ANEDYA_MAX_CONCURRENT_TXN];
        bool txn_slot_free[ANEDYA_MAX_CONCURRENT_TXN];
        int64_t aquired_time[ANEDYA_MAX_CONCURRENT_TXN];
        bool _lock;
    };

    typedef struct anedya_txn_store_t anedya_txn_store_t;

    typedef void (*anedya_on_connect_handler_t)(anedya_client_t *client);
    typedef void (*anedya_on_disconnect_handler_t)(anedya_client_t *client);
    typedef void (*anedya_message_handler_t)(anedya_client_t *cl, char *topic, int topic_len, char *payload, int payload_len);
    struct anedya_client_t
    {
        anedya_config_t *config;
#ifdef ANEDYA_ENABLE_STATIC_ALLOCATION
        char log_buffer[ANEDYA_LOG_BUFFER * ANEDYA_MAX_LOG_BATCH];
        char _message_topics[4][100];
#endif
#ifdef ANEDYA_ENABLE_DYNAMIC_ALLOCATION
#ifdef ANEDYA_ENABLE_DEVICE_LOGS
        char *log_buffer;
#endif
        char *_message_topics[3]
#endif
#ifdef ANEDYA_CONNECTION_METHOD_MQTT
        anedya_mqtt_client_handle_t mqtt_client;
        anedya_message_handler_t _message_handler;
        anedya_on_connect_handler_t _anedya_on_connect_handler;
        anedya_on_disconnect_handler_t _anedya_on_disconnect_handler;
        uint8_t is_connected;
        char broker_url[100];
#endif
        anedya_event_handler_t _event_handler;
        anedya_txn_store_t txn_store;
    };

    anedya_err_t anedya_client_init(anedya_config_t *config, anedya_client_t *client);

    anedya_err_t _anedya_txn_store_init(anedya_txn_store_t *store);
    anedya_err_t _anedya_txn_store_aquire_slot(anedya_txn_store_t *store, anedya_txn_t *txn);
    anedya_err_t _anedya_txn_store_release_slot(anedya_txn_store_t *store, anedya_txn_t *txn);
    void _anedya_handle_txn_response(anedya_client_t *cl, char *payload, int payload_len, uint8_t topic);
    void _anedya_handle_event(anedya_client_t *cl, char *payload, int payload_len, uint8_t topic);

#ifdef ANEDYA_CONNECTION_METHOD_MQTT
    /** @brief: Initiate connection with the Anedya platform.*/
    anedya_err_t anedya_client_connect(anedya_client_t *client);

    anedya_err_t anedya_client_disconnect(anedya_client_t *client);
    anedya_err_t anedya_client_destroy(anedya_client_t *client);

    void _anedya_message_handler(anedya_client_t *cl, char *topic, int topic_len, char *payload, int payload_len);
    void _anedya_on_connect_handler(anedya_client_t *client);
    void _anedya_on_disconnect_handler(anedya_client_t *client);

#endif

#ifdef __cplusplus
}
#endif