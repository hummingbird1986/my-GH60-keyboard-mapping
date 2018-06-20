#include "dz60.h"

#define _______ KC_TRNS

#define _BL 0
#define _DVOL 1
#define _VIML 2
#define _NL 3
#define _HHKB 4


#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_BL]=LAYOUT(
    KC_GRV,          KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,  KC_NO,KC_BSPC,
	LT(_VIML,KC_TAB),        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSLS,
	CTL_T(KC_ESC),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT, KC_ENT,
	KC_LSFT, KC_NO,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,  TT(_HHKB),
    TT(_NL),KC_LALT,KC_LGUI, KC_NO, KC_SPC, KC_NO,KC_RGUI,KC_RALT,KC_NO,DF(_DVOL),KC_DEL),
    
    [_DVOL]=LAYOUT(
    F(0)           ,  F(1),   F(2),   F(3),   F(4),   F(5),   F(6),   F(7),   F(8),   F(9),  F(10),     F(11),  F(12),  KC_NO,KC_BSPC,
	KC_TAB,        KC_SCLN,KC_COMM, KC_DOT,   KC_P,   KC_Y,   KC_F,   KC_G,   KC_C,   KC_R,   KC_L,   KC_SLSH,  F(13),KC_BSLS,
	CTL_T(KC_ESC),    KC_A,   KC_O,   KC_E,   KC_U,   KC_I,   KC_D,   KC_H,   KC_T,   KC_N,   KC_S,   KC_MINS, KC_ENT,
	KC_LSFT, KC_NO,   KC_QUOT,KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,   KC_M,   KC_W,   KC_V,   KC_Z,KC_RSFT,  TT(_HHKB),
	TT(_NL),KC_LALT,KC_LGUI, KC_NO, KC_SPC, KC_NO,KC_RGUI,KC_RALT,KC_NO,DF(_BL),KC_DEL),
 
    [_VIML]=LAYOUT(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, 
    _______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN, KC_UP,KC_RIGHT,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

    [_NL]=LAYOUT(
    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,_______,
    _______,KC_MPLY,KC_MRWD,KC_MFFD,_______,_______,_______,   KC_7,   KC_8,   KC_9,_______,_______,_______,KC_EJCT, 
    _______,_______,_______,_______,_______,_______,_______,   KC_4,   KC_5,   KC_6,_______,_______,_______, 
    _______,_______,KC_MUTE,KC_VOLD,KC_VOLU,_______,_______,_______,   KC_1,   KC_2,   KC_3,_______,KC_UP,_______,
    _______,_______,_______,_______,   KC_0,_______, KC_DOT,KC_LEFT,KC_NO,KC_DOWN,KC_RIGHT),
    
    [_HHKB]=LAYOUT(
    KC_POWER,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,_______,
    KC_CAPS,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,  KC_UP,_______,KC_EJCT, 
    _______,_______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_PGUP,KC_LEFT,KC_RIGHT,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______, KC_END,KC_PGDN,KC_DOWN,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

    
};

enum function_id{
    
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_10,
    KEY_11,
    KEY_12,
    KEY_13,
    KEY_14,
    
};

const uint16_t PROGMEM fn_actions[] = {
    
    [0] = ACTION_FUNCTION(KEY_1),
    [1] = ACTION_FUNCTION(KEY_2),
    [2] = ACTION_FUNCTION(KEY_3),
    [3] = ACTION_FUNCTION(KEY_4),
    [4] = ACTION_FUNCTION(KEY_5),
    [5] = ACTION_FUNCTION(KEY_6),
    [6] = ACTION_FUNCTION(KEY_7),
    [7] = ACTION_FUNCTION(KEY_8),
    [8] = ACTION_FUNCTION(KEY_9),
    [9] = ACTION_FUNCTION(KEY_10),
    [10] = ACTION_FUNCTION(KEY_11),
    [11] = ACTION_FUNCTION(KEY_12),
    [12] = ACTION_FUNCTION(KEY_13),
    [13] = ACTION_FUNCTION(KEY_14),
    
};

void key_remap_unshift(keyrecord_t *record, const uint16_t kc)
{
    const uint8_t isShifted = get_mods()&MODS_SHIFT_MASK;
    if (record->event.pressed) {
        del_mods(isShifted);
        add_key(kc);
        send_keyboard_report();
        add_mods(isShifted);
    } else {
        del_key(kc);
        send_keyboard_report();
    }
}

void key_remap_shift(keyrecord_t *record, const uint16_t kc)
{
    const uint8_t isShifted = get_mods()&MODS_SHIFT_MASK;
    if (record->event.pressed) {
        if (!isShifted) {
            add_mods(MODS_SHIFT_MASK);
        }
        
        add_key(kc);
        send_keyboard_report();
        
        if (!isShifted) {
            del_mods(MODS_SHIFT_MASK);
        }
    } else {
        del_key(kc);
        send_keyboard_report();
    }
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
    
    const uint8_t isShifted = get_mods()&MODS_SHIFT_MASK;
    
    switch (id) {
            
        case KEY_1:
            if (isShifted) {
                key_remap_shift(record, KC_GRV);
            } else {
                key_remap_shift(record, KC_4);
            }
            break;
        case KEY_2:
            if (isShifted) {
                key_remap_shift(record, KC_5);
            } else {
                key_remap_shift(record, KC_7);
            }
            break;
        case KEY_3:
            if (isShifted) {
                key_remap_unshift(record, KC_7);
            } else {
                key_remap_unshift(record, KC_LBRC);
            }
            break;
        case KEY_4:
            if (isShifted) {
                key_remap_unshift(record, KC_5);
            } else {
                key_remap_shift(record, KC_LBRC);
            }
            break;
        case KEY_5:
            if (isShifted) {
                key_remap_unshift(record, KC_3);
            } else {
                key_remap_shift(record, KC_RBRC);
            }
            break;
        case KEY_6:
            if (isShifted) {
                key_remap_unshift(record, KC_1);
            } else {
                key_remap_shift(record, KC_9);
            }
            break;
        case KEY_7:
            if (isShifted) {
                key_remap_unshift(record, KC_9);
            } else {
                key_remap_unshift(record, KC_EQL);
            }
            break;
        case KEY_8:
            if (isShifted) {
                key_remap_unshift(record, KC_0);
            } else {
                key_remap_shift(record, KC_8);
            }
            break;
        case KEY_9:
            if (isShifted) {
                key_remap_unshift(record, KC_2);
            } else {
                key_remap_shift(record, KC_0);
            }
            break;
        case KEY_10:
            if (isShifted) {
                key_remap_unshift(record, KC_4);
            } else {
                key_remap_shift(record, KC_EQL);
            }
            break;
        case KEY_11:
            if (isShifted) {
                key_remap_unshift(record, KC_6);
            } else {
                key_remap_unshift(record, KC_RBRC);
            }
            break;
        case KEY_12:
            if (isShifted) {
                key_remap_unshift(record, KC_8);
            } else {
                key_remap_shift(record, KC_1);
            }
            break;
        case KEY_13:
            if (isShifted) {
                key_remap_unshift(record, KC_GRV);
            } else {
                key_remap_shift(record, KC_3);
            }
            break;
        case KEY_14:
            if (isShifted) {
                key_remap_shift(record, KC_6);
            } else {
                key_remap_shift(record, KC_2);
            }
            break;
    }
}
