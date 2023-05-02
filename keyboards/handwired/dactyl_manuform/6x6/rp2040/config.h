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

#define MATRIX_ROW_PINS { GP9, GP10, GP11, GP12, GP13, GP14, GP15 }
#define MATRIX_COL_PINS { GP16, GP17, GP18, GP19, GP20, GP21 }

#define DIODE_DIRECTION COL2ROW

#define EE_HANDS

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN GP0
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_RX_PIN GP1
