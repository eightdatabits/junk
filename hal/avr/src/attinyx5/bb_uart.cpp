/**
 * @file      bb_uart.cpp
 * @brief     This file contains the bit-banged UART driver definition for the ATtinyx5 series.
 * @author    Liam Bucci <liam.bucci@gmail.com>
 * @date      2017-10-09
 * @copyright Copyright (c) 2017 Liam Bucci. See included LICENSE file.
 */

#include <stdbool.h>
#include <stddef.h>
#include <avr/io.h>

#include "junk/hal/assert.h"
#include "junk/hal/attinyx5/bb_uart.h"

namespace junk {
namespace hal {

/* API Function Definitions ==================================================================== */

BitBangUart::BitBangUart( Baud baud, Pin* rx = NULL, Pin* tx = NULL )
    : m_baud(baud), m_rx(rx), m_tx(tx)
{
    switch(baud)
    {
    case BAUD_1200:

    }

}


bool BitBangUart::putChar( const char c )
{
    m_tx.assert();
    junk_delay_instr(m_bit_time);
}

} // namespace hal
} // namespace junk
