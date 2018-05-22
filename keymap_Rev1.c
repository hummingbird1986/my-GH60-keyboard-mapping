#include "keymap_common.h"

/*
 * HHKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|F03|  4|  5|  6|  7|  8|  9|  0|  -|  =| Bspc  | 
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|\ |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * |-----------------------------------------------------------|
     * |  Ctrl  |Alt |Gui |      Space        |Gui|Alt |Ctrl|Fn    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        FN2, 1,   2,   FN0,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,NO,  \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,NO,       \
        FN1,  LALT,LGUI,          SPC,                     RGUI,  RALT,NO,NO),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |GRV|  |  |  |  |  |  |  |  |  |  |  |  |Del|               |
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |mute|voldown|volup|  |  |  | |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |left|down|up|right|  |  |Enter  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        GRV,NO,NO,FN0,NO,NO,NO,NO,NO,NO,NO,NO,NO,DEL,NO,\
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,VOLD,VOLU,TRNS,TRNS,TRNS,TRNS,\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,RIGHT,TRNS,TRNS,PENT,\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 2: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |GRV| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del|   |
     * |-----------------------------------------------------------|
     * |     |   |   |up |   |   |   | 7 | 8 | 9 |   | up |  |     |
     * |-----------------------------------------------------------|
     * |   | |left|down|right|   |   | 4 | 5 | 6 |left|right|Enter |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   | 0 | 1 | 2 | 3 |Down |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        | . |    |    |    |
     * `-----------------------------------------------------------'
     */
     KEYMAP_HHKB(
        GRV,F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11,F12,TRNS,NO,\
			NO,NO,NO,NO,NO,NO,NO,7,8,9,NO,UP,NO,NO,\
        NO,NO,NO,NO,NO,NO,NO,4,5,6,LEFT,RIGHT,PENT,\
        NO,NO,NO,NO,NO,NO,NO,1,2,3,DOWN,NO,NO,\
        FN1,NO,SPC,        0       ,DOT,NO,NO,NO),


    };

enum function_id {
   TRICKY_ESC, };
//This is for tricky ESC(~)
 
#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    static uint8_t tricky_esc_registered;
    switch (id) {
        case TRICKY_ESC:
            if (record->event.pressed) {
                if (get_mods() & MODS_SHIFT_MASK) {
                    tricky_esc_registered = KC_GRV;
                }
                else {
                    tricky_esc_registered = KC_ESC;
                }
                register_code(tricky_esc_registered);
                send_keyboard_report();
            }
            else {
                unregister_code(tricky_esc_registered);
                send_keyboard_report();
            }
            break;
    }
}
   /* * Fn action definition */ 
   
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1,KC_3),
	[1] = ACTION_LAYER_TAP_KEY(2,KC_CAPS),
	[2] = ACTION_FUNCTION(TRICKY_ESC),
};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
