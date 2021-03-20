#include QMK_KEYBOARD_H


/**
 * Layer Names
 */
#define _MEDIA 0
#define _NUMPAD 1
#define _COLOR 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MEDIA] = LAYOUT_ortho_2x4(KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_NO, KC_NO, RESET, RGB_TOG, TO(1) ),
    [_NUMPAD] = LAYOUT_ortho_2x4(KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, TO(2) ),
    [_COLOR] = LAYOUT_ortho_2x4(RGB_TOG, RGB_MOD, RGB_RMOD, RGB_M_P, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, TO(0) )
    };

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        switch (biton32(layer_state)) {
            case _NUMPAD:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            case _COLOR:
                if (clockwise) {
                    //tap_code(RGB_VAI);
                    rgblight_increase_val();
                } else {
                    //tap_code(RGB_VAD);
                    rgblight_decrease_val();
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
        }
    }
}


// Set lighting accoording to Layer
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 5, 24, 255, 60}        // Light 4 LEDs, starting with LED 0

);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 5, 120, 255, 60}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 5, 240, 255, 60}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,
    my_layer1_layer,    // Overrides other layers
    my_layer2_layer     // Overrides other layers
);

void keyboard_post_init_user(void) {
  wait_ms(100);
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(0, 255, 30);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
  // Enable the LED layers
  rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _MEDIA));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _NUMPAD));
    rgblight_set_layer_state(2, layer_state_cmp(state, _COLOR));
    return state;
}
