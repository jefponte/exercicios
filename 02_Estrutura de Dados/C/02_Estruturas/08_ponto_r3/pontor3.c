#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "pontor3.h"


Pontor3* ptor3_cria(float x, float y, float z){
    Pontor3* p = (Pontor3*)malloc(sizeof(Pontor3));
    if(p == NULL){
        return p;
    }
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
}

/*

void pto_libera(Ponto* p){
    free(p);
}


void pto_acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}


void pto_atribui(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}



float pto_distancia(Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    float distancia = (float)sqrt(dx*dx + dy*dy);
    return distancia;
}


*/
void ptor3_mostra(Pontor3* p){
    printf("\nPonto(%f, %f, %f)\n", p->x, p->y, p->z);
}


/*
void pto_soma(Ponto* p1, Ponto* p2, Ponto* resultado){
    resultado->x = p1->x + p2->x;
    resultado->y = p1->y + p2->y;
}

void pto_subtrai(Ponto* p1, Ponto* p2, Ponto* resultado){
    resultado->x = p1->x - p2->x;
    resultado->y = p1->y - p2->y;
}
void pto_mostraCoordenadasPolares(Ponto* p){
    /*Informações retiradas de.
    http://pt.wikipedia.org/wiki/Coordenadas_polares
    *//*

    Ponto* origem;
    float r;
    float q;
    origem = pto_cria(0.0, 0.0);
    r = pto_distancia(p, origem);
    q = (float)atan(p->y/p->x);
    printf("\nExibindo coordenadas polares. R -> %f e Q -> %f\n", r, q);

}
*/
