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

#pragma once

/* USB Device descriptor parameter */
<<<<<<< HEAD:keyboards/keychron/q1/rev_0100/config.h
#define PRODUCT_ID      0x0100
#define DEVICE_VER      0x0100

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, B3, B2, B1, B0 }
#define MATRIX_COL_PINS { D5, D4, D6, D7, B4, B5, B6, C6, C7, F7, F6, F5, F4, F1, F0 }
=======
#define PRODUCT_ID 0x0150
#define DEVICE_VER 0x0103
>>>>>>> e974bf5994e2e926619e9e0cfd83e0cc257b72bd:keyboards/keychron/q5/q5_ansi_stm32l432/config.h

/* DIP switch */
#define DIP_SWITCH_MATRIX_GRID  { {0,1} }

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1011111

/* RGB Matrix Configuration */
<<<<<<< HEAD:keyboards/keychron/q1/rev_0100/config.h
#define DRIVER_1_LED_TOTAL 59
#define DRIVER_2_LED_TOTAL 23
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
=======
#define DRIVER_1_LED_TOTAL 55
#define DRIVER_2_LED_TOTAL 45
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 54

/* Enable num-lock LED */
// #define NUM_LOCK_LED_INDEX 33
>>>>>>> e974bf5994e2e926619e9e0cfd83e0cc257b72bd:keyboards/keychron/q5/q5_ansi_stm32l432/config.h
