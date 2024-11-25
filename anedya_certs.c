#include "anedya_certs.h"

#ifdef ANEDYA_TLS_ENABLE_RSA
#ifdef ANEDYA_EMBED_DER
const unsigned char anedya_tls_root_ca[] = {
  0x30, 0x82, 0x03, 0x99, 0x30, 0x82, 0x02, 0x81, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x13, 0x5d, 0x3f, 0xa6, 0x70, 0x0c, 0x27, 0x68, 0xdb, 0xb2,
  0xb1, 0xe7, 0x2c, 0x9b, 0xe5, 0xa9, 0x3e, 0xc4, 0x41, 0x41, 0x30, 0x0d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x30, 0x4b, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
  0x13, 0x02, 0x49, 0x4e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04,
  0x08, 0x13, 0x07, 0x47, 0x75, 0x6a, 0x61, 0x72, 0x61, 0x74, 0x31, 0x0f,
  0x30, 0x0d, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x06, 0x41, 0x6e, 0x65,
  0x64, 0x79, 0x61, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x03,
  0x13, 0x10, 0x41, 0x6e, 0x65, 0x64, 0x79, 0x61, 0x20, 0x52, 0x6f, 0x6f,
  0x74, 0x20, 0x43, 0x41, 0x20, 0x31, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x34,
  0x30, 0x31, 0x30, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x17,
  0x0d, 0x34, 0x33, 0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39, 0x35,
  0x39, 0x5a, 0x30, 0x4b, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04,
  0x06, 0x13, 0x02, 0x49, 0x4e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55,
  0x04, 0x08, 0x13, 0x07, 0x47, 0x75, 0x6a, 0x61, 0x72, 0x61, 0x74, 0x31,
  0x0f, 0x30, 0x0d, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x06, 0x41, 0x6e,
  0x65, 0x64, 0x79, 0x61, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04,
  0x03, 0x13, 0x10, 0x41, 0x6e, 0x65, 0x64, 0x79, 0x61, 0x20, 0x52, 0x6f,
  0x6f, 0x74, 0x20, 0x43, 0x41, 0x20, 0x31, 0x30, 0x82, 0x01, 0x22, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01,
  0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02,
  0x82, 0x01, 0x01, 0x00, 0xe3, 0xca, 0x0e, 0x24, 0xd4, 0x5f, 0x91, 0x67,
  0x62, 0xc6, 0x83, 0x43, 0xfa, 0x7b, 0x6e, 0x73, 0x2f, 0xa7, 0xbe, 0x32,
  0xff, 0xbf, 0x8f, 0x4a, 0xce, 0xe6, 0x85, 0x34, 0xe7, 0xd4, 0xa1, 0x6a,
  0x13, 0x00, 0xb2, 0x78, 0x80, 0x5b, 0x19, 0xba, 0xa7, 0x6e, 0x1f, 0xbb,
  0x1e, 0x6d, 0xf2, 0xe1, 0x93, 0x78, 0x63, 0x8e, 0x63, 0xd2, 0x61, 0x82,
  0x68, 0x4c, 0x1d, 0xb0, 0x59, 0x9b, 0x20, 0xbb, 0xf3, 0x64, 0xd2, 0x99,
  0xc0, 0x49, 0x79, 0x18, 0xb8, 0x9c, 0x60, 0x56, 0x8f, 0xf7, 0x8b, 0x07,
  0xd4, 0xcc, 0xcc, 0xa8, 0x9c, 0x6a, 0xb1, 0x59, 0xa0, 0xa9, 0x23, 0x8e,
  0xed, 0xed, 0xa3, 0xc5, 0x33, 0x2b, 0xdc, 0x8b, 0xcc, 0x89, 0xbb, 0xac,
  0xed, 0xa3, 0xff, 0x7f, 0x03, 0x19, 0x7d, 0x9f, 0xfe, 0x7a, 0x7a, 0x88,
  0x1b, 0xfa, 0xbd, 0xd5, 0xf6, 0x61, 0x08, 0x08, 0xba, 0x6e, 0xca, 0xab,
  0xa0, 0xef, 0x1b, 0x3b, 0xf6, 0x69, 0x12, 0x44, 0xeb, 0x74, 0xc0, 0xe5,
  0xa1, 0x9f, 0x43, 0x09, 0xfa, 0xd4, 0x9e, 0x6d, 0x97, 0xde, 0xb0, 0x9a,
  0x36, 0xbc, 0x8d, 0x53, 0x53, 0x9a, 0xa6, 0x95, 0x12, 0x74, 0x56, 0x0c,
  0x20, 0x09, 0xb7, 0x55, 0x5c, 0xbb, 0x51, 0x60, 0xe6, 0xf1, 0xce, 0xdd,
  0xe2, 0x18, 0x86, 0x7d, 0x9d, 0xaf, 0x49, 0x90, 0x38, 0xbb, 0x81, 0x5d,
  0x17, 0x34, 0xec, 0x41, 0x46, 0xed, 0x96, 0x3a, 0x49, 0xba, 0x6a, 0x15,
  0x62, 0x60, 0xc3, 0xb1, 0xad, 0x21, 0xd5, 0x31, 0x0f, 0xe3, 0x06, 0x2c,
  0x67, 0xf6, 0xc3, 0xa1, 0x21, 0xa2, 0x9a, 0x2d, 0xe7, 0xbf, 0x2d, 0x7e,
  0xb2, 0x5c, 0x83, 0xd1, 0x4f, 0x28, 0x86, 0x4a, 0x58, 0x78, 0x47, 0xe1,
  0x7b, 0x06, 0x51, 0x31, 0xbe, 0x97, 0x3d, 0xe2, 0x5d, 0xdb, 0x0e, 0x34,
  0x87, 0xbb, 0x40, 0x23, 0x29, 0x20, 0x6c, 0x03, 0x02, 0x03, 0x01, 0x00,
  0x01, 0xa3, 0x76, 0x30, 0x74, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13,
  0x01, 0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x1d,
  0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x8f, 0x80, 0x89,
  0xc8, 0x63, 0x6a, 0x87, 0xc6, 0xda, 0xdf, 0xa5, 0xb0, 0x29, 0x1e, 0x3b,
  0x45, 0x70, 0xfe, 0xcd, 0x56, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23,
  0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x8f, 0x80, 0x89, 0xc8, 0x63, 0x6a,
  0x87, 0xc6, 0xda, 0xdf, 0xa5, 0xb0, 0x29, 0x1e, 0x3b, 0x45, 0x70, 0xfe,
  0xcd, 0x56, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff,
  0x04, 0x04, 0x03, 0x02, 0x01, 0x86, 0x30, 0x11, 0x06, 0x03, 0x55, 0x1d,
  0x20, 0x04, 0x0a, 0x30, 0x08, 0x30, 0x06, 0x06, 0x04, 0x55, 0x1d, 0x20,
  0x00, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
  0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x80, 0xa0, 0x88,
  0x0a, 0xeb, 0x07, 0xb1, 0x4d, 0x9b, 0xc7, 0x56, 0xb5, 0xa1, 0xb1, 0x97,
  0x26, 0x10, 0xc7, 0x61, 0x1b, 0xb5, 0xb6, 0x8a, 0x3b, 0x34, 0x7a, 0xd7,
  0xef, 0x20, 0x5b, 0xc6, 0x44, 0x72, 0x7d, 0xc0, 0x06, 0xdc, 0x3c, 0xe8,
  0xa7, 0x7f, 0x6a, 0x24, 0xc6, 0x23, 0x23, 0x90, 0x9c, 0x54, 0xf1, 0x05,
  0x66, 0xa8, 0xf7, 0xdd, 0x7a, 0x13, 0x40, 0xab, 0x13, 0x6f, 0x61, 0xc8,
  0x35, 0xf0, 0xa4, 0xfd, 0x2d, 0xc5, 0x90, 0x66, 0x1c, 0xc8, 0x6e, 0xc3,
  0xcb, 0xe4, 0x3a, 0x96, 0x06, 0x65, 0xcd, 0x0a, 0x47, 0xce, 0x80, 0xcc,
  0xd1, 0xf9, 0x4c, 0x13, 0x31, 0x86, 0xd8, 0x60, 0x5c, 0xc1, 0xcd, 0xfb,
  0xdc, 0x50, 0xac, 0x58, 0x66, 0x34, 0x54, 0x0e, 0xb1, 0x6d, 0x88, 0x9d,
  0x63, 0x31, 0x38, 0x22, 0x72, 0x8f, 0x5e, 0x6e, 0x6f, 0xbd, 0xa4, 0x29,
  0xf7, 0x25, 0x8a, 0x2f, 0xc1, 0xe1, 0xda, 0x94, 0xa6, 0x26, 0x88, 0x08,
  0xa7, 0xa6, 0xfc, 0xe0, 0x5e, 0x93, 0x43, 0xbf, 0xbf, 0x58, 0x52, 0xbd,
  0x4a, 0x7d, 0xab, 0xc6, 0x29, 0xef, 0x05, 0xa1, 0xf1, 0xb7, 0x2c, 0xe3,
  0x22, 0xaa, 0xe9, 0xd9, 0x7b, 0x92, 0x2a, 0x02, 0x83, 0x1d, 0x1e, 0xea,
  0x48, 0xe4, 0x77, 0xb7, 0xa5, 0xb8, 0xac, 0x61, 0xd6, 0x1b, 0x9d, 0x6a,
  0xea, 0x88, 0xba, 0xbf, 0x99, 0x7b, 0x0b, 0xac, 0x2b, 0xd1, 0xb6, 0x2c,
  0xac, 0x1a, 0x00, 0xad, 0x10, 0x12, 0xab, 0x6d, 0x75, 0x3d, 0x47, 0x7f,
  0x4b, 0x76, 0x2b, 0x65, 0x32, 0x42, 0x8d, 0xe2, 0x9b, 0x4f, 0xae, 0xe1,
  0xf7, 0xe8, 0x50, 0xa4, 0x7c, 0xf3, 0x96, 0x63, 0x0a, 0x08, 0xd2, 0xa9,
  0x6e, 0xf3, 0xd7, 0x17, 0x87, 0x86, 0xf3, 0x63, 0xef, 0x1e, 0x6b, 0x38,
  0xc1, 0x59, 0x4e, 0xb7, 0xe4, 0x91, 0xd5, 0xb8, 0xcb, 0xbb, 0x26, 0x7f,
  0xaa
};
const unsigned int anedya_tls_root_ca_len = 925;
#endif

#ifdef ANEDYA_EMBED_PEM
// array size is 1310
const char anedya_tls_root_ca[]  = {
  0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 
  0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0a, 0x4d, 0x49, 0x49, 0x44, 
  0x6d, 0x54, 0x43, 0x43, 0x41, 0x6f, 0x47, 0x67, 0x41, 0x77, 0x49, 0x42, 0x41, 0x67, 0x49, 0x54, 
  0x58, 0x54, 0x2b, 0x6d, 0x63, 0x41, 0x77, 0x6e, 0x61, 0x4e, 0x75, 0x79, 0x73, 0x65, 0x63, 0x73, 
  0x6d, 0x2b, 0x57, 0x70, 0x50, 0x73, 0x52, 0x42, 0x51, 0x54, 0x41, 0x4e, 0x42, 0x67, 0x6b, 0x71, 
  0x68, 0x6b, 0x69, 0x47, 0x39, 0x77, 0x30, 0x42, 0x41, 0x51, 0x73, 0x46, 0x0a, 0x41, 0x44, 0x42, 
  0x4c, 0x4d, 0x51, 0x73, 0x77, 0x43, 0x51, 0x59, 0x44, 0x56, 0x51, 0x51, 0x47, 0x45, 0x77, 0x4a, 
  0x4a, 0x54, 0x6a, 0x45, 0x51, 0x4d, 0x41, 0x34, 0x47, 0x41, 0x31, 0x55, 0x45, 0x43, 0x42, 0x4d, 
  0x48, 0x52, 0x33, 0x56, 0x71, 0x59, 0x58, 0x4a, 0x68, 0x64, 0x44, 0x45, 0x50, 0x4d, 0x41, 0x30, 
  0x47, 0x41, 0x31, 0x55, 0x45, 0x43, 0x68, 0x4d, 0x47, 0x51, 0x57, 0x35, 0x6c, 0x0a, 0x5a, 0x48, 
  0x6c, 0x68, 0x4d, 0x52, 0x6b, 0x77, 0x46, 0x77, 0x59, 0x44, 0x56, 0x51, 0x51, 0x44, 0x45, 0x78, 
  0x42, 0x42, 0x62, 0x6d, 0x56, 0x6b, 0x65, 0x57, 0x45, 0x67, 0x55, 0x6d, 0x39, 0x76, 0x64, 0x43, 
  0x42, 0x44, 0x51, 0x53, 0x41, 0x78, 0x4d, 0x42, 0x34, 0x58, 0x44, 0x54, 0x49, 0x30, 0x4d, 0x44, 
  0x45, 0x77, 0x4d, 0x54, 0x41, 0x77, 0x4d, 0x44, 0x41, 0x77, 0x4d, 0x46, 0x6f, 0x58, 0x0a, 0x44, 
  0x54, 0x51, 0x7a, 0x4d, 0x54, 0x49, 0x7a, 0x4d, 0x54, 0x49, 0x7a, 0x4e, 0x54, 0x6b, 0x31, 0x4f, 
  0x56, 0x6f, 0x77, 0x53, 0x7a, 0x45, 0x4c, 0x4d, 0x41, 0x6b, 0x47, 0x41, 0x31, 0x55, 0x45, 0x42, 
  0x68, 0x4d, 0x43, 0x53, 0x55, 0x34, 0x78, 0x45, 0x44, 0x41, 0x4f, 0x42, 0x67, 0x4e, 0x56, 0x42, 
  0x41, 0x67, 0x54, 0x42, 0x30, 0x64, 0x31, 0x61, 0x6d, 0x46, 0x79, 0x59, 0x58, 0x51, 0x78, 0x0a, 
  0x44, 0x7a, 0x41, 0x4e, 0x42, 0x67, 0x4e, 0x56, 0x42, 0x41, 0x6f, 0x54, 0x42, 0x6b, 0x46, 0x75, 
  0x5a, 0x57, 0x52, 0x35, 0x59, 0x54, 0x45, 0x5a, 0x4d, 0x42, 0x63, 0x47, 0x41, 0x31, 0x55, 0x45, 
  0x41, 0x78, 0x4d, 0x51, 0x51, 0x57, 0x35, 0x6c, 0x5a, 0x48, 0x6c, 0x68, 0x49, 0x46, 0x4a, 0x76, 
  0x62, 0x33, 0x51, 0x67, 0x51, 0x30, 0x45, 0x67, 0x4d, 0x54, 0x43, 0x43, 0x41, 0x53, 0x49, 0x77, 
  0x0a, 0x44, 0x51, 0x59, 0x4a, 0x4b, 0x6f, 0x5a, 0x49, 0x68, 0x76, 0x63, 0x4e, 0x41, 0x51, 0x45, 
  0x42, 0x42, 0x51, 0x41, 0x44, 0x67, 0x67, 0x45, 0x50, 0x41, 0x44, 0x43, 0x43, 0x41, 0x51, 0x6f, 
  0x43, 0x67, 0x67, 0x45, 0x42, 0x41, 0x4f, 0x50, 0x4b, 0x44, 0x69, 0x54, 0x55, 0x58, 0x35, 0x46, 
  0x6e, 0x59, 0x73, 0x61, 0x44, 0x51, 0x2f, 0x70, 0x37, 0x62, 0x6e, 0x4d, 0x76, 0x70, 0x37, 0x34, 
  0x79, 0x0a, 0x2f, 0x37, 0x2b, 0x50, 0x53, 0x73, 0x37, 0x6d, 0x68, 0x54, 0x54, 0x6e, 0x31, 0x4b, 
  0x46, 0x71, 0x45, 0x77, 0x43, 0x79, 0x65, 0x49, 0x42, 0x62, 0x47, 0x62, 0x71, 0x6e, 0x62, 0x68, 
  0x2b, 0x37, 0x48, 0x6d, 0x33, 0x79, 0x34, 0x5a, 0x4e, 0x34, 0x59, 0x34, 0x35, 0x6a, 0x30, 0x6d, 
  0x47, 0x43, 0x61, 0x45, 0x77, 0x64, 0x73, 0x46, 0x6d, 0x62, 0x49, 0x4c, 0x76, 0x7a, 0x5a, 0x4e, 
  0x4b, 0x5a, 0x0a, 0x77, 0x45, 0x6c, 0x35, 0x47, 0x4c, 0x69, 0x63, 0x59, 0x46, 0x61, 0x50, 0x39, 
  0x34, 0x73, 0x48, 0x31, 0x4d, 0x7a, 0x4d, 0x71, 0x4a, 0x78, 0x71, 0x73, 0x56, 0x6d, 0x67, 0x71, 
  0x53, 0x4f, 0x4f, 0x37, 0x65, 0x32, 0x6a, 0x78, 0x54, 0x4d, 0x72, 0x33, 0x49, 0x76, 0x4d, 0x69, 
  0x62, 0x75, 0x73, 0x37, 0x61, 0x50, 0x2f, 0x66, 0x77, 0x4d, 0x5a, 0x66, 0x5a, 0x2f, 0x2b, 0x65, 
  0x6e, 0x71, 0x49, 0x0a, 0x47, 0x2f, 0x71, 0x39, 0x31, 0x66, 0x5a, 0x68, 0x43, 0x41, 0x69, 0x36, 
  0x62, 0x73, 0x71, 0x72, 0x6f, 0x4f, 0x38, 0x62, 0x4f, 0x2f, 0x5a, 0x70, 0x45, 0x6b, 0x54, 0x72, 
  0x64, 0x4d, 0x44, 0x6c, 0x6f, 0x5a, 0x39, 0x44, 0x43, 0x66, 0x72, 0x55, 0x6e, 0x6d, 0x32, 0x58, 
  0x33, 0x72, 0x43, 0x61, 0x4e, 0x72, 0x79, 0x4e, 0x55, 0x31, 0x4f, 0x61, 0x70, 0x70, 0x55, 0x53, 
  0x64, 0x46, 0x59, 0x4d, 0x0a, 0x49, 0x41, 0x6d, 0x33, 0x56, 0x56, 0x79, 0x37, 0x55, 0x57, 0x44, 
  0x6d, 0x38, 0x63, 0x37, 0x64, 0x34, 0x68, 0x69, 0x47, 0x66, 0x5a, 0x32, 0x76, 0x53, 0x5a, 0x41, 
  0x34, 0x75, 0x34, 0x46, 0x64, 0x46, 0x7a, 0x54, 0x73, 0x51, 0x55, 0x62, 0x74, 0x6c, 0x6a, 0x70, 
  0x4a, 0x75, 0x6d, 0x6f, 0x56, 0x59, 0x6d, 0x44, 0x44, 0x73, 0x61, 0x30, 0x68, 0x31, 0x54, 0x45, 
  0x50, 0x34, 0x77, 0x59, 0x73, 0x0a, 0x5a, 0x2f, 0x62, 0x44, 0x6f, 0x53, 0x47, 0x69, 0x6d, 0x69, 
  0x33, 0x6e, 0x76, 0x79, 0x31, 0x2b, 0x73, 0x6c, 0x79, 0x44, 0x30, 0x55, 0x38, 0x6f, 0x68, 0x6b, 
  0x70, 0x59, 0x65, 0x45, 0x66, 0x68, 0x65, 0x77, 0x5a, 0x52, 0x4d, 0x62, 0x36, 0x58, 0x50, 0x65, 
  0x4a, 0x64, 0x32, 0x77, 0x34, 0x30, 0x68, 0x37, 0x74, 0x41, 0x49, 0x79, 0x6b, 0x67, 0x62, 0x41, 
  0x4d, 0x43, 0x41, 0x77, 0x45, 0x41, 0x0a, 0x41, 0x61, 0x4e, 0x32, 0x4d, 0x48, 0x51, 0x77, 0x44, 
  0x77, 0x59, 0x44, 0x56, 0x52, 0x30, 0x54, 0x41, 0x51, 0x48, 0x2f, 0x42, 0x41, 0x55, 0x77, 0x41, 
  0x77, 0x45, 0x42, 0x2f, 0x7a, 0x41, 0x64, 0x42, 0x67, 0x4e, 0x56, 0x48, 0x51, 0x34, 0x45, 0x46, 
  0x67, 0x51, 0x55, 0x6a, 0x34, 0x43, 0x4a, 0x79, 0x47, 0x4e, 0x71, 0x68, 0x38, 0x62, 0x61, 0x33, 
  0x36, 0x57, 0x77, 0x4b, 0x52, 0x34, 0x37, 0x0a, 0x52, 0x58, 0x44, 0x2b, 0x7a, 0x56, 0x59, 0x77, 
  0x48, 0x77, 0x59, 0x44, 0x56, 0x52, 0x30, 0x6a, 0x42, 0x42, 0x67, 0x77, 0x46, 0x6f, 0x41, 0x55, 
  0x6a, 0x34, 0x43, 0x4a, 0x79, 0x47, 0x4e, 0x71, 0x68, 0x38, 0x62, 0x61, 0x33, 0x36, 0x57, 0x77, 
  0x4b, 0x52, 0x34, 0x37, 0x52, 0x58, 0x44, 0x2b, 0x7a, 0x56, 0x59, 0x77, 0x44, 0x67, 0x59, 0x44, 
  0x56, 0x52, 0x30, 0x50, 0x41, 0x51, 0x48, 0x2f, 0x0a, 0x42, 0x41, 0x51, 0x44, 0x41, 0x67, 0x47, 
  0x47, 0x4d, 0x42, 0x45, 0x47, 0x41, 0x31, 0x55, 0x64, 0x49, 0x41, 0x51, 0x4b, 0x4d, 0x41, 0x67, 
  0x77, 0x42, 0x67, 0x59, 0x45, 0x56, 0x52, 0x30, 0x67, 0x41, 0x44, 0x41, 0x4e, 0x42, 0x67, 0x6b, 
  0x71, 0x68, 0x6b, 0x69, 0x47, 0x39, 0x77, 0x30, 0x42, 0x41, 0x51, 0x73, 0x46, 0x41, 0x41, 0x4f, 
  0x43, 0x41, 0x51, 0x45, 0x41, 0x67, 0x4b, 0x43, 0x49, 0x0a, 0x43, 0x75, 0x73, 0x48, 0x73, 0x55, 
  0x32, 0x62, 0x78, 0x31, 0x61, 0x31, 0x6f, 0x62, 0x47, 0x58, 0x4a, 0x68, 0x44, 0x48, 0x59, 0x52, 
  0x75, 0x31, 0x74, 0x6f, 0x6f, 0x37, 0x4e, 0x48, 0x72, 0x58, 0x37, 0x79, 0x42, 0x62, 0x78, 0x6b, 
  0x52, 0x79, 0x66, 0x63, 0x41, 0x47, 0x33, 0x44, 0x7a, 0x6f, 0x70, 0x33, 0x39, 0x71, 0x4a, 0x4d, 
  0x59, 0x6a, 0x49, 0x35, 0x43, 0x63, 0x56, 0x50, 0x45, 0x46, 0x0a, 0x5a, 0x71, 0x6a, 0x33, 0x33, 
  0x58, 0x6f, 0x54, 0x51, 0x4b, 0x73, 0x54, 0x62, 0x32, 0x48, 0x49, 0x4e, 0x66, 0x43, 0x6b, 0x2f, 
  0x53, 0x33, 0x46, 0x6b, 0x47, 0x59, 0x63, 0x79, 0x47, 0x37, 0x44, 0x79, 0x2b, 0x51, 0x36, 0x6c, 
  0x67, 0x5a, 0x6c, 0x7a, 0x51, 0x70, 0x48, 0x7a, 0x6f, 0x44, 0x4d, 0x30, 0x66, 0x6c, 0x4d, 0x45, 
  0x7a, 0x47, 0x47, 0x32, 0x47, 0x42, 0x63, 0x77, 0x63, 0x33, 0x37, 0x0a, 0x33, 0x46, 0x43, 0x73, 
  0x57, 0x47, 0x59, 0x30, 0x56, 0x41, 0x36, 0x78, 0x62, 0x59, 0x69, 0x64, 0x59, 0x7a, 0x45, 0x34, 
  0x49, 0x6e, 0x4b, 0x50, 0x58, 0x6d, 0x35, 0x76, 0x76, 0x61, 0x51, 0x70, 0x39, 0x79, 0x57, 0x4b, 
  0x4c, 0x38, 0x48, 0x68, 0x32, 0x70, 0x53, 0x6d, 0x4a, 0x6f, 0x67, 0x49, 0x70, 0x36, 0x62, 0x38, 
  0x34, 0x46, 0x36, 0x54, 0x51, 0x37, 0x2b, 0x2f, 0x57, 0x46, 0x4b, 0x39, 0x0a, 0x53, 0x6e, 0x32, 
  0x72, 0x78, 0x69, 0x6e, 0x76, 0x42, 0x61, 0x48, 0x78, 0x74, 0x79, 0x7a, 0x6a, 0x49, 0x71, 0x72, 
  0x70, 0x32, 0x58, 0x75, 0x53, 0x4b, 0x67, 0x4b, 0x44, 0x48, 0x52, 0x37, 0x71, 0x53, 0x4f, 0x52, 
  0x33, 0x74, 0x36, 0x57, 0x34, 0x72, 0x47, 0x48, 0x57, 0x47, 0x35, 0x31, 0x71, 0x36, 0x6f, 0x69, 
  0x36, 0x76, 0x35, 0x6c, 0x37, 0x43, 0x36, 0x77, 0x72, 0x30, 0x62, 0x59, 0x73, 0x0a, 0x72, 0x42, 
  0x6f, 0x41, 0x72, 0x52, 0x41, 0x53, 0x71, 0x32, 0x31, 0x31, 0x50, 0x55, 0x64, 0x2f, 0x53, 0x33, 
  0x59, 0x72, 0x5a, 0x54, 0x4a, 0x43, 0x6a, 0x65, 0x4b, 0x62, 0x54, 0x36, 0x37, 0x68, 0x39, 0x2b, 
  0x68, 0x51, 0x70, 0x48, 0x7a, 0x7a, 0x6c, 0x6d, 0x4d, 0x4b, 0x43, 0x4e, 0x4b, 0x70, 0x62, 0x76, 
  0x50, 0x58, 0x46, 0x34, 0x65, 0x47, 0x38, 0x32, 0x50, 0x76, 0x48, 0x6d, 0x73, 0x34, 0x0a, 0x77, 
  0x56, 0x6c, 0x4f, 0x74, 0x2b, 0x53, 0x52, 0x31, 0x62, 0x6a, 0x4c, 0x75, 0x79, 0x5a, 0x2f, 0x71, 
  0x67, 0x3d, 0x3d, 0x0a, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x45, 0x4e, 0x44, 0x20, 0x43, 0x45, 0x52, 
  0x54, 0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0a
};
const unsigned int anedya_tls_root_ca_len = 1310;
#endif

#endif

#ifdef ANEDYA_TLS_ENABLE_ECC
#ifdef ANEDYA_EMBED_DER
const unsigned char anedya_tls_root_ca[] = {
  0x30, 0x82, 0x02, 0x0c, 0x30, 0x82, 0x01, 0xb3, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x13, 0x43, 0x17, 0x77, 0x0e, 0xa8, 0xf8, 0xbb, 0xfe, 0xf8,
  0x1a, 0xb2, 0x26, 0xc5, 0xcd, 0x0c, 0xe0, 0x46, 0xd4, 0xbc, 0x30, 0x0a,
  0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x4b,
  0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x49,
  0x4e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x07,
  0x47, 0x75, 0x6a, 0x61, 0x72, 0x61, 0x74, 0x31, 0x0f, 0x30, 0x0d, 0x06,
  0x03, 0x55, 0x04, 0x0a, 0x13, 0x06, 0x41, 0x6e, 0x65, 0x64, 0x79, 0x61,
  0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10, 0x41,
  0x6e, 0x65, 0x64, 0x79, 0x61, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43,
  0x41, 0x20, 0x33, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x34, 0x30, 0x31, 0x30,
  0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x17, 0x0d, 0x34, 0x33,
  0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39, 0x35, 0x39, 0x5a, 0x30,
  0x4b, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
  0x49, 0x4e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13,
  0x07, 0x47, 0x75, 0x6a, 0x61, 0x72, 0x61, 0x74, 0x31, 0x0f, 0x30, 0x0d,
  0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x06, 0x41, 0x6e, 0x65, 0x64, 0x79,
  0x61, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10,
  0x41, 0x6e, 0x65, 0x64, 0x79, 0x61, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20,
  0x43, 0x41, 0x20, 0x33, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86,
  0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
  0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0xab, 0x31, 0x7f, 0x4b, 0xe9,
  0x6e, 0x34, 0xa1, 0x20, 0xe2, 0x06, 0xc1, 0xe6, 0xa4, 0xd3, 0xf9, 0x9e,
  0x21, 0x84, 0xb4, 0x02, 0x65, 0xda, 0xba, 0x38, 0xa7, 0x0a, 0x31, 0x64,
  0x04, 0x54, 0xa1, 0x71, 0xa7, 0xf6, 0x31, 0xd3, 0x1e, 0x60, 0x13, 0xcf,
  0x17, 0x0c, 0xf8, 0xa7, 0x92, 0x3c, 0x28, 0xe0, 0xa8, 0xa6, 0x0b, 0x21,
  0x49, 0x35, 0x05, 0x44, 0x25, 0xe2, 0x88, 0xac, 0x20, 0x60, 0xf2, 0xa3,
  0x76, 0x30, 0x74, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01,
  0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x1d, 0x06, 0x03,
  0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0xdc, 0xf5, 0x3c, 0x14, 0x57,
  0x75, 0x1b, 0x18, 0x40, 0xd5, 0x6c, 0x77, 0x77, 0x98, 0x54, 0xd7, 0x51,
  0x0d, 0xc1, 0xf8, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18,
  0x30, 0x16, 0x80, 0x14, 0xdc, 0xf5, 0x3c, 0x14, 0x57, 0x75, 0x1b, 0x18,
  0x40, 0xd5, 0x6c, 0x77, 0x77, 0x98, 0x54, 0xd7, 0x51, 0x0d, 0xc1, 0xf8,
  0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04,
  0x03, 0x02, 0x01, 0x86, 0x30, 0x11, 0x06, 0x03, 0x55, 0x1d, 0x20, 0x04,
  0x0a, 0x30, 0x08, 0x30, 0x06, 0x06, 0x04, 0x55, 0x1d, 0x20, 0x00, 0x30,
  0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03,
  0x47, 0x00, 0x30, 0x44, 0x02, 0x20, 0x47, 0xfa, 0xd6, 0x48, 0x6f, 0x3e,
  0x2f, 0x85, 0xed, 0x14, 0xb7, 0x1e, 0xb3, 0x42, 0x58, 0x4b, 0xb6, 0xd8,
  0xe4, 0xd1, 0xf5, 0x76, 0x28, 0x85, 0x93, 0x9e, 0x3f, 0x13, 0x9c, 0x66,
  0x49, 0xa2, 0x02, 0x20, 0x46, 0x18, 0x6e, 0x1b, 0xe3, 0xad, 0xd4, 0x74,
  0x19, 0x52, 0xe3, 0xa1, 0xac, 0xba, 0x80, 0x5b, 0x29, 0x89, 0x16, 0x7b,
  0x1a, 0xd0, 0xc3, 0xaf, 0xdc, 0x45, 0xf7, 0x55, 0x9b, 0xb0, 0xad, 0x0f
};
const unsigned int anedya_tls_root_ca_len = 528;
#endif

#ifdef ANEDYA_EMBED_PEM
// array size is 769
const char anedya_tls_root_ca[]  = {
  0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 
  0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0a, 0x4d, 0x49, 0x49, 0x43, 
  0x44, 0x44, 0x43, 0x43, 0x41, 0x62, 0x4f, 0x67, 0x41, 0x77, 0x49, 0x42, 0x41, 0x67, 0x49, 0x54, 
  0x51, 0x78, 0x64, 0x33, 0x44, 0x71, 0x6a, 0x34, 0x75, 0x2f, 0x37, 0x34, 0x47, 0x72, 0x49, 0x6d, 
  0x78, 0x63, 0x30, 0x4d, 0x34, 0x45, 0x62, 0x55, 0x76, 0x44, 0x41, 0x4b, 0x42, 0x67, 0x67, 0x71, 
  0x68, 0x6b, 0x6a, 0x4f, 0x50, 0x51, 0x51, 0x44, 0x41, 0x6a, 0x42, 0x4c, 0x0a, 0x4d, 0x51, 0x73, 
  0x77, 0x43, 0x51, 0x59, 0x44, 0x56, 0x51, 0x51, 0x47, 0x45, 0x77, 0x4a, 0x4a, 0x54, 0x6a, 0x45, 
  0x51, 0x4d, 0x41, 0x34, 0x47, 0x41, 0x31, 0x55, 0x45, 0x43, 0x42, 0x4d, 0x48, 0x52, 0x33, 0x56, 
  0x71, 0x59, 0x58, 0x4a, 0x68, 0x64, 0x44, 0x45, 0x50, 0x4d, 0x41, 0x30, 0x47, 0x41, 0x31, 0x55, 
  0x45, 0x43, 0x68, 0x4d, 0x47, 0x51, 0x57, 0x35, 0x6c, 0x5a, 0x48, 0x6c, 0x68, 0x0a, 0x4d, 0x52, 
  0x6b, 0x77, 0x46, 0x77, 0x59, 0x44, 0x56, 0x51, 0x51, 0x44, 0x45, 0x78, 0x42, 0x42, 0x62, 0x6d, 
  0x56, 0x6b, 0x65, 0x57, 0x45, 0x67, 0x55, 0x6d, 0x39, 0x76, 0x64, 0x43, 0x42, 0x44, 0x51, 0x53, 
  0x41, 0x7a, 0x4d, 0x42, 0x34, 0x58, 0x44, 0x54, 0x49, 0x30, 0x4d, 0x44, 0x45, 0x77, 0x4d, 0x54, 
  0x41, 0x77, 0x4d, 0x44, 0x41, 0x77, 0x4d, 0x46, 0x6f, 0x58, 0x44, 0x54, 0x51, 0x7a, 0x0a, 0x4d, 
  0x54, 0x49, 0x7a, 0x4d, 0x54, 0x49, 0x7a, 0x4e, 0x54, 0x6b, 0x31, 0x4f, 0x56, 0x6f, 0x77, 0x53, 
  0x7a, 0x45, 0x4c, 0x4d, 0x41, 0x6b, 0x47, 0x41, 0x31, 0x55, 0x45, 0x42, 0x68, 0x4d, 0x43, 0x53, 
  0x55, 0x34, 0x78, 0x45, 0x44, 0x41, 0x4f, 0x42, 0x67, 0x4e, 0x56, 0x42, 0x41, 0x67, 0x54, 0x42, 
  0x30, 0x64, 0x31, 0x61, 0x6d, 0x46, 0x79, 0x59, 0x58, 0x51, 0x78, 0x44, 0x7a, 0x41, 0x4e, 0x0a, 
  0x42, 0x67, 0x4e, 0x56, 0x42, 0x41, 0x6f, 0x54, 0x42, 0x6b, 0x46, 0x75, 0x5a, 0x57, 0x52, 0x35, 
  0x59, 0x54, 0x45, 0x5a, 0x4d, 0x42, 0x63, 0x47, 0x41, 0x31, 0x55, 0x45, 0x41, 0x78, 0x4d, 0x51, 
  0x51, 0x57, 0x35, 0x6c, 0x5a, 0x48, 0x6c, 0x68, 0x49, 0x46, 0x4a, 0x76, 0x62, 0x33, 0x51, 0x67, 
  0x51, 0x30, 0x45, 0x67, 0x4d, 0x7a, 0x42, 0x5a, 0x4d, 0x42, 0x4d, 0x47, 0x42, 0x79, 0x71, 0x47, 
  0x0a, 0x53, 0x4d, 0x34, 0x39, 0x41, 0x67, 0x45, 0x47, 0x43, 0x43, 0x71, 0x47, 0x53, 0x4d, 0x34, 
  0x39, 0x41, 0x77, 0x45, 0x48, 0x41, 0x30, 0x49, 0x41, 0x42, 0x4b, 0x73, 0x78, 0x66, 0x30, 0x76, 
  0x70, 0x62, 0x6a, 0x53, 0x68, 0x49, 0x4f, 0x49, 0x47, 0x77, 0x65, 0x61, 0x6b, 0x30, 0x2f, 0x6d, 
  0x65, 0x49, 0x59, 0x53, 0x30, 0x41, 0x6d, 0x58, 0x61, 0x75, 0x6a, 0x69, 0x6e, 0x43, 0x6a, 0x46, 
  0x6b, 0x0a, 0x42, 0x46, 0x53, 0x68, 0x63, 0x61, 0x66, 0x32, 0x4d, 0x64, 0x4d, 0x65, 0x59, 0x42, 
  0x50, 0x50, 0x46, 0x77, 0x7a, 0x34, 0x70, 0x35, 0x49, 0x38, 0x4b, 0x4f, 0x43, 0x6f, 0x70, 0x67, 
  0x73, 0x68, 0x53, 0x54, 0x55, 0x46, 0x52, 0x43, 0x58, 0x69, 0x69, 0x4b, 0x77, 0x67, 0x59, 0x50, 
  0x4b, 0x6a, 0x64, 0x6a, 0x42, 0x30, 0x4d, 0x41, 0x38, 0x47, 0x41, 0x31, 0x55, 0x64, 0x45, 0x77, 
  0x45, 0x42, 0x0a, 0x2f, 0x77, 0x51, 0x46, 0x4d, 0x41, 0x4d, 0x42, 0x41, 0x66, 0x38, 0x77, 0x48, 
  0x51, 0x59, 0x44, 0x56, 0x52, 0x30, 0x4f, 0x42, 0x42, 0x59, 0x45, 0x46, 0x4e, 0x7a, 0x31, 0x50, 
  0x42, 0x52, 0x58, 0x64, 0x52, 0x73, 0x59, 0x51, 0x4e, 0x56, 0x73, 0x64, 0x33, 0x65, 0x59, 0x56, 
  0x4e, 0x64, 0x52, 0x44, 0x63, 0x48, 0x34, 0x4d, 0x42, 0x38, 0x47, 0x41, 0x31, 0x55, 0x64, 0x49, 
  0x77, 0x51, 0x59, 0x0a, 0x4d, 0x42, 0x61, 0x41, 0x46, 0x4e, 0x7a, 0x31, 0x50, 0x42, 0x52, 0x58, 
  0x64, 0x52, 0x73, 0x59, 0x51, 0x4e, 0x56, 0x73, 0x64, 0x33, 0x65, 0x59, 0x56, 0x4e, 0x64, 0x52, 
  0x44, 0x63, 0x48, 0x34, 0x4d, 0x41, 0x34, 0x47, 0x41, 0x31, 0x55, 0x64, 0x44, 0x77, 0x45, 0x42, 
  0x2f, 0x77, 0x51, 0x45, 0x41, 0x77, 0x49, 0x42, 0x68, 0x6a, 0x41, 0x52, 0x42, 0x67, 0x4e, 0x56, 
  0x48, 0x53, 0x41, 0x45, 0x0a, 0x43, 0x6a, 0x41, 0x49, 0x4d, 0x41, 0x59, 0x47, 0x42, 0x46, 0x55, 
  0x64, 0x49, 0x41, 0x41, 0x77, 0x43, 0x67, 0x59, 0x49, 0x4b, 0x6f, 0x5a, 0x49, 0x7a, 0x6a, 0x30, 
  0x45, 0x41, 0x77, 0x49, 0x44, 0x52, 0x77, 0x41, 0x77, 0x52, 0x41, 0x49, 0x67, 0x52, 0x2f, 0x72, 
  0x57, 0x53, 0x47, 0x38, 0x2b, 0x4c, 0x34, 0x58, 0x74, 0x46, 0x4c, 0x63, 0x65, 0x73, 0x30, 0x4a, 
  0x59, 0x53, 0x37, 0x62, 0x59, 0x0a, 0x35, 0x4e, 0x48, 0x31, 0x64, 0x69, 0x69, 0x46, 0x6b, 0x35, 
  0x34, 0x2f, 0x45, 0x35, 0x78, 0x6d, 0x53, 0x61, 0x49, 0x43, 0x49, 0x45, 0x59, 0x59, 0x62, 0x68, 
  0x76, 0x6a, 0x72, 0x64, 0x52, 0x30, 0x47, 0x56, 0x4c, 0x6a, 0x6f, 0x61, 0x79, 0x36, 0x67, 0x46, 
  0x73, 0x70, 0x69, 0x52, 0x5a, 0x37, 0x47, 0x74, 0x44, 0x44, 0x72, 0x39, 0x78, 0x46, 0x39, 0x31, 
  0x57, 0x62, 0x73, 0x4b, 0x30, 0x50, 0x0a, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x45, 0x4e, 0x44, 0x20, 
  0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 
  0x0a
};
const unsigned int anedya_tls_root_ca_len = 769;
#endif

#endif