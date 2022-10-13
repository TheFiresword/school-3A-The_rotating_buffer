#ifndef DW_TWO_WHEELS_AP_SERVICE_H
#define DW_TWO_WHEELS_APP_SERVICE_H

#include "class.h"
#include "digital_wheel.h"

CLASS(twoWheels);
extern twoWheels DigitalWheelAppService_two_wheels_construct(int, int);
extern void DigitalWheelAppService_two_wheels_collect(twoWheels self);
extern void DigitalWheelAppService_two_wheels_initialize(twoWheels self);
extern void DigitalWheelAppService_two_wheels_move(twoWheels self, int wheel_speed1, int wheel_speed2);
extern void DigitalWheelAppService_two_wheels_display(twoWheels self, void (*)(int));

#endif