#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "digital_wheel_two_wheels_app_service.h"
static void f(int v)
{
    printf("[%d]", v);
}

static void display(twoWheels two_wheels)
{
    printf("<");
    DigitalWheelAppService_two_wheels_display(two_wheels, f);
    printf(">\n");
}
int main(int argc, char **argv)
{
    twoWheels two_wheels = DigitalWheelAppService_two_wheels_construct(0, 9);
    DigitalWheelAppService_two_wheels_initialize(two_wheels);
    display(two_wheels);
    DigitalWheelAppService_two_wheels_move(two_wheels, 1, 2);
    display(two_wheels);
    DigitalWheelAppService_two_wheels_move(two_wheels, 1, 2);
    display(two_wheels);
}