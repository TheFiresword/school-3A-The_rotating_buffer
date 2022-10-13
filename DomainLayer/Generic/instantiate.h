#ifndef INSTANTIATE_H
#define INSTANTIATE_H
#include <stdlib.h>
#define INSTANTIATE(c_type) \
    c_type self = malloc(sizeof(struct c_type));

#endif