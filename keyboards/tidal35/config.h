/*
Copyright 2021 David Wieland <info@datulab.tech>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       ?
#define PRODUCT_ID      ?
#define DEVICE_VER      v80
#define MANUFACTURER    Holepunch Studios
#define PRODUCT         Tidal35

#define CONFIG_H

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { PC7, PD4, PB7, PD0, }
#define MATRIX_COL_PINS { PD5, PD3, PD2, PD1, PC6, PF0, PF1, PF4, PF5, PF6 }
#define UNUSED_PINS { PB0, PB4, PB5, PB6, PD6, PD7, PE6, PF7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5




#pragma once

#ifdef COMBO_ENABLE
#    define COMBO_TERM 200
#endif
