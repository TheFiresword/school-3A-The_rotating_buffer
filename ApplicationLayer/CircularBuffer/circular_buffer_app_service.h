#ifndef CB_APP_SERVICE_H
#define CB_APP_SERVICE_H
#include "generator.h"
#include "circular_buffer.h"

#define DESTROY_CIRCULAR_BUFFER '!'
#define GO_TO_HEAD '>'
#define DISPLAY_PRECEDENT '<'
#define NEW_CIRCULAR_BUFFER 'n'

#define CIRCULAR_BUFFER_LENGTH 6

void circularBufferAppService_run_use_case(int c);

#endif