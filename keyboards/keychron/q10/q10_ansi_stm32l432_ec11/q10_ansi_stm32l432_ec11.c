/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
// clang-format off
const ckled2001_led PROGMEM g_ckled2001_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, C_1,    A_1,    B_1},
    {0, C_2,    A_2,    B_2},
    {0, C_3,    A_3,    B_3},
    {0, C_4,    A_4,    B_4},
    {0, C_5,    A_5,    B_5},
    {0, C_6,    A_6,    B_6},
    {0, C_7,    A_7,    B_7},
    {0, C_8,    A_8,    B_8},
    {0, C_9,    A_9,    B_9},
    {0, C_10,   A_10,   B_10},
    {0, C_11,   A_11,   B_11},
    {0, C_12,   A_12,   B_12},
    {0, C_13,   A_13,   B_13},
    {0, C_14,   A_14,   B_14},
    {0, C_15,   A_15,   B_15},
    {0, C_16,   A_16,   B_16},

    {0, I_1,    G_1,    H_1},
    {0, I_2,    G_2,    H_2},
    {0, I_3,    G_3,    H_3},
    {0, I_4,    G_4,    H_4},
    {0, I_5,    G_5,    H_5},
    {0, I_6,    G_6,    H_6},
    {0, I_7,    G_7,    H_7},
    {0, I_8,    G_8,    H_8},
    {0, I_9,    G_9,    H_9},
    {0, I_10,   G_10,   H_10},
    {0, I_11,   G_11,   H_11},
    {0, I_12,   G_12,   H_12},
    {0, I_13,   G_13,   H_13},
    {0, I_14,   G_14,   H_14},
    {0, I_15,   G_15,   H_15},
    {0, I_16,   G_16,   H_16},

    {0, F_1,    D_1,    E_1},
    {0, F_2,    D_2,    E_2},
    {0, F_3,    D_3,    E_3},
    {0, F_4,    D_4,    E_4},
    {0, F_5,    D_5,    E_5},
    {0, F_6,    D_6,    E_6},
    {0, F_7,    D_7,    E_7},
    {0, F_8,    D_8,    E_8},
    {0, F_9,    D_9,    E_9},
    {0, F_10,   D_10,   E_10},
    {0, F_11,   D_11,   E_11},
    {0, F_12,   D_12,   E_12},
    {0, F_13,   D_13,   E_13},
    {0, F_14,   D_14,   E_14},
    {0, F_15,   D_15,   E_15},
    {0, F_16,   D_16,   E_16},

    {1, C_16,   A_16,   B_16},
    {1, C_15,   A_15,   B_15},
    {1, C_14,   A_14,   B_14},
    {1, C_13,   A_13,   B_13},
    {1, C_12,   A_12,   B_12},
    {1, C_11,   A_11,   B_11},
    {1, C_10,   A_10,   B_10},
//    {1, C_9,    A_9,    B_9},
    {1, C_8,    A_8,    B_8},
    {1, C_7,    A_7,    B_7},
    {1, C_6,    A_6,    B_6},
    {1, C_5,    A_5,    B_5},
    {1, C_4,    A_4,    B_4},
    {1, C_3,    A_3,    B_3},
    {1, C_2,    A_2,    B_2},
    {1, C_1,    A_1,    B_1},

    {1, I_16,   G_16,   H_16},
    {1, I_15,   G_15,   H_15},
    // {1, I_14,   G_14,   H_14},
    {1, I_13,   G_13,   H_13},
    {1, I_12,   G_12,   H_12},
    {1, I_11,   G_11,   H_11},
    {1, I_10,   G_10,   H_10},
    {1, I_9,    G_9,    H_9},
    {1, I_8,    G_8,    H_8},
    {1, I_7,    G_7,    H_7},
    {1, I_6,    G_6,    H_6},
    {1, I_5,    G_5,    H_5},
    {1, I_4,    G_4,    H_4},
    {1, I_3,    G_3,    H_3},
    {1, I_2,    G_2,    H_2},
    {1, I_1,    G_1,    H_1},

    {1, F_16,   D_16,   E_16},
    {1, F_15,   D_15,   E_15},
    {1, F_14,   D_14,   E_14},
    {1, F_13,   D_13,   E_13},
    {1, F_12,   D_12,   E_12},
    {1, F_9,    D_9,    E_9},
    {1, F_8,    D_8,    E_8},
    {1, F_7,    D_7,    E_7},
    {1, F_3,    D_3,    E_3},
    {1, F_2,    D_2,    E_2},
    {1, F_1,    D_1,    E_1},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 },
        { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 },
        { 48, 49, 50, 51, 52, 53, 54, __, 55, 56, 57, 58, 59, 60, 61, 62 },
        { 63, 64, __, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77 },
        { 78, 79, 80, 81, 82, __, __, 83, 84, 85, __, __, __, 86, 87, 88 },
    },
    {
        // LED Index to Physical Position
        {0,0},  {19,0},  {34,0},  {46,0},  {60,1},  {72,3},  {87,6},  {99,8},   {120,8},  {132,6},  {147,3},  {159,1},  {173,0},  {185,0},  {201,1},            {219,1},
        {5,14}, {24,14}, {36,14}, {48,13}, {62,15}, {74,17}, {86,20}, {98,22},  {115,22}, {127,20}, {139,17}, {151,15}, {165,13}, {177,14}, {195,14},           {220,13},
        {4,24}, {24,24}, {40,24}, {53,24}, {65,27}, {77,29}, {89,31}, {112,33}, {124,31}, {136,29}, {148,27}, {160,24}, {174,24}, {186,24}, {201,24},           {222,25},
        {2,34}, {23,34}, {40,34}, {54,35}, {66,37}, {78,39}, {90,42}, {118,43}, {130,40}, {142,38}, {154,36}, {167,35}, {179,35},           {199,35},           {224,36},
        {0,45}, {24,45},          {44,45}, {57,46}, {69,48}, {81,51}, {93,53},  {111,54}, {123,52}, {135,50}, {147,48}, {159,46}, {173,45}, {190,45}, {210,47},
        {0,55}, {18,55}, {33,55},          {56,57}, {77,61}, {97,64},                     {124,63},           {147,59},                     {198,58}, {210,58}, {222,58},
    },
    {
        // RGB LED Index to Flag
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,
        1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1,
        1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,    1,
        1, 1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,
        1, 1, 1,    1, 4, 1,       4,    1,       1, 1, 1,
    }
};
// clang-format on
#endif

#ifdef ENCODER_ENABLE

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }
    if (index == 0) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, TAP_CODE_DELAY);
        } else {
            tap_code_delay(KC_VOLD, TAP_CODE_DELAY);
        }
    }
    return true;
}

void encoder0_pad_cb(void *param) {
    (void)param;

    encoder_insert_state(0);
}

void keyboard_post_init_kb(void) {
    pin_t encoders_pad_a[] = ENCODERS_PAD_A;
    pin_t encoders_pad_b[] = ENCODERS_PAD_B;
    palEnableLineEvent(encoders_pad_a[0], PAL_EVENT_MODE_BOTH_EDGES);
    palEnableLineEvent(encoders_pad_b[0], PAL_EVENT_MODE_BOTH_EDGES);
    palSetLineCallback(encoders_pad_a[0], encoder0_pad_cb, NULL);
    palSetLineCallback(encoders_pad_b[0], encoder0_pad_cb, NULL);
}

#endif
