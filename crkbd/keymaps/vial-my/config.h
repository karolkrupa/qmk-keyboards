/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#pragma once

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_COMBO_ENTRIES 64
#define VIAL_KEY_OVERRIDE_ENTRIES 64
#define VIAL_TAP_DANCE_ENTRIES 64
#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// #define VIALRGB_NO_DIRECT

#ifndef TAPPING_TERM
#  define TAPPING_TERM 200
#endif
#define TAPPING_TERM_THUMB 150
#ifndef TAPPING_TERM_PER_KEY
#  define TAPPING_TERM_PER_KEY
#endif

#ifndef PERMISSIVE_HOLD
#  define PERMISSIVE_HOLD
#endif
#ifndef PERMISSIVE_HOLD_PER_KEY
#  define PERMISSIVE_HOLD_PER_KEY
#endif

#ifndef HOLD_ON_OTHER_KEY_PRESS
#  define HOLD_ON_OTHER_KEY_PRESS
#endif
#ifndef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#  define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#endif

#ifndef RETRO_TAPPING
#  define RETRO_TAPPING
#endif
#ifndef RETRO_TAPPING_PER_KEY
#  define RETRO_TAPPING_PER_KEY
#endif

//#define SPECULATIVE_HOLD

#ifndef QUICK_TAP_TERM
#  define QUICK_TAP_TERM 100
#endif

#ifndef CHORDAL_HOLD
#  define CHORDAL_HOLD
#endif

#ifndef FLOW_TAP_TERM
#  define FLOW_TAP_TERM 50
#endif
