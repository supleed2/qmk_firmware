#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		TO(1),
        RGB_TOG,
        RGB_MOD,
        TO(3)
    ),
    [1] = LAYOUT(
        TO(2),
        RGB_HUI,
        RGB_SAI,
        RGB_VAI
    ),
    [2] = LAYOUT(
        TO(0),
        RGB_HUD,
        RGB_SAD,
        RGB_VAD
    ),
    [3] = LAYOUT(
        KC_P0,
        KC_P1,
        KC_P2,
        KC_P3
    )
};
