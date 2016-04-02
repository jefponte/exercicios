#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

    Pilha* i;
    Pilha* p;
    p = cria();
    p = push(p, 1);
    p = push(p, 2);
    p = push(p, 3);

    for(i = p; i->ptr != NULL; i = i->ptr) {
        printf("%p", i->ptr);
        printf("\n");
        printf("%f\n", i->v);
    }

    printf("O vslor eh %.3f\n", pop(&p));


    for(i = p; i->ptr != NULL; i = i->ptr) {
        printf("%p", i->ptr);
        printf("\n");
        printf("%.3f\n", i->v);
    }


    return 0;
}
