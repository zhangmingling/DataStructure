#include "linkqueue.h"

int main()
{
    linkqueue *lq;
    lq = queue_create();
    if(lq == NULL)
    {
        return -1;
    }

    enqueue(lq, 10);
    enqueue(lq, 20);
    enqueue(lq, 30);

    while(!queue_empty(lq))
    {
        printf("dequeue: %d\n", dequeue(lq));
    }

    queue_free(lq);

    return 0;
}