/* Copyright 2019 COSEYFANNITUTTI
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
#include QMK_KEYBOARD_H

#define _BL 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_numpad_5x4_full(
<<<<<<< HEAD
      KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
=======
      KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, 
>>>>>>> bddc30d21f539220c7a6c0fe2d4acaedb1857121
      KC_P7,   KC_P8,   KC_P9,   KC_A,         
      KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
      KC_P1,   KC_P2,   KC_P3,   KC_B,         
      KC_P0,   KC_P00,  KC_PDOT, KC_PENT  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_P00:
      if (record->event.pressed) {
        register_code(KC_P0);
        unregister_code(KC_P0);
        register_code(KC_P0);
        return false;
      } else {
        unregister_code(KC_P0);
      }
      break;
  }
  return true;
}
