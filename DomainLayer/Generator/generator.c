#include <stdio.h>
#include "generator.h"

// macroconstantes
#define INITIAL_VALUE 1
#define INITIAL_STEP 1

//variables privées: environnement permanent du module
static int init_val = INITIAL_VALUE;
static int current_val = INITIAL_VALUE;
static int step = INITIAL_STEP;

void generator_define_first(int new_first_value)
{
    init_val = new_first_value;
}
void generator_define_step(int new_step)
{
    step = new_step;
}
void generator_go_to_beginning(void)
{
    current_val = init_val;
}
int generator_get_next(void)
{
    int n = current_val;
    current_val += step;
    return n;
}