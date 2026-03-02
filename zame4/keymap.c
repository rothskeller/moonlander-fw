#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_ESCAPE,                                      KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TAB,         KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,       
    CW_TOGG,        KC_A,           KC_O,           KC_E,           MT(MOD_LSFT, KC_U),KC_I,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_D,           MT(MOD_RSFT, KC_H),KC_T,           KC_N,           KC_S,           KC_MINUS,       
    OSM(MOD_LSFT),  KC_SCLN,        KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           MT(MOD_RSFT, KC_BSLS),
    OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_NUBS,        KC_TRANSPARENT, OSM(MOD_LGUI),  KC_TRANSPARENT,                                                                                                 KC_APPLICATION, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_EQUAL,       
    KC_SPACE,       OSL(4),         OSL(1),                         OSL(3),         OSL(2),         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TAB,         KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_CAPS,        KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_W)))),LALT(LGUI(LCTL(LSFT(KC_L)))),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_COLN,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        ST_MACRO_1,     KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_INSERT,      KC_TRANSPARENT, KC_HOME,        KC_PAGE_UP,     KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,                                         KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_LEFT),  KC_UP,          LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LGUI(KC_LEFT),  KC_LEFT,        LCTL(KC_L),     KC_RIGHT,       LGUI(KC_RIGHT), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PSCR,        KC_SCRL,        KC_PAUSE,       KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MAC_CUT,     KC_MAC_COPY,    KC_DOWN,        KC_MAC_PASTE,   KC_MAC_UNDO,    KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_END,         KC_PGDN,        KC_MS_WH_UP,    LGUI(LSFT(KC_Z)),QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_INSERT,      KC_TRANSPARENT, LSFT(KC_HOME),  LSFT(KC_PAGE_UP),KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_LEFT)),LSFT(KC_UP),    LALT(LSFT(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LGUI(LSFT(KC_LEFT)),LSFT(KC_LEFT),  LCTL(KC_L),     LSFT(KC_RIGHT), LGUI(LSFT(KC_RIGHT)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MAC_CUT,     KC_MAC_COPY,    LSFT(KC_DOWN),  KC_MAC_PASTE,   KC_MAC_UNDO,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LSFT(KC_END),   LSFT(KC_PGDN),  KC_MS_WH_UP,    LGUI(LSFT(KC_Z)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_COLN,        KC_EXLM,        KC_EQUAL,       KC_0,           ST_MACRO_3,     ST_MACRO_4,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_W)))),LALT(LGUI(LCTL(LSFT(KC_L)))),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', '*', '*', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);




extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205}, {139,218,205} },

    [1] = { {0,0,0}, {0,0,0}, {86,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,101}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,102,255}, {86,102,255}, {86,102,255}, {86,102,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,102,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,102,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {86,102,255}, {86,102,255}, {86,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,102,255}, {215,102,255}, {215,102,255}, {215,102,255}, {0,0,0}, {215,102,255}, {215,102,255}, {215,102,255}, {215,102,255}, {0,0,0}, {215,102,255}, {215,102,255}, {0,0,0}, {215,102,255}, {0,0,0}, {215,102,255}, {215,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {215,102,255}, {215,102,255}, {0,0,0}, {0,0,0}, {215,102,255}, {0,190,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {215,102,255}, {215,102,255}, {215,102,255}, {215,102,255}, {215,102,255}, {215,255,255}, {215,102,255}, {215,102,255}, {215,102,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,102,255}, {215,102,255}, {215,102,255}, {215,255,255}, {215,102,255}, {215,102,255}, {0,0,0}, {0,0,0}, {215,102,255}, {215,102,255}, {215,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,102,255}, {0,102,255}, {0,102,255}, {0,0,0}, {0,0,0}, {0,102,255}, {0,102,255}, {0,102,255}, {0,0,0}, {0,0,0}, {0,102,255}, {0,102,255}, {0,102,255}, {0,0,0}, {0,0,0}, {0,102,255}, {0,102,255}, {0,102,255}, {0,0,0}, {0,0,0}, {0,102,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_SLASH)SS_DELAY(100)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_0)SS_DELAY(100)  SS_TAP(X_KP_0));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_SLASH)SS_DELAY(100)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_NUBS)SS_DELAY(100)  SS_TAP(X_COMMA)SS_DELAY(100)  SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_NUBS)SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_DOT));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

