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

#define MATRIX_COL_PINS { GP15, GP14, GP13, GP12, GP11, GP10 }
#define MATRIX_ROW_PINS { GP22, GP21, GP20, GP19, GP18, GP17, GP16 }
#define MATRIX_COL_PINS_RIGHT { GP10, GP11, GP12, GP13, GP14, GP15 }

#define DIODE_DIRECTION COL2ROW

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN GP0
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_RX_PIN GP1
