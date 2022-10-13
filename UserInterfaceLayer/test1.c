#include <stdlib.h>
#include <stdio.h>
#include "class.h"
#include "instantiate.h"

int main()
{
    CLASS(trop_grand);

    struct trop_grand
    {
        char vector[1000000000];
    };

    //trop_grand tg = malloc(sizeof(struct trop_grand));
    INSTANTIATE(trop_grand);
    return EXIT_SUCCESS;
}