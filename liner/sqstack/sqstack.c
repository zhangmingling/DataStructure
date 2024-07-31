#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqstack.h"

sqstack *stack_create(int len)
{
    // malloc
    sqstack *s;
    if ((s = (sqstack *)malloc(sizeof(sqstack))) == NULL)
    {
        printf("malloc sqstack failed!\n");
        return NULL;
    }
    if ((s->data = (data_t *)malloc(len * sizeof(data_t))) == NULL)
    {
        printf("malloc data sqstack failed!\n");
        return NULL;
    }
    // initialize
    memset(s->data, 0, len * sizeof(data_t));
    s->top = -1;
    s->maxlen = len;
    // return
    return s;
}

void stack_clear(sqstack *s)
{
    s->top = -1;
}

int stack_empty(sqstack *s)
{
    return (s->top == -1 ? 1 : 0);
}

int stack_push(sqstack *s, data_t value)
{
    if (s->top == N - 1)
    {
        printf("overflow!\n");
        return -1;
    }

    s->top++;
    s->data[s->top] = value;

    return 0;
}

data_t stack_pop(sqstack *s)
{
    s->top--;
    return (s->data[s->top + 1]);
}

data_t get_top(sqstack *s)
{
    return (s->data[s->top]);
}