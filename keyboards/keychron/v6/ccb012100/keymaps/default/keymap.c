/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keycode.h"
#include QMK_KEYBOARD_H

// clang-format off

enum layers{
  MAC_BASE,     // programming layer
  WIN_BASE,     // gaming layer
  NAV_LAYER,    // Arrow keys (Right hand)
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_109(
        KC_ESC,                 KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                    KC_F7,          KC_F8,          KC_F9,          KC_F10,   KC_F11,   KC_F12,     KC_MPLY,                KC_PSCR,  KC_SCRL,  RM_TOGG,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        MT(MOD_MEH,KC_GRV),     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,                     KC_7,           KC_8,           KC_9,           KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,                KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,                 KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,                     KC_U,           KC_I,           KC_O,           KC_P,     KC_LBRC,  KC_RBRC,    MT(MOD_MEH,KC_BSLS),    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_ESC,                 KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,                     KC_J,           KC_K,           KC_L,           KC_SCLN,  KC_QUOT,              KC_ENT,                                               KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,                          KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                     KC_N,           KC_M,           KC_COMM,        KC_DOT,   KC_SLSH,              KC_RSFT,                          KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,                KC_LCMD,  KC_LOPT,                                MT(MOD_RCTL, KC_SPACE),                                                   KC_ROPT,  KC_RCMD,  KC_F17,     KC_RCTL,                KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [WIN_BASE] = LAYOUT_ansi_109(
        KC_ESC,                 KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                    KC_F7,          KC_F8,          KC_F9,          KC_F10,   KC_F11,   KC_F12,     KC_MPLY,                KC_PSCR,  KC_SCRL,  RM_TOGG,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_GRV,                 KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,                     KC_7,           KC_8,           KC_9,           KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,                KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,                 KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,                     KC_U,           KC_I,           KC_O,           KC_P,     KC_LBRC,  KC_RBRC,    MT(MOD_MEH,KC_BSLS),    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,                KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,                     KC_J,           KC_K,           KC_L,           KC_SCLN,  KC_QUOT,              KC_ENT,                                               KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,                          KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                     KC_N,           KC_M,           KC_COMM,        KC_DOT,   KC_SLSH,              KC_RSFT,                          KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,                KC_LWIN,  KC_LALT,                                KC_SPACE,                                                                 KC_RALT,  KC_RWIN,  KC_MENU,    KC_RCTL,                KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [NAV_LAYER] = LAYOUT_ansi_109(
        _______,                _______,  _______,  _______,  _______,  _______,  _______,                  _______,        _______,        _______,        _______,  _______,  _______,    _______,                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,                _______,  _______,  _______,  _______,  _______,  _______,                  _______,        _______,        _______,        _______,  _______,  _______,    _______,                _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,                _______,  _______,  _______,  _______,  _______,  LGUI(KC_LEFT),            LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), _______,  _______,  _______,    _______,                _______,  _______,  _______,  _______,  _______,  _______,
        _______,                _______,  _______,  _______,  _______,  _______,  KC_LEFT,                  KC_DOWN,        KC_UP,          KC_RGHT,        _______,  _______,              _______,                                              _______,  _______,  _______,  _______,
        _______,                          _______,  _______,  _______,  _______,  LALT(KC_LEFT),            LALT(KC_DOWN),  LALT(KC_UP),    RALT(KC_RIGHT), _______,  _______,              _______,                          _______,            _______,  _______,  _______,
        _______,                _______,  _______,                                _______,                                                                  _______,  _______,  _______,    _______,                _______,  _______,  _______,  _______,            _______,  _______),
};

// clang-format on
enum combo_events { NAV_COMBO, MEH_L_COMBO, MEH_R_COMBO };

// nav_combo -> hold down S and F
const uint16_t PROGMEM nav_combo[] = {KC_S, KC_F, COMBO_END};
// mehL_combo -> hold down Z and C
const uint16_t PROGMEM mehL_combo[] = {KC_Z, KC_C, COMBO_END};
// mehR_combo -> hold down M and .
const uint16_t PROGMEM mehR_combo[] = {KC_M, KC_DOT, COMBO_END};

combo_t key_combos[] = {[NAV_COMBO]   = COMBO(nav_combo, MO(NAV_LAYER)), // hold S & D to toggle NAV_LAYER
                        [MEH_L_COMBO] = COMBO(mehL_combo, KC_MEH),       // hold Z and C for Meh key
                        [MEH_R_COMBO] = COMBO(mehR_combo, KC_MEH)};      // hold M and . for Meh key

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    /*
     * Exclude WIN_BASE from combos.
     *
     * NOTE: Keychron's hardware toggle switch changes the default layer via `default_layer_state`.
     * `layer_state_is()` only checks the overlay layer state, so we want to use
     * `get_highest_layer(default_layer_state)` instead.
     */
    if (get_highest_layer(default_layer_state) == WIN_BASE) {
        return false;
    }
    // leaving in the switch case as an example in case I need it in the future
    /* switch (combo_index) {
        // Disable combo `NAV_COMBO` on layer `WIN_BASE`
        case NAV_COMBO:
            if (get_highest_layer(default_layer_state) == WIN_BASE) {
                return false;
            }
    } */

    return true;
}

// add <Left paren/right paren> to the alternate repeat key pairings
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_LPRN:
            return KC_RPRN;
        case KC_RPRN:
            return KC_LPRN;
    }

    return KC_TRNS; // Defer to default definitions.
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {[MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}, [NAV_LAYER] = {ENCODER_CCW_CW(RM_VALD, RM_VALU)}, [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}};
#endif // ENCODER_MAP_ENABLE
