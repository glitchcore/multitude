// Header File for SSD1306 characters
// Font Size: 32
constexpr static uint8_t FONT[] PROGMEM = {
    0x00, 0x00, // fixed width font
    0x18, 0x20, // width, height
    0x40, // first char ("@")
    0x13, // char count
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // @
    0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0xf,0x7f,0xff,0xff,0xff,0xf0,0xe0,0xc0,0xcc,0xde,0xfe,0xfc,0xf8,0xff,0xff,0xff,0xff,0xf,0x0,0x0,0x0, // A
    0xf0,0xf8,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc7,0xc7,0xc7,0xc7,0xc7,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x0,0x0,0x0,0x0, // B
    0xf0,0xfc,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0x7f,0xff,0xff,0xff,0xff,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x1,0x3,0x3,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0xff,0xff,0xff,0xff,0xff,0x7,0x7,0x7,0x0, // C
    0xf0,0xfc,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x7,0x7,0x7,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x7,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // D
    0xff,0xff,0xff,0xff,0xff,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x87,0x87,0x87,0x87,0x87,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,0xff,0xff,0xff,0xff,0xf0,0xe0,0xc0,0xc0,0xc0,0xe0,0xf0,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // E
    0x0,0xf0,0xf8,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x7,0x7,0x7,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf1,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xf0,0xf0,0xf0,0xf0,0xe0,0xe0,0xe0,0xf0,0xf8,0xfc,0xff,0xdf,0xcf,0xcf,0xc3,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0, // F
    0xff,0xff,0xff,0xff,0xff,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // G
    0xf0,0xf8,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x7,0x7,0x7,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // H
    0xe0,0xf8,0xfc,0xfe,0x3e,0x1f,0xf,0xf,0xf,0xf,0xf,0xf,0x1f,0xfe,0xfe,0xfc,0xf0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0xc0,0xe0,0xf0,0xf8,0xf8,0xf8,0x78,0x78,0xff,0xff,0xff,0xff,0x78,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0xf8,0xff,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x1,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // I
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xfc,0xfe,0xff,0xff,0x1f,0xf,0xf,0xf,0xf,0xf,0xf,0xff,0xff,0xff,0xff,0xff,0xf,0xf,0x0,0x0,0x0,0x0,0x0,0x3f,0xff,0xff,0xff,0xff,0xe0,0xc0,0xc0,0xc0,0xc0,0xe0,0xf0,0xff,0xff,0xff,0x7f,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // J
    0xff,0xff,0xff,0xff,0xff,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x1f,0xf,0x7,0x7,0x7,0xf,0x1f,0xff,0xff,0xff,0xfe,0xf8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // K
    0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // L
    0xff,0xff,0xff,0xff,0xff,0x80,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x7,0x7,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x7f,0xff,0xff,0xff,0xe0,0xc0,0xc0,0xff,0xff,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x1,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x1,0x0,0x0,0x0,0x0,0x0,0x0, // M
    0xff,0xff,0xff,0xff,0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xff,0xef,0xcf,0xcf,0x9f,0x1f,0x1e,0x1e,0x0,0x0,0x0,0x0,0x0,0xc1,0xfd,0xff,0xff,0xff,0xff,0x7,0x1,0x1,0x1,0x1,0x3,0x3,0xf,0xff,0xff,0xff,0xfe,0xf8,0x0,0x0,0x0,0x0,0x0,0x3,0x3f,0x7f,0xff,0xff,0xff,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xf0,0xff,0xff,0xff,0x7f,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // N
    0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7f,0xff,0xff,0xff,0xff,0xc0,0x80,0x80,0x80,0x80,0x80,0xc0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x7,0x7,0xf,0xf,0xf,0xf,0xf,0xf,0x7,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0, // O
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x87,0xdf,0xff,0xff,0xff,0xfc,0xf8,0xe0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xe0,0xf0,0xf8,0xfc,0xfc,0x7e,0x3f,0x1f,0xf,0xf,0x7,0x7,0x3,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0xf,0x1f,0x1f,0x3f,0x3f,0x3e,0x7e,0x7c,0xfc,0xf8,0xf8,0xf8,0xf0,0xf0,0xe0,0xe0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x3,0x3,0x3,0x7,0x7,0x0,0x0,0x0,0x0,0x0, // P
    0x80,0xf0,0xf8,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x7,0x7,0x7,0x87,0x80,0x80,0x80,0x80,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x30,0xfe,0xff,0xff,0xff,0xcf,0xcf,0xcf,0xcf,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xe7,0xc1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x1,0x0,0x1,0x3,0x7,0x3,0x1,0x1,0x0,0x0,0x0,0x0,0x0, // Q
    0xf0,0xfc,0xfc,0xfe,0xfe,0x3f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0xfe,0xfe,0xfc,0xf8,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x7,0x7,0x7,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0, // R
};
