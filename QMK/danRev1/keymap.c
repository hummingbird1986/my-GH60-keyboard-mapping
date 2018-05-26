#include "gh60.h"
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
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
     * |  Ctrl  |Alt |Gui |      Space        |Gui|Alt |Ctrl|Fn4   |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        F(2),KC_1,KC_2,F(0),KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,KC_TRNS,  \
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS,   \
        KC_LCTL,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_ENT,    \
        F(4),KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,KC_TRNS,    \
        F(1),KC_LALT,KC_LGUI,KC_SPC,KC_RGUI,KC_RALT,KC_RCTL,F(3)),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |GRV|  |  |  |  |  |  |  |  |  |  |  |  |Del|               |
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |mute|voldown|volup|  |  |  | |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |left|down|up|right|  |  |Enter  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |Home|PDN|PUP|   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        KC_GRV,KC_TRNS,KC_TRNS,F(0),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_DEL,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MUTE,KC_VOLD,KC_VOLU,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRNS,KC_TRNS,KC_PENT,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_HOME,KC_PGDN,KC_PGUP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),

    /* 2: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |GRV|   |   |   |   |   |   |   | = | / | * |   |   |Del|   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   | 7 | 8 | 9 | _ |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   | 4 | 5 | 6 | + |   |  Enter |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   | 1 | 2 | 3 |   |           |
     * |-----------------------------------------------------------|
     * |    |    |    |               0         | . |    |    |    |
     * `-----------------------------------------------------------'
     */
     KEYMAP_HHKB(
        KC_GRV,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PEQL,KC_PSLS,KC_PAST,KC_TRNS,KC_TRNS,KC_BSPC,KC_TRNS,\
	    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_7,KC_8,KC_9,KC_PMNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_4,KC_5,KC_6,KC_PPLS,KC_TRNS,KC_PENT,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_1,KC_2,KC_3,KC_TRNS,KC_TRNS,KC_TRNS,\
        F(1),KC_TRNS,KC_SPC,KC_0,KC_DOT,KC_TRNS,KC_TRNS,KC_TRNS),

    /* 3: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |GRV|f1 |f2 |f3 |f4 |f5 |f6 |f7 |f8 |f9 |f10 |f11 |f12|eject|  
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   | up|   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |pUP|left|right|Enter|
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |pDN|down|          |
     * |-----------------------------------------------------------|
     * |    |mouse1|mouse2|                      |  |    |    |    |
     * `-----------------------------------------------------------'
     */
     KEYMAP_HHKB(
        KC_GRV,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_MEDIA_EJECT,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MS_U,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PGUP,KC_MS_L,KC_MS_R,KC_PENT,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PGDN,KC_MS_D,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_BTN1,KC_BTN2,KC_TRNS       ,KC_TRNS,KC_TRNS,KC_TRNS,F(3)),


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
	[1] = ACTION_LAYER_TAP_TOGGLE(2),
	[2] = ACTION_FUNCTION(TRICKY_ESC),
	[3] = ACTION_LAYER_TAP_TOGGLE(3),
	[4] = ACTION_MODS_TAP_TOGGLE(MOD_LSFT),
};

/*#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
*/