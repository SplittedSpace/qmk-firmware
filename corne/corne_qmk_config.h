#pragma once

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}

#define USE_SERIAL
#define USE_SERIAL_PD2
#define SOFT_SERIAL_PIN D2
#define RGB_DI_PIN      D3
#define DEBOUNCE 5

#define MASTER_LEFT

#define MATRIX_ROWS  8
#define MATRIX_COLS  6
#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }

#ifdef OLED_ENABLE
	#define OLED_TIMEOUT 80000
	#define OLED_BRIGHTNESS 90
	#define SPLIT_WPM_ENABLE
	#define SPLIT_OLED_ENABLE
#endif

#ifdef RGBLIGHT_ENABLE
        #define RGBLED_NUM 54
        #define RGBLED_SPLIT { 27, 27 }
        #define RGBLIGHT_SPLIT

        #define RGBLIGHT_EFFECT_BREATHING
        #define RGBLIGHT_EFFECT_ALTERNATING
        #define RGBLIGHT_EFFECT_RAINBOW_MOOD
        #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
        #define RGBLIGHT_EFFECT_SNAKE

        #ifndef OLED_ENABLE
                #ifndef TAP_DANCE_ENABLE
                        #define RGBLIGHT_EFFECT_CHRISTMAS
                        #define RGBLIGHT_EFFECT_KNIGHT
                        #define RGBLIGHT_EFFECT_TWINKLE
                        #define RGBLIGHT_EFFECT_RGB_TEST
                        #define RGBLIGHT_EFFECT_STATIC_GRADIENT
                #endif
        #endif
#endif

#define DIODE_DIRECTION COL2ROW
