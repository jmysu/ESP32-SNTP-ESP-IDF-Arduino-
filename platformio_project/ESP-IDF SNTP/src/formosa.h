#define Formosa_width 64
#define Formosa_height 64
static uint8_t Formosa_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
  0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x3F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x0F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x7F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
