// Copyright(c) ON Semiconductor All rights reserved.
// Burst Pmem Code for LC898123X & LC898123A

const UINT32 ExtraPmemCode[] = {
0x6800000a, 0x20680100, 0xed21840e, 0x16802000, 0x0086c000,
0x33048680, 0x204a3a1b, 0xa1488406, 0x10000068, 0x38140520,
0x6800000c, 0x215c0960, 0x40005248, 0x00487a5c, 0xbf004050,
0x5c0071c0, 0x005c0860, 0x40005248, 0x22082184, 0x84aa0c61,
0x680204a9, 0xac460a40, 0x486c8404, 0x8000006c, 0x70280a08,
0x3812e259, 0xa0bc309a, 0xbff06c00, 0x00180832, 0x020bc285,
0x6e00001c, 0x2cb077e3, 0x01a0bc1f, 0x0b077630, 0x1a0bc201,
0x6c000330, 0x24680000, 0x0e604000, 0x02400160, 0x000000b3,
0x5c81018e, 0x805c8092, 0xc0096000, 0x0000358c, 0x85800000,
0x9408c94a, 0xc400000a, 0x08098c83, 0x2bb1826c, 0x00033008,
0x2a1a46c0, 0x0033048b, 0xc0476400, 0x40336f40, 0x00028010,
0x64008128, 0xefa8010b, 0xa148a801, 0x00000000, 0x00000000,
};

const UINT8 ContinuouslyTranslationCode[] ={
0x64, 0x00, 0x00, 0x02, 0x07, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x64, 0x00, 0x00, 0x07, 0xa7,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0xba, 0x11, 0x2b, 0xa1, 0x13, 0x68, 0x00, 0x02, 0x00, 0x38,
0x68, 0x34, 0x00, 0x09, 0x20, 0x5c, 0x00, 0x69, 0x8e, 0xb9, 0x5c, 0xbb, 0x13, 0x0c, 0x04,
0x5c, 0x81, 0x08, 0x40, 0x48, 0x5c, 0x1c, 0xc2, 0x00, 0x20, 0x68, 0x00, 0x18, 0x60, 0x08,
0x5c, 0x83, 0x00, 0x40, 0x48, 0x5c, 0x10, 0xf2, 0x00, 0x20, 0x68, 0x38, 0x1c, 0x07, 0x21,
0x5c, 0x16, 0xa0, 0x40, 0x7a, 0x5c, 0x1c, 0x50, 0x48, 0x49, 0x5c, 0x08, 0x79, 0xc9, 0x01,
0x68, 0x00, 0x40, 0x08, 0x2e, 0x84, 0x86, 0xea, 0x08, 0x21, 0x84, 0x84, 0x9a, 0x08, 0x21,
0x84, 0x84, 0x9a, 0x0c, 0x81, 0x84, 0x80, 0x9b, 0x07, 0xf9, 0x54, 0x43, 0x6a, 0x03, 0x20,
0x84, 0x04, 0x9a, 0x09, 0x83, 0x84, 0x80, 0x92, 0x88, 0x6d, 0x84, 0x0c, 0x96, 0x80, 0x00,
0x03, 0x82, 0x28, 0x18, 0xd0, 0x81, 0x27, 0xaa, 0x18, 0xa0, 0x85, 0x84, 0xa8, 0x10, 0xfa,
0x84, 0x04, 0x88, 0x10, 0xfa, 0x84, 0x0d, 0x28, 0x50, 0x7a, 0x68, 0x38, 0x14, 0x07, 0x20,
0xa1, 0x70, 0x26, 0x80, 0x00, 0x09, 0xda, 0xca, 0x10, 0x21, 0x84, 0x00, 0x85, 0x20, 0xf2,
0x00, 0x86, 0xc6, 0xc0, 0x00, 0x07, 0x87, 0xa6, 0xc0, 0x00, 0x07, 0xa7, 0xa8, 0x50, 0x6c,
0x84, 0x87, 0xa8, 0x40, 0x48, 0x66, 0x00, 0x00, 0x14, 0x88, 0x40, 0x00, 0x03, 0x03, 0xe4,
0x66, 0x00, 0x00, 0x16, 0x40, 0x68, 0x00, 0x1e, 0x1e, 0xf9, 0xba, 0x11, 0x00, 0x00, 0x00,
0x66, 0x00, 0x00, 0x2b, 0xe0, 0x66, 0x00, 0x00, 0x27, 0x80, 0x6c, 0x00, 0x00, 0x40, 0x20,
0xba, 0x08, 0x0b, 0xff, 0xc7, 0xab, 0xef, 0x08, 0x80, 0xc9, 0x5c, 0x08, 0x38, 0x80, 0x4b,
0x88, 0x17, 0x58, 0x85, 0x55, 0x88, 0x1e, 0xb8, 0x82, 0x67, 0x90, 0x35, 0xb8, 0x82, 0xd7,
0x00, 0x00, 0x06, 0xc0, 0x00, 0x04, 0x80, 0x92, 0x59, 0xe8, 0xbc, 0x11, 0x89, 0x04, 0x59,
0x38, 0x13, 0x36, 0xc7, 0x02, 0x80, 0xa0, 0x12, 0x58, 0xc8, 0xbc, 0x04, 0x83, 0x81, 0x09,
0x24, 0x06, 0xd6, 0xc0, 0x00, 0x04, 0x84, 0x90, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x48, 0x09,
0x24, 0x1e, 0xd6, 0xc0, 0x00, 0x04, 0x84, 0x9b, 0xc0, 0x27, 0x5c, 0x08, 0x4b, 0x80, 0x00,
0x6c, 0x00, 0x00, 0x48, 0x09, 0x25, 0x86, 0x8b, 0xc4, 0x49, 0x38, 0x12, 0xd6, 0xc7, 0x02,
0x80, 0xa0, 0xb2, 0x59, 0x78, 0xbc, 0x11, 0x06, 0x80, 0x00, 0x02, 0x22, 0x73, 0x82, 0x05,
0x87, 0x80, 0xb5, 0x50, 0x3f, 0x98, 0x2e, 0xb5, 0x80, 0xbc, 0x07, 0x84, 0xba, 0x38, 0x67,
0x9f, 0x98, 0x79, 0x78, 0x2f, 0x6c, 0x70, 0x28, 0x02, 0x4b, 0xbc, 0x8a, 0x26, 0xc0, 0x00,
0x04, 0x44, 0x9b, 0xc8, 0x77, 0x88, 0x5f, 0x68, 0x86, 0x6f, 0x88, 0x6e, 0xe8, 0x87, 0x6d,
0x88, 0x7e, 0xc8, 0x88, 0x6a, 0x88, 0x8e, 0x98, 0x89, 0x68, 0x88, 0x9e, 0x68, 0x8a, 0x64,
0x88, 0xae, 0x28, 0x8b, 0x60, 0x88, 0xbe, 0x58, 0x8c, 0x63, 0x88, 0xce, 0x18, 0x8d, 0x4a,
0x88, 0xdc, 0x89, 0x0e, 0x5a, 0x88, 0xf5, 0x69, 0x10, 0x58, 0x88, 0xfd, 0x46, 0x60, 0x00,
0x01, 0x64, 0x8b, 0xa1, 0x01, 0x90, 0xe1, 0x28, 0x8b, 0x20, 0x88, 0xaa, 0x28, 0x8a, 0x24,
0x88, 0x9a, 0x68, 0x8c, 0xa1, 0x88, 0xc2, 0x38, 0x8b, 0xa5, 0x88, 0x92, 0x88, 0x88, 0xa9,
0x88, 0x82, 0xa8, 0x8d, 0x88, 0x88, 0xd0, 0xa8, 0x87, 0xac, 0x88, 0x72, 0xd8, 0x86, 0xae,
0x88, 0x62, 0xf8, 0x85, 0xb6, 0x91, 0x01, 0x04, 0x22, 0xd7, 0x88, 0xf1, 0x68, 0x8f, 0x94,
0x6c, 0x70, 0x28, 0x0a, 0x0b, 0x52, 0xcb, 0xc2, 0xc0, 0x83, 0xbc, 0x11, 0x86, 0x80, 0x00,
0x02, 0x12, 0x76, 0xc0, 0x00, 0x04, 0x20, 0x95, 0x50, 0x34, 0xb0, 0x20, 0x75, 0x80, 0xe4,
0x03, 0x9d, 0x19, 0x82, 0x6b, 0x6c, 0x70, 0x28, 0x00, 0x01, 0x9f, 0x98, 0x79, 0x78, 0x61,
0xbc, 0x46, 0x26, 0xc0, 0x00, 0x04, 0x24, 0xbb, 0xc4, 0x37, 0x6c, 0x70, 0x28, 0x0a, 0x09,
0x5c, 0x08, 0xf8, 0x8d, 0x4a, 0x52, 0xcf, 0x41, 0x10, 0x58, 0x88, 0xfd, 0x48, 0x85, 0xf6,
0x88, 0x66, 0xf8, 0x86, 0xee, 0x88, 0x76, 0xd8, 0x87, 0xec, 0x88, 0x86, 0xa8, 0x88, 0xe9,
0x88, 0x96, 0x88, 0x89, 0xe6, 0x88, 0xa6, 0x48, 0x8a, 0xe2, 0x88, 0xbe, 0x58, 0x8c, 0x63,
0x88, 0xce, 0x18, 0x8d, 0xc8, 0x90, 0xe5, 0xa4, 0x20, 0x7c, 0x88, 0xf5, 0x68, 0x8b, 0x60,
0x38, 0x20, 0x46, 0xc0, 0x00, 0x04, 0x20, 0xa5, 0x50, 0x3b, 0x18, 0x2a, 0x85, 0x80, 0x98,
0x03, 0x9c, 0xa9, 0xf8, 0x00, 0x6c, 0x70, 0x28, 0x00, 0x00, 0xbc, 0x03, 0xa9, 0x40, 0x60,
0x6c, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x06, 0xc0, 0x00, 0x03, 0xe2, 0x0b, 0xa0, 0x88,
0xba, 0x10, 0x10, 0x00, 0x00, 0x91, 0x01, 0x09, 0x0e, 0x12, 0x88, 0xb2, 0x08, 0x8a, 0xa2,
0x88, 0xa2, 0x48, 0x89, 0xa6, 0x88, 0xca, 0x18, 0x8c, 0x23, 0x88, 0xba, 0x58, 0x89, 0x28,
0x88, 0x8a, 0x98, 0x88, 0x2a, 0x88, 0xd8, 0x88, 0x8d, 0x0a, 0x88, 0x7a, 0xc8, 0x87, 0x2d,
0x88, 0x6a, 0xe8, 0x86, 0x2f, 0x88, 0x5b, 0x68, 0x8f, 0x94, 0x88, 0xf1, 0x69, 0x04, 0x11,
0x88, 0x13, 0x58, 0x80, 0x89, 0x88, 0x1a, 0xb9, 0x03, 0x13, 0x88, 0x51, 0x58, 0x80, 0x0b,
0x46, 0x0b, 0x40, 0x82, 0x27, 0x88, 0x29, 0x7a, 0x81, 0x10, 0x68, 0x38, 0x14, 0x0d, 0x20,
0x5c, 0xbf, 0x03, 0x00, 0x0e, 0x5c, 0xb7, 0x11, 0xc0, 0x01, 0x5c, 0x08, 0x30, 0x40, 0x4a,
0x5c, 0x85, 0x00, 0x48, 0x48, 0x5c, 0x81, 0x08, 0x40, 0x7a, 0x5c, 0x02, 0x21, 0xc1, 0x00,
0x5c, 0x02, 0xc0, 0x40, 0x02, 0x52, 0x4c, 0xab, 0x00, 0x32, 0x80, 0x04, 0x98, 0x00, 0xc8,
0x80, 0x0d, 0x08, 0x02, 0x52, 0x00, 0x00, 0x08, 0x40, 0x08, 0x52, 0x0d, 0x23, 0xa1, 0x48,
0x84, 0x04, 0x80, 0x00, 0x00, 0x68, 0x00, 0x00, 0x21, 0x21, 0x68, 0x38, 0x14, 0x05, 0x20,
0x5c, 0x00, 0x60, 0x48, 0x7a, 0x5c, 0xbf, 0x02, 0x08, 0x21, 0x84, 0x00, 0xa5, 0x54, 0x3b,
0x04, 0x84, 0x85, 0xc0, 0x87, 0x04, 0x04, 0xa9, 0xc0, 0x00, 0x84, 0x00, 0x85, 0x24, 0xd2,
0x20, 0x84, 0x18, 0x48, 0x7a, 0x68, 0x00, 0x00, 0x5f, 0xac, 0xa0, 0xca, 0x14, 0x60, 0xa4,
0x04, 0x04, 0x88, 0x48, 0x6c, 0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x00, 0x00, 0x42, 0x00,
0x32, 0x00, 0x0b, 0xc0, 0x8c, 0xab, 0xff, 0x06, 0xc0, 0x00, 0x04, 0x40, 0x03, 0x20, 0x40,
0xbc, 0xec, 0x56, 0x40, 0x00, 0x01, 0x64, 0xfa, 0x80, 0x10, 0x68, 0x00, 0x00, 0x25, 0x20,
0xb0, 0x70, 0x29, 0x40, 0x29, 0x30, 0x08, 0x8b, 0xcd, 0x50, 0xb0, 0x70, 0xa3, 0x00, 0x88,
0xbc, 0xbf, 0x0b, 0x07, 0x12, 0x30, 0x08, 0x8b, 0xca, 0x80, 0xb0, 0x71, 0xa3, 0x00, 0x88,
0xbc, 0x7f, 0x0b, 0x07, 0x22, 0x30, 0x08, 0x8b, 0xc5, 0xd0, 0xb0, 0x72, 0xa3, 0x00, 0x88,
0x40, 0x00, 0x03, 0xc1, 0xa0, 0x68, 0x38, 0x14, 0x04, 0x21, 0x5c, 0x08, 0x52, 0xff, 0xa1,
0x5c, 0x10, 0x00, 0x48, 0x01, 0x52, 0x04, 0x4b, 0x07, 0xfa, 0x5c, 0x80, 0x00, 0x48, 0x51,
0x68, 0x00, 0x00, 0x25, 0x20, 0x5c, 0x00, 0x09, 0xc8, 0x81, 0x55, 0x02, 0x49, 0xc0, 0x02,
0x5d, 0x02, 0x09, 0x50, 0x62, 0x58, 0x00, 0x41, 0x84, 0x68, 0xbf, 0xf9, 0xa9, 0x8a, 0x01,
0x6e, 0x00, 0x00, 0x4a, 0x28, 0xbc, 0xb7, 0xf8, 0x48, 0x50, 0x32, 0x04, 0x0b, 0xc1, 0xc0,
0x6e, 0x00, 0x00, 0x4a, 0xa8, 0x32, 0x00, 0x0b, 0xc0, 0x40, 0x88, 0x07, 0x66, 0x60, 0x00,
0x02, 0xa0, 0x08, 0x80, 0x36, 0x68, 0x38, 0x04, 0x00, 0x20, 0x5c, 0x82, 0x03, 0x10, 0x60,
0x5c, 0x00, 0x50, 0x40, 0x01, 0x54, 0x40, 0x4b, 0x07, 0xd0, 0x84, 0x05, 0x1a, 0x00, 0x80,
0x80, 0x25, 0x28, 0x02, 0x50, 0xb0, 0x89, 0x88, 0x40, 0x02, 0x29, 0x01, 0x08, 0x40, 0x50,
0x68, 0x00, 0x3f, 0x93, 0x00, 0xbc, 0x99, 0xf8, 0x41, 0xd0, 0x68, 0x00, 0x00, 0x3a, 0x20,
0x5c, 0x80, 0x43, 0x07, 0xf8, 0x84, 0x00, 0x25, 0x1d, 0x0a, 0x20, 0x6a, 0x05, 0x44, 0x10,
0xa0, 0x00, 0x15, 0x44, 0x09, 0x14, 0x04, 0x1a, 0x02, 0x78, 0x84, 0x00, 0x15, 0x1d, 0x06,
0x14, 0x8e, 0x25, 0x44, 0x11, 0x20, 0x67, 0x05, 0x44, 0x04, 0x14, 0x04, 0x26, 0x80, 0x00,
0x08, 0x02, 0x16, 0x00, 0x01, 0x00, 0x03, 0x09, 0x40, 0x40, 0x00, 0x00, 0x09, 0x48, 0x08,
0x94, 0x04, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x4a, 0x28, 0xbc, 0x79, 0xf6, 0xc7, 0x02,
0x80, 0x25, 0x03, 0x20, 0x40, 0xbc, 0x13, 0x86, 0x80, 0x00, 0x02, 0x56, 0x00, 0x00, 0x00,
0xa0, 0x23, 0x98, 0x48, 0x60, 0x60, 0x00, 0x20, 0x00, 0x40, 0x5c, 0x80, 0x42, 0x0e, 0x30,
0x68, 0x00, 0x00, 0x80, 0x21, 0x94, 0x00, 0x89, 0x48, 0x40, 0x00, 0x00, 0x06, 0x80, 0x00,
0x0d, 0x62, 0x0b, 0xc6, 0x4f, 0x6c, 0x00, 0x00, 0x40, 0x60, 0x68, 0x00, 0x00, 0x37, 0x20,
0x00, 0x00, 0x08, 0x40, 0x00, 0x5d, 0x00, 0x02, 0x06, 0x40, 0x6c, 0x70, 0x28, 0x02, 0x50,
0xbc, 0x59, 0xf9, 0x40, 0x60, 0x68, 0x00, 0x00, 0x35, 0x20, 0x32, 0x04, 0x0b, 0xc1, 0xa8,
0x38, 0x00, 0x86, 0x80, 0x00, 0x06, 0xe2, 0x16, 0x00, 0x00, 0x00, 0x04, 0x86, 0xc0, 0x00,
0x06, 0xa5, 0x05, 0xc8, 0x04, 0x20, 0x5f, 0x89, 0x40, 0x08, 0x94, 0x84, 0x00, 0x00, 0x00,
0x60, 0x00, 0x10, 0x00, 0x40, 0x68, 0x00, 0x00, 0x29, 0x60, 0x68, 0x00, 0x00, 0x72, 0x21,
0x94, 0x00, 0x89, 0x48, 0x40, 0x00, 0x00, 0x06, 0x80, 0x00, 0x0b, 0x62, 0x0b, 0xc3, 0xcf,
0x6c, 0x00, 0x00, 0x40, 0x60, 0x6c, 0x00, 0x00, 0x6a, 0x00, 0x5d, 0x00, 0x02, 0x06, 0x00,
0x6c, 0x70, 0x28, 0x02, 0x50, 0xbc, 0x33, 0xf9, 0x40, 0x60, 0x59, 0x02, 0x02, 0xc2, 0x20,
0xbc, 0x09, 0x86, 0x80, 0x00, 0x03, 0x62, 0x08, 0x80, 0x76, 0x68, 0x00, 0x00, 0x4a, 0x20,
0x66, 0x00, 0x00, 0x30, 0x20, 0xbc, 0x27, 0xf8, 0x80, 0x36, 0x00, 0x00, 0x08, 0x02, 0x00,
0x3a, 0x00, 0x06, 0xc7, 0x02, 0x80, 0x25, 0x0b, 0xc2, 0x0f, 0x40, 0x00, 0x01, 0x40, 0x60,
0x59, 0x02, 0x02, 0xc2, 0x20, 0xbc, 0x09, 0x86, 0x80, 0x00, 0x03, 0x62, 0x08, 0x80, 0x76,
0x68, 0x00, 0x00, 0x3e, 0x20, 0x66, 0x00, 0x00, 0x30, 0x20, 0xbc, 0x13, 0xf8, 0x80, 0x36,
0x00, 0x00, 0x08, 0x02, 0x00, 0x3a, 0x00, 0x06, 0xc7, 0x02, 0x80, 0x25, 0x0b, 0xc0, 0xcf,
0x94, 0x06, 0x03, 0x20, 0x40, 0xbc, 0x09, 0x16, 0x80, 0x00, 0x03, 0x82, 0x00, 0x00, 0x00,
0x84, 0x00, 0x05, 0xd0, 0x00, 0x20, 0x66, 0x06, 0xc7, 0x02, 0x80, 0x25, 0x09, 0x40, 0x60,
0x64, 0x00, 0x00, 0x16, 0x4f, 0xa8, 0x01, 0x0b, 0xa1, 0x48, 0xa8, 0x01, 0x00, 0x00, 0x00,
0x40, 0x00, 0x03, 0xa1, 0x40, 0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0xbe, 0x03, 0x00, 0x3c,
0x5c, 0x00, 0x71, 0xc0, 0x01, 0x5c, 0x81, 0x00, 0x40, 0x48, 0x5c, 0x01, 0x42, 0x08, 0x00,
0x5c, 0x09, 0xe0, 0x0a, 0x4a, 0x84, 0x85, 0x00, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x02,
0x25, 0x91, 0x0b, 0xff, 0xc0, 0x5c, 0x01, 0x10, 0x40, 0x7a, 0xa0, 0x04, 0x08, 0x40, 0x50,
0xa0, 0x4a, 0x06, 0x80, 0x04, 0x00, 0x02, 0xea, 0x00, 0x61, 0x84, 0x06, 0xe8, 0x0a, 0x4a,
0x84, 0x85, 0x20, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x0a, 0x25, 0x93, 0x0b, 0xff, 0xc0,
0x5c, 0x02, 0x60, 0x41, 0xfa, 0xba, 0x14, 0x86, 0xc0, 0x00, 0x07, 0x04, 0x80, 0x00, 0x00,
0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0x00, 0x42, 0xff, 0x60, 0x84, 0x05, 0x09, 0xc0, 0x00,
0x68, 0x00, 0x40, 0x00, 0x28, 0x84, 0x06, 0x8a, 0x00, 0x20, 0x68, 0x38, 0x1c, 0x01, 0x21,
0x60, 0x00, 0x00, 0x00, 0xa8, 0x5c, 0x09, 0xf0, 0x40, 0x7a, 0x5c, 0x00, 0xa0, 0x41, 0x50,
0x6c, 0x70, 0x38, 0x02, 0x7a, 0x84, 0x9c, 0x80, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x00,
0x25, 0x98, 0x0b, 0xff, 0xc0, 0x00, 0x00, 0x0b, 0xa1, 0x48, 0x84, 0x17, 0xa0, 0x00, 0x00,
0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0x00, 0x62, 0xff, 0x80, 0x5c, 0x0f, 0xf0, 0x40, 0x48,
0x9c, 0x00, 0x08, 0x40, 0x4a, 0xa0, 0x42, 0x06, 0x80, 0x04, 0x00, 0x02, 0x98, 0x40, 0x69,
0x40, 0x00, 0x00, 0x41, 0x48, 0x60, 0x00, 0x40, 0x00, 0x60, 0x5c, 0x80, 0x43, 0x07, 0xfc,
0x68, 0x00, 0x00, 0x6e, 0x20, 0x6c, 0x70, 0x38, 0x00, 0x0a, 0x28, 0x93, 0x69, 0x40, 0x46,
0x00, 0x00, 0x0b, 0xa1, 0x40, 0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0x00, 0x42, 0xff, 0x81,
0x84, 0x05, 0x09, 0xc0, 0x80, 0x84, 0x07, 0xaa, 0x04, 0x20, 0x68, 0x00, 0x40, 0x00, 0x29,
0x84, 0x06, 0x96, 0x80, 0x00, 0x06, 0xe2, 0x16, 0x83, 0x81, 0xc0, 0x12, 0x26, 0x00, 0x04,
0x00, 0x0b, 0x05, 0xc0, 0x9f, 0x04, 0x1d, 0x05, 0xc8, 0x04, 0x30, 0x01, 0x49, 0x48, 0x08,
0x6c, 0x70, 0x38, 0x02, 0x50, 0x85, 0x1c, 0x80, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x00,
0x25, 0x98, 0x0b, 0xff, 0xc0, 0x00, 0x00, 0x06, 0x80, 0x00, 0x02, 0x02, 0x16, 0x80, 0x00,
0x09, 0xda, 0xc8, 0x48, 0x6c, 0x84, 0x1f, 0xa4, 0x60, 0xa4, 0x20, 0xaa, 0x18, 0x48, 0x7a,
0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x00, 0x00, 0x76, 0x60, 0x60, 0x00, 0x30, 0x00, 0x30,
0x68, 0x00, 0x00, 0x25, 0x61, 0x39, 0x00, 0x89, 0x48, 0x0c, 0x94, 0x04, 0x40, 0x00, 0x00,
0x68, 0x00, 0x00, 0x36, 0x20, 0x38, 0x00, 0xc8, 0x40, 0x48, 0x68, 0x00, 0x00, 0xc5, 0xac,
0x46, 0x0a, 0x42, 0x06, 0xc0, 0x84, 0x06, 0xc0, 0x00, 0x00, 0xab, 0xff, 0x06, 0xc0, 0x00,
0x07, 0x80, 0x96, 0xc0, 0x00, 0x07, 0x62, 0x08, 0x80, 0x76, 0x66, 0x00, 0x00, 0x33, 0x08,
0x5c, 0x04, 0x33, 0x00, 0x3c, 0x6c, 0x00, 0x00, 0x78, 0x00, 0x68, 0x00, 0x00, 0x20, 0x20,
0x5c, 0x04, 0x10, 0x80, 0x36, 0x68, 0x00, 0x00, 0x9d, 0xac, 0x54, 0x04, 0x20, 0x40, 0x6c,
0x6c, 0x00, 0x00, 0x78, 0x48, 0x46, 0x0a, 0x42, 0x02, 0xc0, 0x84, 0x07, 0xaa, 0x80, 0x10,
0x68, 0x38, 0x1c, 0x07, 0x21, 0x59, 0x01, 0x82, 0xff, 0x80, 0x5c, 0x00, 0x40, 0x48, 0x48,
0x9c, 0x80, 0x14, 0x20, 0xe6, 0x84, 0x87, 0xa8, 0x49, 0x50, 0x5c, 0x09, 0xd3, 0x80, 0x00,
0x62, 0x00, 0x00, 0x01, 0x46, 0x68, 0x38, 0x1c, 0x02, 0x22, 0x5c, 0x80, 0x43, 0x00, 0x10,
0x6c, 0x70, 0x38, 0x04, 0x49, 0xa1, 0x42, 0x39, 0x40, 0x09, 0x94, 0x00, 0xb5, 0x19, 0x0d,
0x94, 0x00, 0xe2, 0x34, 0x36, 0x29, 0x0c, 0x92, 0x91, 0x89, 0x85, 0x85, 0x18, 0x59, 0xd0,
0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x01, 0x25, 0x88, 0x8b, 0xff, 0xc0,
0x2a, 0x06, 0xdb, 0xa1, 0x48, 0x84, 0x97, 0xa0, 0x00, 0x00, 0x68, 0x38, 0x1c, 0x07, 0x20,
0x5c, 0x01, 0xd2, 0xbf, 0xc0, 0x5c, 0xbc, 0x00, 0x40, 0x52, 0x5c, 0x00, 0x01, 0xc0, 0x00,
0x55, 0x00, 0x30, 0x80, 0x60, 0x68, 0x00, 0x3f, 0xff, 0xee, 0x6c, 0x00, 0x00, 0xfe, 0x6e,
0x5c, 0x81, 0x00, 0x80, 0xca, 0x5c, 0x0f, 0xd0, 0x81, 0x76, 0x5c, 0x82, 0x08, 0x02, 0x52,
0x5c, 0x00, 0x50, 0x00, 0xca, 0x80, 0x25, 0x2b, 0x07, 0xfa, 0x60, 0x00, 0x40, 0x00, 0xc0,
0x5c, 0x80, 0x40, 0x81, 0xe0, 0x68, 0x00, 0x00, 0x3e, 0x20, 0x6c, 0x70, 0x38, 0x00, 0x01,
0x28, 0x88, 0xb5, 0x1d, 0x07, 0x14, 0x04, 0x32, 0x3c, 0x0f, 0x28, 0x8b, 0x15, 0x44, 0x5c,
0x94, 0x04, 0x19, 0x40, 0x41, 0x00, 0x00, 0x08, 0x82, 0x50, 0x68, 0x00, 0x00, 0x3e, 0x20,
0x66, 0x00, 0x00, 0x42, 0x68, 0x40, 0x00, 0x03, 0x06, 0x04, 0x5c, 0x10, 0x10, 0x80, 0x80,
0x54, 0x04, 0x30, 0x82, 0x00, 0x55, 0x02, 0x00, 0x81, 0xa0, 0x58, 0x04, 0x02, 0xc0, 0x20,
0xbf, 0xd9, 0xa5, 0xc0, 0xfd, 0x08, 0x0c, 0xa5, 0xc0, 0x05, 0x30, 0x0f, 0xb5, 0xc8, 0x20,
0x88, 0x02, 0x26, 0xc7, 0x03, 0x80, 0xe5, 0x28, 0x12, 0x53, 0x68, 0x00, 0x40, 0x00, 0x2a,
0x5c, 0x83, 0x10, 0x10, 0xea, 0x5c, 0x80, 0x4a, 0x10, 0x01, 0x6c, 0x00, 0x00, 0xfe, 0x01,
0x68, 0x00, 0x00, 0x3a, 0x23, 0x51, 0xd0, 0x73, 0x07, 0xf8, 0x54, 0x40, 0x50, 0x11, 0x52,
0x54, 0x41, 0x88, 0x1a, 0x51, 0x88, 0x06, 0x2a, 0x40, 0xc0, 0x94, 0x0c, 0x18, 0x80, 0xe3,
0x68, 0x00, 0x00, 0x6e, 0x22, 0x60, 0x00, 0x20, 0x00, 0x60, 0x40, 0x00, 0x01, 0x40, 0xc2,
0x68, 0x00, 0x3f, 0xff, 0xc2, 0x6c, 0x70, 0x38, 0x00, 0x01, 0x28, 0x80, 0x99, 0x50, 0xc1,
0x00, 0x00, 0x06, 0x80, 0x00, 0x07, 0x02, 0x2b, 0x07, 0xf8, 0x60, 0x00, 0x00, 0x00, 0x28,
0x88, 0x1e, 0x06, 0x80, 0x00, 0x06, 0xe2, 0x09, 0x50, 0xc0, 0x6c, 0x00, 0x00, 0xfe, 0x52,
0x88, 0x26, 0x16, 0x60, 0x00, 0x04, 0x26, 0x83, 0x81, 0x04, 0x5c, 0x01, 0x00, 0x82, 0x20,
0x5c, 0x81, 0x08, 0x80, 0x21, 0x5c, 0x83, 0x18, 0x41, 0xd0, 0x5c, 0x00, 0x5a, 0x0c, 0x80,
0x5c, 0x82, 0x10, 0x02, 0xfa, 0x68, 0x00, 0x40, 0x00, 0x2e, 0x68, 0x00, 0x00, 0x80, 0x23,
0x5c, 0x09, 0xd0, 0x01, 0xee, 0x5c, 0x08, 0x30, 0x03, 0x53, 0x68, 0x38, 0x1c, 0x01, 0x22,
0x6c, 0x00, 0x00, 0xfe, 0x01, 0x88, 0x0a, 0x18, 0x81, 0x36, 0xa1, 0x80, 0x46, 0x00, 0x02,
0x00, 0x0d, 0x05, 0xc8, 0x04, 0x04, 0x85, 0x15, 0xc0, 0x08, 0x20, 0xf2, 0x19, 0x60, 0x0f,
0x23, 0x43, 0xf6, 0xc7, 0x03, 0x80, 0x24, 0xb8, 0x51, 0xd0, 0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x70, 0x38, 0x0c, 0x0b, 0x25, 0x8b, 0x8b, 0xff, 0xc0, 0x00, 0x00, 0x08, 0x02, 0xca,
0x80, 0x16, 0xe8, 0x02, 0xd3, 0x60, 0x00, 0x10, 0x00, 0x6f, 0x6c, 0x70, 0x38, 0x00, 0x03,
0x51, 0xe0, 0xe3, 0x80, 0x00, 0x6c, 0x70, 0x38, 0x00, 0x03, 0x51, 0xe0, 0xe1, 0x58, 0x44,
0x00, 0x00, 0x05, 0x1d, 0x07, 0x15, 0x84, 0x4b, 0x07, 0xfb, 0x54, 0x47, 0xb0, 0x02, 0xfa,
0x68, 0x00, 0x40, 0x08, 0x29, 0x54, 0x46, 0x48, 0x81, 0xa3, 0x84, 0x06, 0x99, 0x58, 0x46,
0x60, 0x00, 0x00, 0x00, 0xb4, 0x95, 0x86, 0x1a, 0x1c, 0x1b, 0x95, 0x80, 0x92, 0x34, 0x09,
0x6c, 0x70, 0x38, 0x02, 0x51, 0x85, 0x1d, 0x00, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x01,
0x25, 0x88, 0x8b, 0xff, 0xc0, 0x00, 0x00, 0x06, 0x80, 0x00, 0x09, 0xda, 0xc8, 0x48, 0x6c,
0x84, 0x1f, 0xa4, 0x60, 0xa4, 0x20, 0xae, 0x18, 0x48, 0x7a, 0x40, 0x00, 0x02, 0x80, 0x40,
0x32, 0x02, 0x0b, 0xc2, 0x25, 0x68, 0x00, 0x02, 0x00, 0x02, 0x62, 0x00, 0x00, 0x01, 0xa4,
0x68, 0x00, 0x3b, 0xf7, 0x80, 0x5c, 0x80, 0x43, 0x80, 0x00, 0x60, 0x00, 0x00, 0x01, 0x38,
0x94, 0x00, 0xc6, 0xc0, 0x00, 0x0f, 0xe0, 0x32, 0xa8, 0x61, 0x23, 0xbd, 0xe2, 0x98, 0x71,
0x2a, 0x84, 0x92, 0x31, 0x0e, 0x23, 0x05, 0xf2, 0x98, 0xf6, 0x23, 0x2c, 0xd2, 0x88, 0x3f,
0x29, 0x8e, 0xb2, 0xac, 0x36, 0x29, 0x07, 0x92, 0x88, 0x9b, 0x23, 0x07, 0x62, 0x30, 0x5b,
0x29, 0x18, 0x92, 0x38, 0x64, 0x54, 0x86, 0x5b, 0x80, 0x00, 0x6c, 0x00, 0x00, 0xfe, 0x53,
0x40, 0x00, 0x03, 0xa1, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/*
0x64, 0x00, 0x00, 0x02, 0x07, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x64, 0x00, 0x00, 0x07, 0xa7,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00, 0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00, 0xba, 0x11, 0x2b, 0xa1, 0x13, 0x68, 0x00, 0x02, 0x00, 0x38,
0x68, 0x34, 0x00, 0x09, 0x20, 0x5c, 0x00, 0x69, 0x8e, 0xb9, 0x5c, 0xbb, 0x13, 0x0c, 0x04,
0x5c, 0x81, 0x08, 0x40, 0x48, 0x5c, 0x1c, 0xc2, 0x00, 0x20, 0x68, 0x00, 0x18, 0x60, 0x08,
0x5c, 0x83, 0x00, 0x40, 0x48, 0x5c, 0x10, 0xf2, 0x00, 0x20, 0x68, 0x38, 0x1c, 0x07, 0x21,
0x5c, 0x16, 0xa0, 0x40, 0x7a, 0x5c, 0x1c, 0x50, 0x48, 0x49, 0x5c, 0x08, 0x79, 0xc9, 0x01,
0x68, 0x00, 0x40, 0x08, 0x2e, 0x84, 0x86, 0xea, 0x08, 0x21, 0x84, 0x84, 0x9a, 0x08, 0x21,
0x84, 0x84, 0x9a, 0x0c, 0x81, 0x84, 0x80, 0x9b, 0x07, 0xf9, 0x54, 0x43, 0x6a, 0x03, 0x20,
0x84, 0x04, 0x9a, 0x09, 0x83, 0x84, 0x80, 0x92, 0x88, 0x6d, 0x84, 0x0c, 0x96, 0x80, 0x00,
0x03, 0x82, 0x28, 0x18, 0xd0, 0x81, 0x27, 0xaa, 0x18, 0xa0, 0x85, 0x84, 0xa8, 0x10, 0xfa,
0x84, 0x04, 0x88, 0x10, 0xfa, 0x84, 0x0d, 0x28, 0x50, 0x7a, 0x68, 0x38, 0x14, 0x07, 0x20,
0xa1, 0x70, 0x26, 0x80, 0x00, 0x09, 0xda, 0xca, 0x10, 0x21, 0x84, 0x00, 0x85, 0x20, 0xf2,
0x00, 0x86, 0xc6, 0xc0, 0x00, 0x07, 0x87, 0xa6, 0xc0, 0x00, 0x07, 0xa7, 0xa8, 0x50, 0x6c,
0x84, 0x87, 0xa8, 0x40, 0x48, 0x66, 0x00, 0x00, 0x14, 0x88, 0x40, 0x00, 0x03, 0x03, 0xe4,
0x66, 0x00, 0x00, 0x16, 0x40, 0x68, 0x00, 0x1e, 0x1e, 0xf9, 0xba, 0x11, 0x00, 0x00, 0x00,
0x66, 0x00, 0x00, 0x2b, 0xe0, 0x66, 0x00, 0x00, 0x27, 0x80, 0x6c, 0x00, 0x00, 0x40, 0x20,
0xba, 0x08, 0x0b, 0xff, 0xc7, 0xab, 0xef, 0x08, 0x80, 0xc9, 0x5c, 0x08, 0x38, 0x80, 0x4b,
0x88, 0x17, 0x58, 0x85, 0x55, 0x88, 0x1e, 0xb8, 0x82, 0x67, 0x90, 0x35, 0xb8, 0x82, 0xd7,
0x00, 0x00, 0x06, 0xc0, 0x00, 0x04, 0x80, 0x92, 0x59, 0xe8, 0xbc, 0x11, 0x89, 0x04, 0x59,
0x38, 0x13, 0x36, 0xc7, 0x02, 0x80, 0xa0, 0x12, 0x58, 0xc8, 0xbc, 0x04, 0x83, 0x81, 0x09,
0x24, 0x06, 0xd6, 0xc0, 0x00, 0x04, 0x84, 0x90, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x48, 0x09,
0x24, 0x1e, 0xd6, 0xc0, 0x00, 0x04, 0x84, 0x9b, 0xc0, 0x27, 0x5c, 0x08, 0x4b, 0x80, 0x00,
0x6c, 0x00, 0x00, 0x48, 0x09, 0x25, 0x86, 0x8b, 0xc4, 0x49, 0x38, 0x12, 0xd6, 0xc7, 0x02,
0x80, 0xa0, 0xb2, 0x59, 0x78, 0xbc, 0x11, 0x06, 0x80, 0x00, 0x02, 0x22, 0x73, 0x82, 0x05,
0x87, 0x80, 0xb5, 0x50, 0x3f, 0x98, 0x2e, 0xb5, 0x80, 0xbc, 0x07, 0x84, 0xba, 0x38, 0x67,
0x9f, 0x98, 0x79, 0x78, 0x2f, 0x6c, 0x70, 0x28, 0x02, 0x4b, 0xbc, 0x8a, 0x26, 0xc0, 0x00,
0x04, 0x44, 0x9b, 0xc8, 0x77, 0x88, 0x5f, 0x68, 0x86, 0x6f, 0x88, 0x6e, 0xe8, 0x87, 0x6d,
0x88, 0x7e, 0xc8, 0x88, 0x6a, 0x88, 0x8e, 0x98, 0x89, 0x68, 0x88, 0x9e, 0x68, 0x8a, 0x64,
0x88, 0xae, 0x28, 0x8b, 0x60, 0x88, 0xbe, 0x58, 0x8c, 0x63, 0x88, 0xce, 0x18, 0x8d, 0x4a,
0x88, 0xdc, 0x89, 0x0e, 0x5a, 0x88, 0xf5, 0x69, 0x10, 0x58, 0x88, 0xfd, 0x46, 0x60, 0x00,
0x01, 0x64, 0x8b, 0xa1, 0x01, 0x90, 0xe1, 0x28, 0x8b, 0x20, 0x88, 0xaa, 0x28, 0x8a, 0x24,
0x88, 0x9a, 0x68, 0x8c, 0xa1, 0x88, 0xc2, 0x38, 0x8b, 0xa5, 0x88, 0x92, 0x88, 0x88, 0xa9,
0x88, 0x82, 0xa8, 0x8d, 0x88, 0x88, 0xd0, 0xa8, 0x87, 0xac, 0x88, 0x72, 0xd8, 0x86, 0xae,
0x88, 0x62, 0xf8, 0x85, 0xb6, 0x91, 0x01, 0x04, 0x22, 0xd7, 0x88, 0xf1, 0x68, 0x8f, 0x94,
0x6c, 0x70, 0x28, 0x0a, 0x0b, 0x52, 0xcb, 0xc2, 0xc0, 0x83, 0xbc, 0x11, 0x86, 0x80, 0x00,
0x02, 0x12, 0x76, 0xc0, 0x00, 0x04, 0x20, 0x95, 0x50, 0x34, 0xb0, 0x20, 0x75, 0x80, 0xe4,
0x03, 0x9d, 0x19, 0x82, 0x6b, 0x6c, 0x70, 0x28, 0x00, 0x01, 0x9f, 0x98, 0x79, 0x78, 0x61,
0xbc, 0x46, 0x26, 0xc0, 0x00, 0x04, 0x24, 0xbb, 0xc4, 0x37, 0x6c, 0x70, 0x28, 0x0a, 0x09,
0x5c, 0x08, 0xf8, 0x8d, 0x4a, 0x52, 0xcf, 0x41, 0x10, 0x58, 0x88, 0xfd, 0x48, 0x85, 0xf6,
0x88, 0x66, 0xf8, 0x86, 0xee, 0x88, 0x76, 0xd8, 0x87, 0xec, 0x88, 0x86, 0xa8, 0x88, 0xe9,
0x88, 0x96, 0x88, 0x89, 0xe6, 0x88, 0xa6, 0x48, 0x8a, 0xe2, 0x88, 0xbe, 0x58, 0x8c, 0x63,
0x88, 0xce, 0x18, 0x8d, 0xc8, 0x90, 0xe5, 0xa4, 0x20, 0x7c, 0x88, 0xf5, 0x68, 0x8b, 0x60,
0x38, 0x20, 0x46, 0xc0, 0x00, 0x04, 0x20, 0xa5, 0x50, 0x3b, 0x18, 0x2a, 0x85, 0x80, 0x98,
0x03, 0x9c, 0xa9, 0xf8, 0x00, 0x6c, 0x70, 0x28, 0x00, 0x00, 0xbc, 0x03, 0xa9, 0x40, 0x60,
0x6c, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x06, 0xc0, 0x00, 0x03, 0xe2, 0x0b, 0xa0, 0x88,
0xba, 0x10, 0x10, 0x00, 0x00, 0x91, 0x01, 0x09, 0x0e, 0x12, 0x88, 0xb2, 0x08, 0x8a, 0xa2,
0x88, 0xa2, 0x48, 0x89, 0xa6, 0x88, 0xca, 0x18, 0x8c, 0x23, 0x88, 0xba, 0x58, 0x89, 0x28,
0x88, 0x8a, 0x98, 0x88, 0x2a, 0x88, 0xd8, 0x88, 0x8d, 0x0a, 0x88, 0x7a, 0xc8, 0x87, 0x2d,
0x88, 0x6a, 0xe8, 0x86, 0x2f, 0x88, 0x5b, 0x68, 0x8f, 0x94, 0x88, 0xf1, 0x69, 0x04, 0x11,
0x88, 0x13, 0x58, 0x80, 0x89, 0x88, 0x1a, 0xb9, 0x03, 0x13, 0x88, 0x51, 0x58, 0x80, 0x0b,
0x46, 0x0b, 0x40, 0x82, 0x27, 0x88, 0x29, 0x7a, 0x81, 0x10, 0x68, 0x38, 0x14, 0x0d, 0x20,
0x5c, 0xbf, 0x03, 0x00, 0x0e, 0x5c, 0xb7, 0x11, 0xc0, 0x01, 0x5c, 0x08, 0x30, 0x40, 0x4a,
0x5c, 0x85, 0x00, 0x48, 0x48, 0x5c, 0x81, 0x08, 0x40, 0x7a, 0x5c, 0x02, 0x21, 0xc1, 0x00,
0x5c, 0x02, 0xc0, 0x40, 0x02, 0x52, 0x4c, 0xab, 0x00, 0x32, 0x80, 0x04, 0x98, 0x00, 0xc8,
0x80, 0x0d, 0x08, 0x02, 0x52, 0x00, 0x00, 0x08, 0x40, 0x08, 0x52, 0x0d, 0x23, 0xa1, 0x48,
0x84, 0x04, 0x80, 0x00, 0x00, 0x68, 0x00, 0x00, 0x21, 0x21, 0x68, 0x38, 0x14, 0x05, 0x20,
0x5c, 0x00, 0x60, 0x48, 0x7a, 0x5c, 0xbf, 0x02, 0x08, 0x21, 0x84, 0x00, 0xa5, 0x54, 0x3b,
0x04, 0x84, 0x85, 0xc0, 0x87, 0x04, 0x04, 0xa9, 0xc0, 0x00, 0x84, 0x00, 0x85, 0x24, 0xd2,
0x20, 0x84, 0x18, 0x48, 0x7a, 0x68, 0x00, 0x00, 0x5f, 0xac, 0xa0, 0xca, 0x14, 0x60, 0xa4,
0x04, 0x04, 0x88, 0x48, 0x6c, 0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x00, 0x00, 0x42, 0x00,
0x32, 0x00, 0x0b, 0xc0, 0x8c, 0xab, 0xff, 0x06, 0xc0, 0x00, 0x04, 0x40, 0x03, 0x20, 0x40,
0xbc, 0xec, 0x56, 0x40, 0x00, 0x01, 0x64, 0xfa, 0x80, 0x10, 0x68, 0x00, 0x00, 0x25, 0x20,
0xb0, 0x70, 0x29, 0x40, 0x29, 0x30, 0x08, 0x8b, 0xcd, 0x50, 0xb0, 0x70, 0xa3, 0x00, 0x88,
0xbc, 0xbf, 0x0b, 0x07, 0x12, 0x30, 0x08, 0x8b, 0xca, 0x80, 0xb0, 0x71, 0xa3, 0x00, 0x88,
0xbc, 0x7f, 0x0b, 0x07, 0x22, 0x30, 0x08, 0x8b, 0xc5, 0xd0, 0xb0, 0x72, 0xa3, 0x00, 0x88,
0x40, 0x00, 0x03, 0xc1, 0xa0, 0x68, 0x38, 0x14, 0x04, 0x21, 0x5c, 0x08, 0x52, 0xff, 0xa1,
0x5c, 0x10, 0x00, 0x48, 0x01, 0x52, 0x04, 0x4b, 0x07, 0xfa, 0x5c, 0x80, 0x00, 0x48, 0x51,
0x68, 0x00, 0x00, 0x25, 0x20, 0x5c, 0x00, 0x09, 0xc8, 0x81, 0x55, 0x02, 0x49, 0xc0, 0x02,
0x5d, 0x02, 0x09, 0x50, 0x62, 0x58, 0x00, 0x41, 0x84, 0x68, 0xbf, 0xf9, 0xa9, 0x8a, 0x01,
0x6e, 0x00, 0x00, 0x4a, 0x28, 0xbc, 0xb7, 0xf8, 0x48, 0x50, 0x32, 0x04, 0x0b, 0xc1, 0xc0,
0x6e, 0x00, 0x00, 0x4a, 0xa8, 0x32, 0x00, 0x0b, 0xc0, 0x40, 0x88, 0x07, 0x66, 0x60, 0x00,
0x02, 0xa0, 0x08, 0x80, 0x36, 0x68, 0x38, 0x04, 0x00, 0x20, 0x5c, 0x82, 0x03, 0x10, 0x60,
0x5c, 0x00, 0x50, 0x40, 0x01, 0x54, 0x40, 0x4b, 0x07, 0xd0, 0x84, 0x05, 0x1a, 0x00, 0x80,
0x80, 0x25, 0x28, 0x02, 0x50, 0xb0, 0x89, 0x88, 0x40, 0x02, 0x29, 0x01, 0x08, 0x40, 0x50,
0x68, 0x00, 0x3f, 0x93, 0x00, 0xbc, 0x99, 0xf8, 0x41, 0xd0, 0x68, 0x00, 0x00, 0x3a, 0x20,
0x5c, 0x80, 0x43, 0x07, 0xf8, 0x84, 0x00, 0x25, 0x1d, 0x0a, 0x20, 0x6a, 0x05, 0x44, 0x10,
0xa0, 0x00, 0x15, 0x44, 0x09, 0x14, 0x04, 0x1a, 0x02, 0x78, 0x84, 0x00, 0x15, 0x1d, 0x06,
0x14, 0x8e, 0x25, 0x44, 0x11, 0x20, 0x67, 0x05, 0x44, 0x04, 0x14, 0x04, 0x26, 0x80, 0x00,
0x08, 0x02, 0x16, 0x00, 0x01, 0x00, 0x03, 0x09, 0x40, 0x40, 0x00, 0x00, 0x09, 0x48, 0x08,
0x94, 0x04, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x4a, 0x28, 0xbc, 0x79, 0xf6, 0xc7, 0x02,
0x80, 0x25, 0x03, 0x20, 0x40, 0xbc, 0x13, 0x86, 0x80, 0x00, 0x02, 0x56, 0x00, 0x00, 0x00,
0xa0, 0x23, 0x98, 0x48, 0x60, 0x60, 0x00, 0x10, 0x00, 0x40, 0x5c, 0x80, 0x42, 0x0e, 0x30,
0x68, 0x00, 0x00, 0x80, 0x21, 0x94, 0x00, 0x89, 0x48, 0x40, 0x00, 0x00, 0x06, 0x80, 0x00,
0x0d, 0x62, 0x0b, 0xc6, 0x4f, 0x6c, 0x00, 0x00, 0x40, 0x60, 0x68, 0x00, 0x00, 0x37, 0x20,
0x00, 0x00, 0x08, 0x40, 0x00, 0x5d, 0x00, 0x02, 0x06, 0x40, 0x6c, 0x70, 0x28, 0x02, 0x50,
0xbc, 0x59, 0xf9, 0x40, 0x60, 0x68, 0x00, 0x00, 0x35, 0x20, 0x32, 0x04, 0x0b, 0xc1, 0xa8,
0x38, 0x00, 0x86, 0x80, 0x00, 0x06, 0xe2, 0x16, 0x00, 0x00, 0x00, 0x04, 0x86, 0xc0, 0x00,
0x06, 0xa5, 0x05, 0xc8, 0x04, 0x20, 0x5f, 0x89, 0x40, 0x08, 0x94, 0x84, 0x00, 0x00, 0x00,
0x60, 0x00, 0x10, 0x00, 0x40, 0x68, 0x00, 0x00, 0x29, 0x60, 0x68, 0x00, 0x00, 0x72, 0x21,
0x94, 0x00, 0x89, 0x48, 0x40, 0x00, 0x00, 0x06, 0x80, 0x00, 0x0b, 0x62, 0x0b, 0xc3, 0xcf,
0x6c, 0x00, 0x00, 0x40, 0x60, 0x6c, 0x00, 0x00, 0x6a, 0x00, 0x5d, 0x00, 0x02, 0x06, 0x00,
0x6c, 0x70, 0x28, 0x02, 0x50, 0xbc, 0x33, 0xf9, 0x40, 0x60, 0x59, 0x02, 0x02, 0xc2, 0x20,
0xbc, 0x09, 0x86, 0x80, 0x00, 0x03, 0x62, 0x08, 0x80, 0x76, 0x68, 0x00, 0x00, 0x4a, 0x20,
0x66, 0x00, 0x00, 0x30, 0x20, 0xbc, 0x27, 0xf8, 0x80, 0x36, 0x00, 0x00, 0x08, 0x02, 0x00,
0x3a, 0x00, 0x06, 0xc7, 0x02, 0x80, 0x25, 0x0b, 0xc2, 0x0f, 0x40, 0x00, 0x01, 0x40, 0x60,
0x59, 0x02, 0x02, 0xc2, 0x20, 0xbc, 0x09, 0x86, 0x80, 0x00, 0x03, 0x62, 0x08, 0x80, 0x76,
0x68, 0x00, 0x00, 0x3e, 0x20, 0x66, 0x00, 0x00, 0x30, 0x20, 0xbc, 0x13, 0xf8, 0x80, 0x36,
0x00, 0x00, 0x08, 0x02, 0x00, 0x3a, 0x00, 0x06, 0xc7, 0x02, 0x80, 0x25, 0x0b, 0xc0, 0xcf,
0x94, 0x06, 0x03, 0x20, 0x40, 0xbc, 0x09, 0x16, 0x80, 0x00, 0x03, 0x82, 0x00, 0x00, 0x00,
0x84, 0x00, 0x05, 0xd0, 0x00, 0x20, 0x66, 0x06, 0xc7, 0x02, 0x80, 0x25, 0x09, 0x40, 0x60,
0x64, 0x00, 0x00, 0x16, 0x4f, 0xa8, 0x01, 0x0b, 0xa1, 0x48, 0xa8, 0x01, 0x00, 0x00, 0x00,
0x40, 0x00, 0x03, 0xa1, 0x40, 0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0xbe, 0x03, 0x00, 0x3c,
0x5c, 0x00, 0x71, 0xc0, 0x01, 0x5c, 0x81, 0x00, 0x40, 0x48, 0x5c, 0x01, 0x42, 0x08, 0x00,
0x5c, 0x09, 0xe0, 0x0a, 0x4a, 0x84, 0x85, 0x00, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x02,
0x25, 0x91, 0x0b, 0xff, 0xc0, 0x5c, 0x01, 0x10, 0x40, 0x7a, 0xa0, 0x04, 0x08, 0x40, 0x50,
0xa0, 0x4a, 0x06, 0x80, 0x04, 0x00, 0x02, 0xea, 0x00, 0x61, 0x84, 0x06, 0xe8, 0x0a, 0x4a,
0x84, 0x85, 0x20, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x0a, 0x25, 0x93, 0x0b, 0xff, 0xc0,
0x5c, 0x02, 0x60, 0x41, 0xfa, 0xba, 0x14, 0x86, 0xc0, 0x00, 0x07, 0x04, 0x80, 0x00, 0x00,
0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0x00, 0x42, 0xff, 0x60, 0x84, 0x05, 0x09, 0xc0, 0x00,
0x68, 0x00, 0x40, 0x00, 0x28, 0x84, 0x06, 0x8a, 0x00, 0x20, 0x68, 0x38, 0x1c, 0x01, 0x21,
0x60, 0x00, 0x00, 0x00, 0xa8, 0x5c, 0x09, 0xf0, 0x40, 0x7a, 0x5c, 0x00, 0xa0, 0x41, 0x50,
0x6c, 0x70, 0x38, 0x02, 0x7a, 0x84, 0x9c, 0x80, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x00,
0x25, 0x98, 0x0b, 0xff, 0xc0, 0x00, 0x00, 0x0b, 0xa1, 0x48, 0x84, 0x17, 0xa0, 0x00, 0x00,
0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0x00, 0x62, 0xff, 0x80, 0x5c, 0x0f, 0xf0, 0x40, 0x48,
0x9c, 0x00, 0x08, 0x40, 0x4a, 0xa0, 0x42, 0x06, 0x80, 0x04, 0x00, 0x02, 0x98, 0x40, 0x69,
0x40, 0x00, 0x00, 0x41, 0x48, 0x60, 0x00, 0x40, 0x00, 0x60, 0x5c, 0x80, 0x43, 0x07, 0xfc,
0x68, 0x00, 0x00, 0x6e, 0x20, 0x6c, 0x70, 0x38, 0x00, 0x0a, 0x28, 0x93, 0x69, 0x40, 0x46,
0x00, 0x00, 0x0b, 0xa1, 0x40, 0x68, 0x38, 0x1c, 0x07, 0x20, 0x5c, 0x00, 0x42, 0xff, 0x81,
0x84, 0x05, 0x09, 0xc0, 0x80, 0x84, 0x07, 0xaa, 0x04, 0x20, 0x68, 0x00, 0x40, 0x00, 0x29,
0x84, 0x06, 0x96, 0x80, 0x00, 0x06, 0xe2, 0x16, 0x83, 0x81, 0xc0, 0x12, 0x26, 0x00, 0x04,
0x00, 0x0b, 0x05, 0xc0, 0x9f, 0x04, 0x1d, 0x05, 0xc8, 0x04, 0x30, 0x01, 0x49, 0x48, 0x08,
0x6c, 0x70, 0x38, 0x02, 0x50, 0x85, 0x1c, 0x80, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x00,
0x25, 0x98, 0x0b, 0xff, 0xc0, 0x00, 0x00, 0x06, 0x80, 0x00, 0x02, 0x02, 0x16, 0x80, 0x00,
0x09, 0xda, 0xc8, 0x48, 0x6c, 0x84, 0x1f, 0xa4, 0x60, 0xa4, 0x20, 0xaa, 0x18, 0x48, 0x7a,
0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x00, 0x00, 0x76, 0x60, 0x60, 0x00, 0x30, 0x00, 0x30,
0x68, 0x00, 0x00, 0x25, 0x61, 0x39, 0x00, 0x89, 0x48, 0x0c, 0x94, 0x04, 0x40, 0x00, 0x00,
0x68, 0x00, 0x00, 0x36, 0x20, 0x38, 0x00, 0xc8, 0x40, 0x48, 0x68, 0x00, 0x00, 0xc5, 0xac,
0x46, 0x0a, 0x42, 0x06, 0xc0, 0x84, 0x06, 0xc0, 0x00, 0x00, 0xab, 0xff, 0x06, 0xc0, 0x00,
0x07, 0x80, 0x96, 0xc0, 0x00, 0x07, 0x62, 0x08, 0x80, 0x76, 0x66, 0x00, 0x00, 0x33, 0x08,
0x5c, 0x04, 0x33, 0x00, 0x3c, 0x6c, 0x00, 0x00, 0x78, 0x00, 0x68, 0x00, 0x00, 0x20, 0x20,
0x5c, 0x04, 0x10, 0x80, 0x36, 0x68, 0x00, 0x00, 0x9d, 0xac, 0x54, 0x04, 0x20, 0x40, 0x6c,
0x6c, 0x00, 0x00, 0x78, 0x48, 0x46, 0x0a, 0x42, 0x02, 0xc0, 0x84, 0x07, 0xaa, 0x80, 0x10,
0x68, 0x38, 0x1c, 0x07, 0x21, 0x59, 0x01, 0x82, 0xff, 0x80, 0x5c, 0x00, 0x40, 0x48, 0x48,
0x9c, 0x80, 0x14, 0x20, 0xe6, 0x84, 0x87, 0xa8, 0x49, 0x50, 0x5c, 0x09, 0xd3, 0x80, 0x00,
0x62, 0x00, 0x00, 0x01, 0x46, 0x68, 0x38, 0x1c, 0x02, 0x22, 0x5c, 0x80, 0x43, 0x00, 0x10,
0x6c, 0x70, 0x38, 0x04, 0x49, 0xa1, 0x42, 0x39, 0x40, 0x09, 0x94, 0x00, 0xb5, 0x19, 0x0d,
0x94, 0x00, 0xe2, 0x34, 0x36, 0x29, 0x0c, 0x92, 0x91, 0x89, 0x85, 0x85, 0x18, 0x59, 0xd0,
0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x01, 0x25, 0x88, 0x8b, 0xff, 0xc0,
0x2a, 0x06, 0xdb, 0xa1, 0x48, 0x84, 0x97, 0xa0, 0x00, 0x00, 0x68, 0x38, 0x1c, 0x07, 0x20,
0x5c, 0x01, 0xd2, 0xbf, 0xc0, 0x5c, 0xbc, 0x00, 0x40, 0x52, 0x5c, 0x00, 0x01, 0xc0, 0x00,
0x55, 0x00, 0x30, 0x80, 0x60, 0x68, 0x00, 0x3f, 0xff, 0xee, 0x6c, 0x00, 0x00, 0xfe, 0x6e,
0x5c, 0x81, 0x00, 0x80, 0xca, 0x5c, 0x0f, 0xd0, 0x81, 0x76, 0x5c, 0x82, 0x08, 0x02, 0x52,
0x5c, 0x00, 0x50, 0x00, 0xca, 0x80, 0x25, 0x2b, 0x07, 0xfa, 0x60, 0x00, 0x40, 0x00, 0xc0,
0x5c, 0x80, 0x40, 0x81, 0xe0, 0x68, 0x00, 0x00, 0x3e, 0x20, 0x6c, 0x70, 0x38, 0x00, 0x01,
0x28, 0x88, 0xb5, 0x1d, 0x07, 0x14, 0x04, 0x32, 0x3c, 0x0f, 0x28, 0x8b, 0x15, 0x44, 0x5c,
0x94, 0x04, 0x19, 0x40, 0x41, 0x00, 0x00, 0x08, 0x82, 0x50, 0x68, 0x00, 0x00, 0x3e, 0x20,
0x66, 0x00, 0x00, 0x42, 0x48, 0x40, 0x00, 0x03, 0x06, 0x04, 0x5c, 0x10, 0x10, 0x80, 0x80,
0x54, 0x04, 0x30, 0x82, 0x00, 0x55, 0x02, 0x00, 0x81, 0xa0, 0x58, 0x04, 0x02, 0xc0, 0x20,
0xbf, 0xd9, 0xa5, 0xc0, 0xfd, 0x08, 0x0c, 0xa5, 0xc0, 0x05, 0x30, 0x0f, 0x85, 0xc8, 0x21,
0x08, 0x02, 0x26, 0xc7, 0x03, 0x80, 0xe5, 0x25, 0xc8, 0x04, 0x81, 0x25, 0x06, 0x80, 0x04,
0x00, 0x02, 0xb6, 0xc0, 0x00, 0x0f, 0xe0, 0x15, 0x1d, 0x07, 0x01, 0x16, 0xb5, 0xc8, 0x31,
0x30, 0x7f, 0x85, 0x44, 0x19, 0x88, 0x06, 0x25, 0x44, 0x07, 0x24, 0x0c, 0x06, 0x80, 0x00,
0x03, 0xa2, 0x18, 0x11, 0x52, 0x94, 0x0c, 0x38, 0x0a, 0x51, 0x94, 0x0c, 0x66, 0x80, 0x03,
0xff, 0xfc, 0x26, 0x00, 0x02, 0x00, 0x06, 0x08, 0x80, 0xe2, 0x68, 0x00, 0x00, 0x6e, 0x22,
0x6c, 0x70, 0x38, 0x00, 0x01, 0x28, 0x80, 0x99, 0x50, 0xc1, 0x00, 0x00, 0x06, 0x80, 0x00,
0x07, 0x02, 0x2b, 0x07, 0xf8, 0x60, 0x00, 0x00, 0x00, 0x18, 0x88, 0x26, 0x18, 0x81, 0xe0,
0x95, 0x0c, 0x06, 0xc0, 0x00, 0x0f, 0xe5, 0x26, 0x80, 0x00, 0x06, 0xe2, 0x06, 0x60, 0x00,
0x04, 0x24, 0x83, 0x81, 0x04, 0x5c, 0x01, 0x00, 0x80, 0x20, 0x5c, 0x81, 0x08, 0x80, 0xa1,
0x5c, 0x83, 0x18, 0x41, 0xd0, 0x5c, 0x00, 0x5a, 0x0c, 0x80, 0x5c, 0x82, 0x10, 0x02, 0xfa,
0x68, 0x00, 0x40, 0x00, 0x2e, 0x68, 0x00, 0x00, 0x80, 0x23, 0x5c, 0x09, 0xd0, 0x01, 0xee,
0x5c, 0x04, 0x30, 0x03, 0x53, 0x68, 0x38, 0x1c, 0x01, 0x22, 0x6c, 0x00, 0x00, 0xfe, 0x01,
0x88, 0x22, 0x18, 0x81, 0x36, 0xa1, 0x80, 0x46, 0x00, 0x01, 0x00, 0x0d, 0x05, 0xc8, 0x04,
0x04, 0x85, 0x15, 0xc0, 0x08, 0x20, 0xf2, 0x19, 0x60, 0x0f, 0x23, 0x43, 0xf6, 0xc7, 0x03,
0x80, 0x24, 0xb8, 0x51, 0xd0, 0x40, 0x00, 0x03, 0x80, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x0b,
0x25, 0x8b, 0x8b, 0xff, 0xc0, 0x00, 0x00, 0x08, 0x02, 0xca, 0x80, 0x16, 0xe8, 0x02, 0xd3,
0x60, 0x00, 0x00, 0x00, 0x6f, 0x6c, 0x70, 0x38, 0x00, 0x03, 0x51, 0xe0, 0xe3, 0x80, 0x00,
0x6c, 0x70, 0x38, 0x00, 0x03, 0x51, 0xe0, 0xe1, 0x58, 0x44, 0x00, 0x00, 0x05, 0x1d, 0x07,
0x15, 0x84, 0x4b, 0x07, 0xfb, 0x54, 0x47, 0xb0, 0x02, 0xfa, 0x68, 0x00, 0x40, 0x08, 0x29,
0x54, 0x46, 0x48, 0x81, 0xa3, 0x84, 0x06, 0x99, 0x58, 0x46, 0x60, 0x00, 0x00, 0x00, 0xb4,
0x95, 0x86, 0x1a, 0x1c, 0x1b, 0x95, 0x80, 0x92, 0x34, 0x09, 0x6c, 0x70, 0x38, 0x02, 0x51,
0x85, 0x1d, 0x00, 0x00, 0x00, 0x6c, 0x70, 0x38, 0x0c, 0x01, 0x25, 0x88, 0x8b, 0xff, 0xc0,
0x00, 0x00, 0x06, 0x80, 0x00, 0x09, 0xda, 0xc8, 0x48, 0x6c, 0x84, 0x1f, 0xa4, 0x60, 0xa4,
0x20, 0xae, 0x18, 0x48, 0x7a, 0x40, 0x00, 0x02, 0x80, 0x40, 0x32, 0x02, 0x0b, 0xc2, 0x25,
0x68, 0x00, 0x02, 0x00, 0x02, 0x62, 0x00, 0x00, 0x01, 0xa4, 0x68, 0x00, 0x3b, 0xf7, 0x80,
0x5c, 0x80, 0x43, 0x80, 0x00, 0x60, 0x00, 0x00, 0x01, 0x38, 0x94, 0x00, 0xc6, 0xc0, 0x00,
0x0f, 0xe0, 0x32, 0xa8, 0x61, 0x23, 0xbd, 0xe2, 0x98, 0x71, 0x2a, 0x84, 0x92, 0x31, 0x0e,
0x23, 0x05, 0xf2, 0x98, 0xf6, 0x23, 0x2c, 0xd2, 0x88, 0x3f, 0x29, 0x8e, 0xb2, 0xac, 0x36,
0x29, 0x07, 0x92, 0x88, 0x9b, 0x23, 0x07, 0x62, 0x30, 0x5b, 0x29, 0x18, 0x92, 0x38, 0x64,
0x54, 0x86, 0x5b, 0x80, 0x00, 0x6c, 0x00, 0x00, 0xfe, 0x53, 0x40, 0x00, 0x03, 0xa1, 0x40,
*/
};

