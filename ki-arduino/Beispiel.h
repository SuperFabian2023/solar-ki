#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

unsigned char solar_production_model_tflite[] DATA_ALIGN_ATTRIBUTE = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0xd8, 0x03, 0x00, 0x00,
  0xe8, 0x03, 0x00, 0x00, 0x74, 0x07, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
  0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x98, 0xff, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73,
  0x65, 0x5f, 0x31, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xb6, 0xfc, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xdc, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49,
  0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0xec, 0x02, 0x00, 0x00, 0xe4, 0x02, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00,
  0x38, 0x02, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x56, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x32,
  0x2e, 0x30, 0x00, 0x00, 0xb6, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0xfa, 0xff, 0xff,
  0x4c, 0xfa, 0xff, 0xff, 0xda, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x00, 0x00, 0x61, 0x97, 0xa4, 0xbc, 0x30, 0x96, 0xc7, 0x3e,
  0x90, 0xb1, 0x30, 0x3d, 0x67, 0xce, 0xb4, 0x3e, 0x7e, 0x8b, 0x9e, 0x3e,
  0xec, 0x77, 0x69, 0x3e, 0x2c, 0xef, 0x1a, 0x3e, 0xc2, 0x55, 0x73, 0xbe,
  0x20, 0x21, 0x37, 0x3c, 0x94, 0x15, 0xa5, 0x3e, 0xff, 0x38, 0x0a, 0x3e,
  0xd4, 0x10, 0xdb, 0x3c, 0xd8, 0x40, 0xa2, 0x3e, 0xe5, 0x4d, 0x85, 0xbe,
  0x68, 0xd1, 0x79, 0x3d, 0xe9, 0x99, 0x83, 0xbe, 0xc5, 0xe2, 0x80, 0xbe,
  0xd8, 0x10, 0x52, 0xbe, 0x8b, 0x57, 0x4d, 0xbe, 0xf3, 0x83, 0x11, 0x3f,
  0x0c, 0xeb, 0x09, 0x3e, 0x52, 0xbc, 0x0f, 0x3e, 0x88, 0x2a, 0x63, 0xbd,
  0xbb, 0x96, 0xcc, 0x3e, 0x1e, 0x52, 0x59, 0x3e, 0xab, 0x9b, 0x2d, 0x3f,
  0xa6, 0xba, 0x6d, 0x3e, 0xc6, 0xfb, 0xa7, 0x3e, 0x58, 0xce, 0xc3, 0x3e,
  0x1f, 0xaa, 0xd2, 0xbe, 0xf8, 0xc5, 0xd6, 0x3e, 0x22, 0xa6, 0x84, 0x3e,
  0x66, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
  0xbd, 0x77, 0x57, 0x3e, 0x98, 0xc3, 0xe2, 0xbc, 0x72, 0x27, 0x3f, 0x3e,
  0x5a, 0x74, 0xaa, 0x3c, 0xa2, 0xfa, 0x55, 0x3e, 0x02, 0xe5, 0xa9, 0x3e,
  0x76, 0x76, 0x52, 0xbd, 0x75, 0x22, 0xd1, 0x3e, 0x34, 0x5d, 0xd7, 0x3e,
  0x39, 0x81, 0x43, 0x3e, 0x63, 0xb2, 0x86, 0xbe, 0xfc, 0x73, 0x82, 0xbe,
  0x94, 0x31, 0xd9, 0x3d, 0x7b, 0x4b, 0x79, 0xbe, 0x70, 0xa6, 0xa4, 0xbd,
  0xbd, 0x59, 0x9c, 0xbe, 0x5d, 0xf7, 0xd0, 0xbe, 0xb0, 0xc9, 0x7b, 0x3d,
  0x06, 0x96, 0x3e, 0x3e, 0x73, 0x4d, 0x5f, 0x3d, 0x36, 0x9d, 0x72, 0x3e,
  0xf7, 0x66, 0xd1, 0x3e, 0xa7, 0xbb, 0x06, 0x3d, 0x6f, 0x8a, 0x2a, 0x3e,
  0xbf, 0xeb, 0x84, 0x3e, 0x1b, 0x38, 0x7c, 0x3e, 0xef, 0x62, 0x07, 0x3e,
  0x21, 0x0f, 0x80, 0x3e, 0x68, 0xdd, 0x87, 0xbe, 0x1e, 0x52, 0x38, 0x3e,
  0x1d, 0x1e, 0xc8, 0xbe, 0x64, 0x2f, 0xd3, 0xbd, 0x34, 0x90, 0x63, 0xbe,
  0x30, 0x9d, 0x91, 0x3c, 0x6f, 0xb0, 0x6b, 0xbe, 0x48, 0xd2, 0x70, 0x3d,
  0x91, 0x0a, 0x8f, 0xbe, 0xe6, 0xcb, 0x56, 0xbe, 0x38, 0x28, 0xf4, 0x3e,
  0x55, 0x8a, 0x5f, 0xbe, 0x5e, 0xf2, 0x48, 0x3e, 0x35, 0x63, 0xad, 0xbe,
  0x15, 0xc1, 0xa0, 0x3d, 0x91, 0x1a, 0x06, 0x3f, 0xd0, 0xfd, 0x90, 0x3c,
  0x90, 0x15, 0xc6, 0xbe, 0x9c, 0x0c, 0x12, 0x3d, 0x2f, 0xb5, 0xa0, 0x3e,
  0xa5, 0x8e, 0xb3, 0x3e, 0x07, 0x35, 0x20, 0x3e, 0x9d, 0x47, 0xd3, 0x3e,
  0xf2, 0xbb, 0x3b, 0xbe, 0xe5, 0x62, 0xe7, 0x3d, 0x93, 0xb9, 0x63, 0x3e,
  0xea, 0xb2, 0x6e, 0x3e, 0x4b, 0xac, 0xcc, 0xbe, 0x22, 0x25, 0x16, 0x3e,
  0xca, 0x16, 0x70, 0x3d, 0xac, 0xea, 0xc3, 0xbd, 0x54, 0xc0, 0xa9, 0xbd,
  0x16, 0x27, 0x25, 0xbe, 0x0b, 0xd4, 0x2e, 0x3f, 0x72, 0xe0, 0xac, 0xbe,
  0x0e, 0xe6, 0x9b, 0xbe, 0x72, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x53, 0xcf, 0xba, 0x3a, 0x74, 0x9a, 0xbd,
  0x60, 0xd8, 0xcd, 0xbd, 0x6b, 0x83, 0x88, 0xbd, 0x1e, 0x58, 0xc6, 0xbe,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc9, 0x39, 0xa3, 0xbd, 0xe7, 0x9b, 0x82, 0xbe,
  0x3b, 0x05, 0x6d, 0xbd, 0xdd, 0x7e, 0x8b, 0xbd, 0xae, 0x99, 0x03, 0x3d,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xae, 0x3f, 0x3b, 0xbe,
  0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x0e, 0xbe, 0x00, 0x00, 0x00, 0x00,
  0xf2, 0x02, 0x23, 0xbe, 0x10, 0x6f, 0xb5, 0xbd, 0x6a, 0xb8, 0x26, 0xbe,
  0x07, 0xca, 0xb8, 0xbd, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x63, 0xbd, 0xbd,
  0x00, 0x00, 0x00, 0x00, 0xbe, 0x19, 0x94, 0xbe, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xa1, 0xb9, 0x3c, 0xbd,
  0x8c, 0xfc, 0xff, 0xff, 0x90, 0xfc, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00,
  0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74,
  0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
  0xa8, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xce, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x04, 0xfd, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00, 0xe8, 0x01, 0x00, 0x00,
  0x7c, 0x01, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xda, 0xfd, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0xc4, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74,
  0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f,
  0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x32, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x20, 0x00, 0x00, 0x00, 0x1c, 0xfe, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
  0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x22, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x90, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x6a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0xd8, 0xfe, 0xff, 0xff, 0x17, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xae, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff,
  0x27, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72,
  0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0x29, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
  0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61,
  0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00,
  0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
  0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f,
  0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x3a,
  0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09
};
unsigned int solar_production_model_tflite_len = 1992;
