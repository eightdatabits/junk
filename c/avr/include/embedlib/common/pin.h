/**
 * @file      pin.h
 * @brief     This file contains the common pin driver declaration.
 * @author    Liam Bucci <liam.bucci@gmail.com>
 * @date      2015-08-29
 * @copyright Copyright (c) 2017 Liam Bucci. See included LICENSE file.
 */

#ifndef EMB_PIN_H
#define EMB_PIN_H

#include <stdbool.h>

class IPin {
public:
    enum Direction
    {
        DIRECTION_IN  = 0U,
        DIRECTION_OUT = 1U
    };

    virtual void setDirection( const Direction dir ) = 0;
    virtual bool read() const = 0;
    virtual void assert() = 0;
    virtual void deassert() = 0;
    virtual void toggle() = 0;
};

#endif /* EMB_PIN_H */
