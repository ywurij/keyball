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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default (VIA)
  [0] = LAYOUT_universal(
    KC_ESC   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_MINUS ,
    LSFT_T(KC_TAB), KC_A , KC_S    , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , RSFT_T(KC_ENTER) ,
    KC_LCTL  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_INT1  ,
              TG(7) , KC_LALT , LT(3, KC_LNG5) , LT(2,KC_BSPC) , LT(4,KC_SPACE),           RCTL_T(KC_SPACE), RSFT_T(KC_DEL), KC_NO , KC_NO  ,            TG(5)
  ),

  [1] = LAYOUT_universal(
    KC_NO ,  KC_NO , KC_NO  , KC_NO  , KC_NO    , KC_NO    ,                                                 KC_B     , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_RCTL  , KC_RCTL ,
    KC_NO ,  KC_NO , KC_NO  , KC_NO  , KC_ENT   , KC_DEL   ,                                                 KC_NO    , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_RSFT  , KC_RSFT ,
    KC_NO ,  KC_NO , KC_NO  , KC_NO  , KC_V     , KC_B  ,                                                    KC_V     , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_NO    , KC_NO   ,
                  KC_NO  , KC_NO , KC_NO  , KC_NO  , KC_NO  ,                                       KC_NO  , MO(4)    , KC_NO    , KC_NO    ,            KC_PAST
  ),

  [2] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_INT5,                                                    KC_INT4  , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_GRAVE ,
    KC_NO  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                                    KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_PPLS  ,
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_SCLN, KC_LBRC,                                                    KC_RBRC  , KC_QUOT  , KC_NO    , KC_PDOT  , KC_PSLS  , KC_PMNS  ,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      MO(6)  , KC_RSFT  , KC_NO    , KC_NO    ,            KC_PAST
  ),

  [3] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    KC_NO  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                                    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_NO  ,
    KC_NO  , KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                                                    KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_NO  ,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_NO  , KC_NO  , KC_NO  , KC_NO  ,        , KC_NO
  ),

  [4] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_UP  , KC_NO   , KC_NO  ,                                                   KC_H   , S(KC_A), S(KC_S), S(KC_C), KC_G   , KC_F11 ,
    KC_NO  , KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END ,                                                   KC_1   , KC_S   , KC_X   , KC_D   , KC_E   , KC_Z   ,
    KC_NO  , C(KC_Z), C(KC_X), C(KC_C), C(KC_V) , KC_NO  ,                                                   KC_2   , KC_Q   , KC_F   , KC_NO  , KC_NO  , KC_SPACE,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_RCTL, KC_RSFT, KC_NO  , KC_NO  ,        , KC_NO
  ),

  [5] = LAYOUT_universal(
    KC_NO  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                                    KC_TAB , KC_P7  , KC_P8  , KC_P9  , KC_PMNS  , KC_PSLS  ,
    KC_NO  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,                                                    KC_BSPC, KC_P4  , KC_P5  , KC_P6  , KC_PPLS  , KC_PAST  ,
    KC_NO  , KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                                                    KC_DEL , KC_P1  , KC_P2  , KC_P3  , KC_PEQL  , KC_PENT  ,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_PDOT, KC_P0  , KC_NO  , KC_NO  ,        , TG(5)
  ),

  [6] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    KC_NO  , KC_P1  , KC_P2  , KC_P3  , KC_P4  , KC_P5  ,                                                    KC_P6  , KC_P7  , KC_P8  , KC_P9  , KC_P0  , KC_PMNS,
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_PDOT, KC_PSLS, KC_PPLS,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_NO  , KC_NO  , KC_NO  , KC_NO  ,        , KC_PAST
  ),

  [7] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    CM_ON  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    CM_OFF , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
                  TG(7)  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_NO  , KC_NO  , KC_NO  , KC_NO  ,        ,KC NO
),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
