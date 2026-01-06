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
    LSFT_T(KC_TAB), KC_A , KC_S    , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LCTL  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_INT1  ,
              TG(7) , KC_LALT , LT(3, KC_LNG5) , LT(2,KC_BSPC) , LT(4,KC_SPACE),           RCTL_T(KC_SPACE), RSFT_T(KC_DEL), KC_NO , KC_NO  ,            TG(5)
  ),

  [1] = LAYOUT_universal(
    KC_NO ,  KC_NO , KC_NO  , KC_NO  , KC_NO    , KC_NO    ,                                                 KC_B     , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_RCTL  , KC_RCTL ,
    KC_NO ,  KC_NO , KC_NO  , KC_NO  , KC_LCTL  , KC_LSFT  ,                                                 SCRL_MO  , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_RSFT  , KC_RSFT ,
    KC_NO ,  KC_NO , KC_NO  , KC_NO  , KC_V     , KC_B     ,                                                 KC_V     , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_NO    , KC_NO   ,
                  KC_NO  , KC_NO , KC_NO  , SCRL_MO  , KC_NO  ,                                       KC_NO  , MO(4)    , KC_NO    , KC_NO    ,            KC_PAST
  ),

  [2] = LAYOUT_universal(
    KC_NO  , S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                                                    S(KC_6)  , S(KC_7)  , S(KC_8)  , S(KC_9)  , KC_LBRC  , KC_EQL   ,
    KC_NO  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                                    KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_PPLS  ,
    KC_NO  , KC_SCLN, KC_QUOT, KC_COMM, S(KC_8), KC_RBRC,                                                    KC_NUHS  , S(KC_9)  , KC_DOT   , KC_PDOT  , KC_PSLS  , KC_PMNS  ,
                  KC_INT1, KC_INT3, KC_NO  , KC_NO  , KC_NO  ,                                      MO(6)  , KC_RSFT  , KC_NO    , KC_NO    ,            KC_PAST
  ),

  [3] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    KC_NO  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                                    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_NO  ,
    KC_NO  , KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                                                    KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_NO  ,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_NO  , KC_NO  , KC_NO  , KC_NO  ,          KC_NO
  ),

  [4] = LAYOUT_universal(
    KC_NO  , KC_NO  , KC_NO  , KC_UP  , KC_NO   , KC_NO  ,                                                   KC_H   , S(KC_A), S(KC_S), S(KC_C), KC_G   , KC_F11 ,
    KC_NO  , KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END ,                                                   KC_1   , KC_S   , KC_X   , KC_D   , KC_E   , KC_Z   ,
    KC_NO  , C(KC_Z), C(KC_X), C(KC_C), C(KC_V) , KC_NO  ,                                                   KC_2   , KC_Q   , KC_F   , KC_NO  , KC_NO  , KC_SPACE,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_RCTL, KC_RSFT, KC_NO  , KC_NO  ,          KC_NO
  ),

  [5] = LAYOUT_universal(
    KC_NO  , KC_NO   , KC_NO  , KC_NO   , KC_NO  , KBC_RST ,                                                  KC_TAB , KC_P7  , KC_P8  , KC_P9  , KC_PMNS  , KC_PSLS  ,
    KC_NO  , CPI_I100, CPI_I1K, SCRL_DVD, AML_I50, KBC_SAVE,                                                  KC_BSPC, KC_P4  , KC_P5  , KC_P6  , KC_PPLS  , KC_PAST  ,
    KC_NO  , CPI_D100, CPI_D1K, SCRL_DVI, AML_D50, AML_TO  ,                                                  KC_DEL , KC_P1  , KC_P2  , KC_P3  , KC_PEQL  , KC_PENT  ,
                  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                      KC_PDOT, KC_P0  , KC_NO  , KC_NO  ,          TG(5)
  ),
};

enum combos {
  ER_UP,
  DF_RGHT,
  SD_LEFT,
  CV_DOWN,
  FG_END,
  AS_HOME,
  ASDF_TAB,
  RT_ESC,
  JKLSCLN_ENT,
  SDF_BSPC,
  JKL_DEL,
};

const uint16_t PROGMEM er_up_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM df_rght_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM sd_left_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM cv_down_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM fg_end_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM as_home_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM asdf_tab_combo[] = {KC_A, KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM rt_esc_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM jklscln_ent_combo[] = {KC_H, KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM sdf_bspc_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jkl_del_combo[] = {KC_J, KC_K, KC_L, COMBO_END};

combo_t key_combos[] = {
  [ER_UP] = COMBO(er_up_combo, KC_UP),
  [DF_RGHT] = COMBO(df_rght_combo, KC_RGHT),
  [SD_LEFT] = COMBO(sd_left_combo, KC_LEFT),
  [CV_DOWN] = COMBO(cv_down_combo, KC_DOWN),
  [FG_END] = COMBO(fg_end_combo, KC_END),
  [AS_HOME] = COMBO(as_home_combo, KC_HOME),
  [ASDF_TAB] = COMBO(asdf_tab_combo, KC_TAB),
  [RT_ESC] = COMBO(rt_esc_combo, KC_ESC),
  [JKLSCLN_ENT] = COMBO(jklscln_ent_combo, KC_ENT),
  [SDF_BSPC] = COMBO(sdf_bspc_combo, KC_BSPC),
  [JKL_DEL] = COMBO(jkl_del_combo, KC_DEL),
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
