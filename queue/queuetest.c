#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(){

    queue q;
    queue_init(&q);
    queue_size(&q);
    queue_push(&q, (void*)1);
    queue_push(&q, (void*)2);
    queue_push(&q, (void*)3);
    printf("queue size: %d\n",queue_size(&q));
    printf("first element: %d \n",(int)queue_first(&q));
    queue_pop(&q);
    printf("queue size: %d\n",queue_size(&q));
    printf("first element: %d \n",(int)queue_first(&q));
    queue_pop(&q);
    printf("queue size: %d\n",queue_size(&q));
    printf("first element: %d \n",(int)queue_first(&q));
    queue_pop(&q);
    printf("queue size: %d\n",queue_size(&q));
    printf("first element: %d \n",(int)queue_first(&q));
}