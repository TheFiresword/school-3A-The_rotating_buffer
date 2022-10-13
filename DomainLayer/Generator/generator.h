#ifndef GENERATOR_H
#define GENERATOR_H

extern void generator_define_first(int new_first_value);
extern void generator_define_step(int new_step);
extern void generator_go_to_beginning(void);
extern int generator_get_next(void);

#endif