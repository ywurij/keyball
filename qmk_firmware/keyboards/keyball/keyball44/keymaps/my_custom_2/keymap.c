/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

enum custom_keycodes {
  MC_ID = SAFE_RANGE,
  MC_PASS1,
  MC_PASS2,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default (VIA)
  [0] = LAYOUT_universal( /* base layer */
    LALT_T(KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T,                                        KC_Y, KC_U, KC_I   , KC_O  , KC_P   , RALT_T(KC_MINUS),
    LSFT_T(KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G,                                        KC_H, KC_J, KC_K   , KC_L  , KC_SCLN, RSFT_T(KC_ENT)  ,
    KC_LCTL       , KC_Z, KC_X, KC_C, KC_V, KC_B,                                        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RGUI_T(KC_INT1) ,
        TG(4), KC_LALT, LSFT_T(KC_INT5), LT(2,KC_BSPC), LT(3,KC_SPACE),        RSFT_T(KC_INT4), LT(2, KC_DEL), KC_NO, KC_NO, TG(4)
  ),

  [1] = LAYOUT_universal( /* mouse layer */
    KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO  , KC_T   ,                                      RCTL(KC_I), RCTL(KC_H), RCTL(KC_D), RCTL(KC_E), KC_NO  , KC_NO  ,
    KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_LSFT,                                      SCRL_MO   , KC_BTN1   , KC_BTN3   , KC_BTN2   , KC_RCTL, KC_RSFT,
    KC_NO, KC_NO, KC_NO, KC_NO  , KC_V   , KC_B   ,                                      RCTL(KC_I), RCTL(KC_H), RCTL(KC_D), RCTL(KC_E), KC_NO  , KC_NO  ,
                  KC_NO, KC_NO  , KC_NO, SCRL_MO, SCRL_TO,                      SCRL_TO, MO(5), KC_NO, KC_NO, KC_PAST
  ),

  [2] = LAYOUT_universal( /* number & marks layer */
    S(KC_LBRC), S(KC_1), S(KC_2), S(KC_3)   , S(KC_4), S(KC_5),                          KC_EQL , S(KC_6), KC_PAST   , S(KC_INT3), S(KC_INT1), S(KC_EQL),
    KC_PMNS   , KC_P1  , KC_P2  , KC_P3     , KC_P4  , KC_P5  ,                          KC_P6  , KC_P7  , KC_P8     , KC_P9     , KC_P0     , KC_PPLS  ,
    KC_INT1   , S(KC_7), KC_SCLN, S(KC_RBRC), S(KC_8), KC_RBRC,                          KC_BSLS, S(KC_9), S(KC_BSLS), KC_QUOT   , S(KC_2)   , KC_PSLS  ,
                  TG(6), KC_NO, KC_NO, KC_PDOT, LT(3, KC_PEQL),                 LT(3, KC_PEQL), KC_PDOT, KC_NO, KC_NO, TG(6)
  ),

  [3] = LAYOUT_universal( /* function & arrows layer */
    KC_NO, KC_NO  , KC_NO  , KC_UP  , KC_NO   , KC_NO ,                                  KC_NO  , KC_NO  , KC_UP  , KC_NO   , KC_NO , KC_NO ,
    KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END,                                  KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_NO ,
    KC_F1, KC_F2  , KC_F3  , KC_F4  , KC_F5   , KC_F6 ,                                  KC_F7  , KC_F8  , KC_F9  , KC_F10  , KC_F11, KC_F12,
                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                          KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO
  ),  

  [4] = LAYOUT_universal( /* numpad & arrows layer */
    MC_ID   , KC_TAB , KC_HOME, KC_UP  , KC_PGUP , KC_NO ,                               KC_TAB , KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PEQL,
    MC_PASS1, KC_ENT , KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO ,                               KC_BSPC, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PENT,
    MC_PASS2, KC_ENT , KC_END  , KC_NO  , KC_PGDN, KC_NO ,                               C(KC_F), KC_P1, KC_P2, KC_P3, KC_PSLS, KC_PAST,
                  TG(4), KC_NO, KC_BSPC, KC_DEL, KC_LSFT,                          KC_PDOT, KC_P0, KC_NO, KC_NO, TG(4)
  ),

  [5] = LAYOUT_universal( /* reading shortcut layer*/
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                                                 KC_H, S(KC_A), S(KC_S), S(KC_C), KC_G, KC_F11 ,
    KC_DEL, KC_A, KC_S, KC_D, KC_F, KC_G,                                                 KC_V, KC_S   , KC_X   , KC_D   , KC_E, KC_Z   ,
    KC_NO , KC_Z, KC_X, KC_C, KC_V, KC_B,                                                 KC_B, KC_Q   , KC_F   , KC_2   , KC_1, KC_SPACE,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                KC_RCTL, KC_RSFT, KC_NO, KC_NO, KC_NO
  ),

  [6] = LAYOUT_universal( /* setting layer */
    QK_BOOT, KC_NO   , KC_NO  , KC_NO   , KC_NO  , KBC_RST ,                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,
    KC_NO  , CPI_I100, CPI_I1K, SCRL_DVD, AML_I50, KBC_SAVE,                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  ,
    KC_NO  , CPI_D100, CPI_D1K, SCRL_DVI, AML_D50, AML_TO  ,                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  ,
                  TG(6), KC_NO, KC_NO, KC_NO, KC_NO,                          KC_NO, KC_NO, KC_NO, KC_NO, TG(6)
  ),
};

// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!record->event.pressed) {
    return true;
  }

  switch (keycode) {
    case MC_ID:
      SEND_STRING("6046");
      return false;
    case MC_PASS1:
      SEND_STRING("11909260M");
      return false;
    case MC_PASS2:
      SEND_STRING("M11909260");
      return false;
  }

  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  // Auto enable scroll mode when the highest layer is 3
  keyball_set_scroll_mode(get_highest_layer(state) == 3);
  return state;
}

#ifdef OLED_ENABLE

#include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
  keyball_oled_render_keyinfo();
  keyball_oled_render_ballinfo();
  keyball_oled_render_layerinfo();
}
#endif

// Keep mouse layer active while SCRL_TO/SCRL_MO is producing wheel events.
#define L_MOUSE 1

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
static bool     scroll_mouse_layer_forced = false;
static uint16_t scroll_mouse_timer        = 0;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
  const bool scrolling = keyball_get_scroll_mode() && (mouse_report.h != 0 || mouse_report.v != 0);

  if (scrolling) {
    scroll_mouse_timer = timer_read();
    if (!IS_LAYER_ON(L_MOUSE)) {
      layer_on(L_MOUSE);
      scroll_mouse_layer_forced = true;
    }
  }

  if (scroll_mouse_layer_forced) {
    const bool expired = TIMER_DIFF_16(timer_read(), scroll_mouse_timer) > get_auto_mouse_timeout();
    if (!keyball_get_scroll_mode() || expired) {
      layer_off(L_MOUSE);
      scroll_mouse_layer_forced = false;
    }
  }

  return mouse_report;
}
#endif
