#include <stdio.h>
#define N 128

typedef int data_t;
typedef struct
{
    data_t *data;
    int maxlen;
    int top;
} sqstack;

sqstack *stack_create(int len);
void stack_clear(sqstack *s);
int stack_empty(sqstack *s);
int stack_push(sqstack *s, data_t value);
data_t stack_pop(sqstack *s);
data_t get_top(sqstack *s);