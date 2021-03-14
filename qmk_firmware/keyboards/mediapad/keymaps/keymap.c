#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, 
        KC_5, KC_6, KC_7, KC_8 
    )

    [_LOWER] = LAYOUT(
        KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, 
        KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8 
    )
};