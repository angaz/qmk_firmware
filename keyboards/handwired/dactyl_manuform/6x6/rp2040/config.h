/* Copyright 2019
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

#include "config_common.h"

// wiring of each half
#define MATRIX_COL_PINS { GP15, GP14, GP13, GP12, GP11, GP10 }
#define MATRIX_ROW_PINS { GP22, GP21, GP20, GP19, GP18, GP17, GP16 }
#define MATRIX_COL_PINS_RIGHT { GP10, GP11, GP12, GP13, GP14, GP15 }

#define DIODE_DIRECTION COL2ROW

// #define MASTER_LEFT
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN GP0
