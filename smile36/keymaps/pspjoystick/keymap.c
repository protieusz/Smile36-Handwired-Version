// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_LCTL, KC_Q,
        KC_Z,    KC_A,    KC_P,    KC_SCLN,
        KC_RALT, KC_SLSH, KC_G,    KC_B,    KC_T,    KC_W,    KC_S,    KC_F,
        KC_X,    KC_V,    KC_R,
        KC_LGUI, KC_BSPC, KC_E,    KC_C,    KC_D,    KC_K,    KC_COMM, KC_I,
        KC_SPC,  KC_ENT,  KC_O,
        KC_J,    KC_M,    KC_L,    KC_DOT,  KC_U,
        KC_H,    KC_N,    KC_Y
    ),
    [1] = LAYOUT(
        _______, KC_1,
        _______, _______, KC_0,    _______,
        _______, _______, _______, _______, KC_5,    KC_2,    _______, _______,
        _______, _______, KC_4,
        _______, _______, KC_3,    _______, _______, _______, _______, KC_8,
        _______, _______, KC_9,
        _______, _______, _______, _______, KC_7,
        _______, _______, KC_6
    ),
    [2] = LAYOUT(
        _______, _______,
        _______, KC_LEFT, _______, _______,
        _______, _______, _______, KC_VOLD, _______, KC_UP,   KC_DOWN, _______,
        _______, KC_VOLU, _______,
        _______, _______, _______, KC_MUTE, KC_RGHT, _______, _______, _______,
        _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, KC_F1,
        _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,
        _______, _______, _______, _______, _______,
        _______, _______, _______
    )
};
