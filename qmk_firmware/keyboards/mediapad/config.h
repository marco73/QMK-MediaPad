#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2021
#define DEVICE_VER      0x0001
#define MANUFACTURER    marco73
#define PRODUCT         2x4 keypad with an encoder

#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
#define BACKLIGHT_LEVELS 0

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
#define DIRECT_PINS { \
    { A0, A1, A2, A3 }, \
    { A4, A5, A6, A7 } \
}

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5