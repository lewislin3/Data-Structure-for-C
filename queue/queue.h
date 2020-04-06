typedef struct struct_queue_elem {

    void* obj;
    struct struct_queue_elem *next;

}queue_elem;

typedef struct struct_queue {

    // the data of a queue
    int queue_size;
    queue_elem dummy;
    queue_elem tail;

    // fuctions of a queue
    int (*_size)(struct struct_queue *);
    void* (*_first)(struct struct_queue *);

    void (*_push)(struct struct_queue*, void*);
    void (*_pop)(struct struct_queue*);

    void (*_init)(struct struct_queue*);

}queue;

extern int queue_size(queue*);
extern void* queue_first(queue*);
extern void queue_push(queue*, void*);
extern void queue_pop(queue*);
extern void queue_init(queue*);
