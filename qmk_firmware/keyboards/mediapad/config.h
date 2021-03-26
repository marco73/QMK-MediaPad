#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2021
#define DEVICE_VER      0x0001
#define MANUFACTURER    marco73
#define PRODUCT         Mediapad

#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
//#define BACKLIGHT_LEVELS 0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* Force NKRO Mode - If forced on, must be disabled via magic key (default = LShift+RShift+N) */
//#define FORCE_NKRO

/*
 * Magic key options
 * These options allow the magic key functionality to be changed. This is useful
 * if your keyboard/keypad is missing keys and you want magic key support.
 */

/* control how magic key switches layers */
//#define MAGIC_KEY_SWITCH_LAYER_WITH_FKEYS  true
//#define MAGIC_KEY_SWITCH_LAYER_WITH_NKEYS  true
//#define MAGIC_KEY_SWITCH_LAYER_WITH_CUSTOM false

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { { A7, A6, A5, A4 }, { A3, A2, A1, A0 }, {B5} }

#define USE_SERIAL

// Encoder definition
#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B4 }
#define ENCODER_RESOLUTION 4

// RGB definition
#define RGB_DI_PIN B9
#define RGBLED_NUM 16
#define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}
#define RGBLIGHT_DEFAULT_VAL 24
#define RGBLIGHT_LIMIT_VAL 128
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LAYERS

// Combo keyes are used to change into reset mode to update the firmware
// #define COMBO_COUNT 3

// Connects each switch in the dip switch to the GPIO pin of the MCU
// #define DIP_SWITCH_PINS { B5 }
#define TAP_CODE_DELAY 15
