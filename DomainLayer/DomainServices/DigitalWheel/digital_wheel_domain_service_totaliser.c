#include <stdlib.h>
#include "instantiate.h"
#include "digital_wheel_domain_service_totaliser.h"

struct wheel_position
{
    digital_wheel wheel;
    struct wheel_position *next;
};

struct totaliser
{
    int number_of_wheels;
    struct wheel_position *first;
};

static void digitalWheelDS_display(struct wheel_position *wp, void (*f)(int));

totaliser digitalWheelDS_totaliser_construct()
{
    INSTANTIATE(totaliser);
    self->number_of_wheels = 0;
    self->first = NULL;
    return self;
}
void digitalWheelDS_totaliser_collect(totaliser self)
{
    struct wheel_position *wpn = self->first;
    while (wpn != NULL)
    {
        struct wheel_position *wpp = wpn;
        wpn = wpn->next;
        free(wpp->wheel);
        free(wpp);
    }
    free(self);
}
void digitalWheelDS_totaliser_add_new_wheel(totaliser self, digital_wheel wheel)
{
    void digitalWheelDS_totaliser_go_ahead(totaliser self);
    struct wheel_position *wp = malloc(sizeof(struct wheel_position));
    wp->wheel = wheel;
    wp->next = self->first;
    self->first = wp;
    self->number_of_wheels++;
}
void digitalWheelDS_totaliser_initialize(totaliser self)
{
    struct wheel_position *wp = self->first;
    while (wp != NULL)
    {
        digital_wheel_initialize(wp->wheel);
        wp = wp->next;
    }
}

void digitalWheelDS_totaliser_move(totaliser self)
{
    struct wheel_position *wp = self->first;
    while (wp != NULL)
    {
        if (digital_wheel_move_to_next_position(wp->wheel))
            break;
        wp = wp->next;
    }
}
int digitalWheelDS_totaliser_get_nb_of_wheels(totaliser self)
{
    return self->number_of_wheels;
}
void digitalWheelDS_totaliser_display(totaliser self, void (*f)(int))
{
    display(self->first, f);
}

static void digitalWheelDS_display(struct wheel_position *wp, void (*f)(int))
{
    if (wp != NULL)
    {
        display(wp->next, f);
        f(digital_wheel_get_current_position(wp->wheel));
    }
}
