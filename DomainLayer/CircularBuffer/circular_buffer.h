#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include "class.h"

CLASS(circular_buffer);
extern circular_buffer circularBuffer_construct(unsigned long size);
extern void circularBuffer_collect(circular_buffer self);
extern void circularBuffer_append_char_at_head(circular_buffer self, char c);
extern void circularBuffer_set_current_to_head(circular_buffer self);
extern char circularBuffer_get_char_before_current(circular_buffer self);
extern unsigned long circularBuffer_get_buffer_length(circular_buffer self);
#endif