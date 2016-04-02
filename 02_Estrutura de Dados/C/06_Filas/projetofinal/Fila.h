#include <stdio.h>
#include <stdlib.h>

struct _queue{
    int value;
    struct _queue *next;
};

typedef struct _queue tqueue;

tqueue* createQueue(){
    tqueue *sentinel = (tqueue*)malloc(sizeof(tqueue));
    sentinel->next = NULL;
    sentinel->value = (int)NULL; //sentinela->value guarda endereço do ultimo da fila
    return sentinel;
}

void addQueue(tqueue *q, int el){

    tqueue *oldLast = (tqueue *)q->value;
    tqueue *last = (tqueue *)malloc(sizeof(tqueue));

    last->next = NULL;
    last->value = el;

    if(oldLast){
        oldLast->next = last;
    }
    if(q->next==NULL){
        q->next=last;
    }

    q->value = (int)last;
}

int remQueue(tqueue *q){
    tqueue *temp = q->next;
    int value = temp->value;
    q->next = q->next->next;
    if(q->value==((int)temp)){
        q->value=(int)NULL;
    }
    free(temp);
    return value;
}

int isEmpty(tqueue *q){
    return q->next == NULL;
}

