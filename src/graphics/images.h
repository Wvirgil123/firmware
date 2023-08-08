#pragma once

#define SATELLITE_IMAGE_WIDTH 16
#define SATELLITE_IMAGE_HEIGHT 15
const uint8_t SATELLITE_IMAGE[] PROGMEM = {0x00, 0x08, 0x00, 0x1C, 0x00, 0x0E, 0x20, 0x07, 0x70, 0x02,
                                           0xF8, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC8, 0x01, 0x9C, 0x54,
                                           0x0E, 0x52, 0x07, 0x48, 0x02, 0x26, 0x00, 0x10, 0x00, 0x0E};

const uint8_t imgSatellite[] PROGMEM = {0x70, 0x71, 0x22, 0xFA, 0xFA, 0x22, 0x71, 0x70};
const uint8_t imgUSB[] PROGMEM = {0x60, 0x60, 0x30, 0x18, 0x18, 0x18, 0x24, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x24, 0x24, 0x24, 0x3C};
const uint8_t imgPower[] PROGMEM = {0x40, 0x40, 0x40, 0x58, 0x48, 0x08, 0x08, 0x08,
                                    0x1C, 0x22, 0x22, 0x41, 0x7F, 0x22, 0x22, 0x22};
const uint8_t imgUser[] PROGMEM = {0x3C, 0x42, 0x99, 0xA5, 0xA5, 0x99, 0x42, 0x3C};
const uint8_t imgPositionEmpty[] PROGMEM = {0x20, 0x30, 0x28, 0x24, 0x42, 0xFF};
const uint8_t imgPositionSolid[] PROGMEM = {0x20, 0x30, 0x38, 0x3C, 0x7E, 0xFF};

#if (defined(USE_EINK) || defined(ILI9341_DRIVER) || defined(ST7735_CS) || defined(ST7789_CS)) &&                                \
    !defined(DISPLAY_FORCE_SMALL_FONTS)
const uint8_t imgQuestionL1[] PROGMEM = {0xff, 0x01, 0x01, 0x32, 0x7b, 0x49, 0x49, 0x6f, 0x26, 0x01, 0x01, 0xff};
const uint8_t imgQuestionL2[] PROGMEM = {0x0f, 0x08, 0x08, 0x08, 0x06, 0x0f, 0x0f, 0x06, 0x08, 0x08, 0x08, 0x0f};
const uint8_t imgInfoL1[] PROGMEM = {0xff, 0x01, 0x01, 0x01, 0x1e, 0x7f, 0x1e, 0x01, 0x01, 0x01, 0x01, 0xff};
const uint8_t imgInfoL2[] PROGMEM = {0x0f, 0x08, 0x08, 0x08, 0x06, 0x0f, 0x0f, 0x06, 0x08, 0x08, 0x08, 0x0f};
const uint8_t imgSFL1[] PROGMEM = {0xb6, 0x8f, 0x19, 0x11, 0x31, 0xe3, 0xc2, 0x01,
                                   0x01, 0xf9, 0xf9, 0x89, 0x89, 0x89, 0x09, 0xeb};
const uint8_t imgSFL2[] PROGMEM = {0x0e, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08,
                                   0x00, 0x0f, 0x0f, 0x00, 0x08, 0x08, 0x08, 0x0f};
#else
const uint8_t imgInfo[] PROGMEM = {0xff, 0x81, 0x00, 0xfb, 0xfb, 0x00, 0x81, 0xff};
const uint8_t imgQuestion[] PROGMEM = {0xbf, 0x41, 0xc0, 0x8b, 0xdb, 0x70, 0xa1, 0xdf};
const uint8_t imgSF[] PROGMEM = {0xd2, 0xb7, 0xad, 0xbb, 0x92, 0x01, 0xfd, 0xfd, 0x15, 0x85, 0xf5};
#endif

#include "img/icon.xbm"
