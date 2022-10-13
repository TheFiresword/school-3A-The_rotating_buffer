#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "circular_buffer_app_service.h"

static circular_buffer cb;

static void generate_next_int()
{
    printf("\n[%d]: ", generator_get_next());
}

static circular_buffer create(int length)
{

    circular_buffer cb = circularBuffer_construct(length);

    return cb;
}

void circularBufferAppService_run_use_case(int c)
{
    if (cb == NULL)
        generate_next_int();

    switch (c)
    {
    case GO_TO_HEAD:
        circularBuffer_set_current_to_head(cb);
        break;

    case DISPLAY_PRECEDENT:
        printf("(%c)", circularBuffer_get_char_before_current(cb));
        break;

    case DESTROY_CIRCULAR_BUFFER:
        circularBuffer_collect(cb);
        break;

    case NEW_CIRCULAR_BUFFER:
        cb = create(CIRCULAR_BUFFER_LENGTH);
        break;

    case '\n':
        generate_next_int();
    case ' ':
    case '\t':
        break;

    default:
        circularBuffer_append_char_at_head(cb, c);
        break;
    }
}
