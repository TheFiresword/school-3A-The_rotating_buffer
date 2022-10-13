#include "instantiate.h"
#include "digital_wheel.h"

struct digital_wheel
{
    int32_t start;
    int32_t end;
    int32_t current;
};

digital_wheel DigitalWheel_construct(int32_t start, int32_t end)
{
    INSTANTIATE(digital_wheel);
    self->start = start;
    self->end = end;
    DigitalWheel_initialize(self);
    return self;
}

void DigitalWheel_collect(digital_wheel self)
{
    free(self);
}
void DigitalWheel_initialize(digital_wheel self)
{
    self->current = self->start;
}

bool DigitalWheel_move_to_next_position(digital_wheel self)
{
    if (self->current == self->end)
    {
        DigitalWheel_initialize(self);
        return false;
    }

    self->current++;
    return true;
}

int32_t DigitalWheel_get_current_position(digital_wheel self)
{
    return self->current;
}