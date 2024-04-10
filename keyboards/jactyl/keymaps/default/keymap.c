// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
# include "analog.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_LEFT_ALT,   KC_1,         KC_2,     KC_3,  KC_4,
        KC_NO,         KC_Q,         KC_SPACE, KC_R,  KC_NO,
        KC_LEFT_SHIFT, KC_B,         KC_E,     KC_F,  KC_6,
        KC_LEFT_CTRL,  KC_Z,         KC_C,     KC_X,  KC_V,
        KC_5,         KC_NO,        KC_NO,    KC_NO, KC_ESCAPE
    )
};

void matrix_scan_user(void) {

   // joystick_set_axis(0, analogReadPin(GP26));
    //joystick_set_axis(1, analogReadPin(GP27));

}

joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    JOYSTICK_AXIS_IN(GP26, 0, 512, 1024),
    JOYSTICK_AXIS_IN(GP27, 1024, 512, 0)
    //JOYSTICK_AXIS_VIRTUAL,
    //JOYSTICK_AXIS_VIRTUAL
};

