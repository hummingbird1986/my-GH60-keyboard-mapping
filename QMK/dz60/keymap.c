#include "dz60.h"

#define _______ KC_TRNS

#define _BL 0
#define _VIML 1
#define _NL 2
#define _HHKB 3
#define _MCO

//static uint16_t key_timer, cap_key_timer;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_BL]=LAYOUT(
    KC_GRV,          KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,  KC_NO,KC_BSPC,
	LT(_VIML,KC_TAB),        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSLS,
	CTL_T(KC_ESC),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT, KC_ENT,
	KC_LSFT, KC_NO,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,MO(_HHKB/*|_MD*/),
    KC_CAPS,KC_LALT,KC_LGUI,           KC_NO,LT（_MCO,KC_SPC),KC_NO,        KC_RGUI,KC_RALT,KC_NO,KC_RCTL,KC_DEL),
 
    [_VIML]=LAYOUT(
    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,_______,_______,_______,_______,_______,_______, 
    _______,KC_MPLY,KC_MRWD,KC_MFFD,_______,_______,KC_LEFT,KC_DOWN, KC_UP,KC_RIGHT,_______,_______,_______,
    _______,_______,KC_MUTE,KC_VOLD,KC_VOLU,_______,KC_HOME,KC_PGDN,KC_PGUP,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

    [_NL]=LAYOUT(
    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,   KC_7,   KC_8,   KC_9,_______,_______,_______,_______,_______,
    _______,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,   KC_4,   KC_5,   KC_6,_______,_______,_______,KC_EJCT, 
    _______,KC_MPLY,KC_MRWD,KC_MFFD,_______,_______,_______,   KC_1,   KC_2,   KC_3,_______,_______,_______,
    _______,_______,KC_MUTE,KC_VOLD,KC_VOLU,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,   KC_0,_______,_______,_______,_______,_______,_______),
    
    [_HHKB]=LAYOUT(
    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,_______,_______,_______,_______,  KC_UP,_______,KC_EJCT, 
    _______,_______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_PGUP,KC_LEFT,KC_RIGHT,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______, KC_END,KC_PGDN,KC_DOWN,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,TG(_NL),_______,_______,_______),


    [_MCO]=LAYOUT(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,   M(0),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, 
    _______,   M(0),   M(1),   M(2), KC_DEL,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),
	
		
   /*[_EMPTY]=LAYOUT(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, 
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),
    */
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch(id) {
        case 0: {
            if (record->event.pressed) {
                return MACRO( D(LGUI), D(LCTL),D(LSFT),T(4),U(LGUI), U(LCTL),U(LSFT), END  );
            }
		//else {}
                
            
            break;
        }
	case 1: {
            if (record->event.pressed) {
		return MACRO( D(LGUI), D(LSFT), T(4), U(LGUI), U(LSFT), END);
	    }
      	    break;
	}
	case 2: {
            if (record->event.pressed){
		return MACRO( D(LCTL), T(C), U(LCTL), END  );
            } else {
                return MACRO( D(LCTL), T(V), U(LCTL), END  );
            }
	    break;
          }	
        case 3: {
            if (record->event.pressed) {
		return MACRO( D(LGUI), D(LCTL), T(q), U(LGUI), U(LCTL), END);
	    }
      	    break;
	}
	}
    
    return MACRO_NONE;
};

/*
enum function_id{
    
    KEY_1,
    KEY_2,
    
};

const uint16_t PROGMEM fn_actions[] = {
    
    [0] = ACTION_FUNCTION(KEY_1),
    [1] = ACTION_FUNCTION(KEY_2),
    
};


void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
    
    switch (id) {
            
        case KEY_1:
            if(record->event.pressed){
                key_timer= timer_read();
            }
            else{
                if(timer_elapsed(key_timer)<250){
                   cap_key_timer =timer_read(); 
				   do{
				   register_code(KC_CAPS);
                    //unregister_code(KC_CAPS);}
				}
				while(timer_elapsed(cap_key_timer)<100);
				unregister_code(KC_CAPS);
			}
                else{
                    layer_on(_NL);
                }
                
            }
            break;
            
        case KEY_2:
            if (record->event.pressed) {
                layer_off(_NL);
            }
            else {
            }
            break;
    
       }
}*/
