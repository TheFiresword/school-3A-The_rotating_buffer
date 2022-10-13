#ifndef DIGITAL_WHEEL_H
#define DIGITAL_WHEEL_H
#include <stdint.h>
#include <stdbool.h>
#include "class.h"

CLASS(digital_wheel);

extern digital_wheel DigitalWheel_construct(int32_t start, int32_t end);
extern void DigitalWheel_collect(digital_wheel self);

extern void DigitalWheel_initialize(digital_wheel self);
extern bool DigitalWheel_move_to_next_position(digital_wheel self);
extern int32_t DigitalWheel_get_current_position(digital_wheel self);

#endif
