#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circular_buffer_app_service.h"

#define DESTROY_CIRCULAR_BUFFER '!'
#define NEW_CIRCULAR_BUFFER 'n'

//static circular_buffer cb;

static void prompt()
{
    puts("************************************");
    puts("* Instance Circular Buffer created *");
    puts("************************************");
    puts("*************************************************************************");
    puts("At any time you could input a string of char then Enter, e.g, [1]: 1234 ");
    puts("*************************************************************************");
    puts("********************************************************************************************************");
    puts("* Menu [ n: new instance, > : current<-head, < : read char before, ! : destroy instance , Ctr-D: Quit] *");
    puts("********************************************************************************************************");
}

int main()
{
    prompt();
    circularBufferAppService_run_use_case('n'); //create the first instance for free -cadeau!

    while (true)
    {

        int c = getchar();
        if (c == EOF)
            break;

        circularBufferAppService_run_use_case(c);
    }

    printf("\n");
    return EXIT_SUCCESS;
}