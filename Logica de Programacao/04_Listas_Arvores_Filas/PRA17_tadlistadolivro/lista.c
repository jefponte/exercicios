#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lista.h"





Lista* lst_cria(void){

    return NULL;

}
Lista* lst_insere(Lista* l, int i){
    Lista* novo;
    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}
Lista* lst_insere_na_calda(Lista* l, int v){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    Lista* p;
    Lista* pp;
    p = l;
    novo->info = v;
    novo->prox = NULL;


    if(lst_vazia(l)){
        return novo;

    }else{
        for(pp = p; pp != NULL; pp = pp->prox){
            p = pp;

        }
        p->prox = novo;
        return l;

    }





}
int lst_vazia(Lista* l)
{
    return (l == NULL);
}

Lista* lst_busca(Lista* l, int v){
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == v){
            return p;

        }

    }
    return NULL;
}

Lista* lst_retira(Lista* l, int v){
    Lista* ant = NULL;
    Lista* p = l;

    while(p != NULL && p->info != v){

        ant = p;
        p = p->prox;
    }
    if(p == NULL){
        return l;
    }
    if(ant == NULL){

        l = p->prox;

    }else{

        ant->prox = p->prox;
    }
    free(p);
    return l;
}

void lst_libera(Lista* l){

    Lista* p = l;
    Lista* t;
    while(p != NULL){
        t = p->prox;
        free(p);
        p = t;

    }

}



void lst_imprime(Lista* l){
    Lista* p;

    for(p = l; p != NULL; p = p->prox){

        printf("info = %d\n", p->info);

    }



}

