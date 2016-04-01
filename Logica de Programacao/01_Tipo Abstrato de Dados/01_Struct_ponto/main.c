#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    float x;
    float y;

}Ponto;


void mostraPonto(Ponto* d){
    printf("Ponto (%f, %f)\n", d->x, d->y);

}
void modificaPonto(Ponto* ponteiro){
    ponteiro->x = ponteiro->x+1;
    ponteiro->y = ponteiro->y+1;

}


int main()
{

    Ponto a;
    a.x = 12.0;
    a.y = 13.3;
    return 0;
}
