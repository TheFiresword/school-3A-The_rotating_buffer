#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "class.h"
#include "instantiate.h"

CLASS(trop_grand);

struct trop_grand
{
    char vector[1000000000];
};

int main()
{
    INSTANTIATE(trop_grand);
    strcpy(self->vector, "abc");
    puts(self->vector);
    return EXIT_SUCCESS;
}