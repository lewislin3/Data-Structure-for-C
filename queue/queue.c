#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

extern int queue_size(queue* q){
    return q->queue_size;
}

extern void* queue_first(queue* q){
    if(queue_size(q) == 0)return (void*)-1;
    return q->dummy.next->obj;
}

extern void queue_push(queue* q, void* obj){
    queue_elem* newelem;
    newelem = (queue_elem*)malloc(sizeof(queue_elem));
    newelem->obj = obj;
    newelem->next = NULL;
    q->tail.next->next = newelem;
    q->tail.next = newelem;
    q->queue_size++;
}
extern void queue_pop(queue* q){
    if(queue_size(q) == 0)return;
    //queue_elem* tmp = q->dummy.next;
    q->dummy.next = (q->dummy.next)->next;
    //free(tmp);
    q->queue_size--;
    if(q->queue_size == 0)q->tail.next = &(q->dummy);

}
extern void queue_init(queue* q){
    q->queue_size = 0;
    q->tail.next = &(q->dummy);
}