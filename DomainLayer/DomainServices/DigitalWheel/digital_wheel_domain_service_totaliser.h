#ifndef DW_DOM_SERVICE_H
#define DW_DOM_SERVICE_H

#include "class.h"
#include "digital_wheel.h"

CLASS(totaliser);
extern totaliser digitalWheelDS_totaliser_construct(void);
extern void digitalWheelDS_totaliser_collect(totaliser self);
extern void digitalWheelDS_totaliser_add_new_wheel(totaliser self, digital_wheel wheel);
extern void digitalWheelDS_totaliser_initialize(totaliser self);
extern void digitalWheelDS_totaliser_move(totaliser self);
extern int digitalWheelDS_totaliser_get_nb_of_wheels(totaliser self);
extern void digitalWheelDS_totaliser_display(totaliser self, void (*)(int));

#endif