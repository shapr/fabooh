/*
 * serial.h - common serial include
 *
 * Created: Nov-12-2012
 *  Author: rick@kimballsoftware.com
 *    Date: 03-02-2013
 * Version: 1.0.1
 *
 * =========================================================================
 *  Copyright © 2013 Rick Kimball
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SERIAL_H_
#define SERIAL_H_

#include "uartserial.h"

//------------------------------------------------------------------------
// mix-in some serial and print to form a working serial class

template <uint32_t BAUD, uint32_t MCLK_HZ,
          typename TXPIN, typename RXPIN>
struct serial_default_t:
    serial_base_uart_t<BAUD, MCLK_HZ, TXPIN, RXPIN>,
    print_t<serial_default_t<BAUD, MCLK_HZ, TXPIN, RXPIN>, uint32_t, uint32_t >
{
};

// TODO: implement a Timer based software version
// TODO: enhanced software version to support port pin triggering
// TODO: add timeout option
// TODO: add ring buffer implementations

#endif
