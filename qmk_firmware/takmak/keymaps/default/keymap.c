#include QMK_KEYBOARD_H

#include "takmak.h"

// Defines names for use in layer keycodes and the keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		XXXXXXX, KC_GRV,  KC_1,      KC_2,     KC_3,    KC_4,    KC_5,   KC_ESC,       TG(1),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
		XXXXXXX, KC_TAB,  KC_Q,      KC_W,     KC_E,    KC_R,    KC_T,   HYPR(KC_A),   XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
		XXXXXXX, KC_ESC,  KC_A,      KC_S,     KC_D,    KC_F,    KC_G,   HYPR(KC_V),   KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,
		XXXXXXX, KC_LSFT, KC_Z,      KC_X,     KC_C,    KC_V,    KC_B,   KC_SPC,       KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, KC_LSFT,
		XXXXXXX, MO(1),   KC_LCTRL,  KC_LALT,  KC_LGUI, MO(1),                                           MO(2),   KC_RGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
	),

	[1] = LAYOUT(
		XXXXXXX, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,   _______,  KC_F6,   KC_F7, KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		XXXXXXX, _______, _______, _______, _______, _______, _______, RESET,     RESET,    _______, KC_7,  KC_8,    KC_9,    _______, _______, _______,
		XXXXXXX, _______, _______, _______, _______, _______, _______, _______,   KC_BSPC,  _______, KC_4,  KC_5,    KC_6,    _______, _______, _______,
		XXXXXXX, _______, _______, _______, _______, _______, _______, _______,   _______,  _______, KC_1,  KC_2,    KC_3,    _______, _______, _______,
		XXXXXXX, _______, _______, _______, _______, _______,                                        KC_0,  _______, _______, _______, _______, _______
	),

	[2] = LAYOUT(
		XXXXXXX, _______, KC_F1,        KC_F2,        KC_F3,        KC_F4,         KC_F5,   _______,   _______,  KC_F6,   KC_F7, KC_F8,   KC_F9,   KC__MUTE,  KC__VOLDOWN,  KC__VOLUP,
		XXXXXXX, _______, KC_MS_BTN1,   KC_MS_UP,     KC_MS_BTN1,   KC_MS_WH_UP,   _______, _______,   _______,  _______, _______, KC_UP,   _______, _______, _______, _______,
		XXXXXXX, _______, KC_MS_LEFT,   KC_MS_DOWN,   KC_MS_RIGHT,  KC_MS_WH_DOWN, _______, _______,   _______,  KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
		XXXXXXX, _______, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, _______,       _______, _______,   _______,  _______, _______, _______, _______, _______, _______, _______,
		XXXXXXX, _______, _______,      _______,      _______,      _______,                                              _______, _______, _______, _______, _______, _______
	)

};
