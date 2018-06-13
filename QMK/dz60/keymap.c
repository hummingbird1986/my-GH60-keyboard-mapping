#include "dz60.h"

#define _______ KC_TRNS

#define _BL 0
#define _ML 1
#define _NL 2
#define _HHKB 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*[_BL]=*/LAYOUT(
    KC_GRV,          KC_1,   KC_2,LT(1,KC_3),   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,  KC_NO,KC_BSPC,
	KC_TAB,          KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSLS,
	CTL_T(KC_ESC),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT, KC_ENT,
	SFT_T(KC_CAPS), KC_NO,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,  TT(3),
	TT(2),KC_LALT,KC_LGUI, KC_SPC, KC_SPC, KC_SPC,KC_RGUI,KC_RALT,KC_NO,KC_CAPS,KC_DEL),

    [_ML]=LAYOUT(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, 
    _______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,  KC_UP,KC_RIGHT,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

    [_NL]=LAYOUT(
    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,   KC_7,   KC_8,   KC_9,_______,_______,_______,KC_EJCT, 
    _______,_______,_______,_______,_______,_______,_______,   KC_4,   KC_5,   KC_6,_______,_______,_______, 
    SFT_T(KC_MUTE),_______,KC_VOLD,KC_VOLU,_______,_______,_______,_______,   KC_1,   KC_2,   KC_3,_______,KC_UP,_______,
    _______,_______,_______,_______,   KC_0,   KC_0, KC_DOT,KC_LEFT,KC_NO,KC_DOWN,KC_RIGHT),
    
    [_HHKB]=LAYOUT(
    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,  KC_UP,_______,KC_EJCT, 
    _______,_______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_PGUP,KC_LEFT,KC_RIGHT,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______, KC_END,KC_PGDN,KC_DOWN,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

    
};
