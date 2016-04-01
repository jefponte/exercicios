#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>



Pilha* cria(){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->ptr = NULL;
    return p;
}

Pilha* push(Pilha* pilha, float v){
    Pilha* pilhaNova = (Pilha*)malloc(sizeof(Pilha));
    pilhaNova->v = v;
    pilhaNova->ptr = pilha;
    return pilhaNova;

}
float pop(Pilha** pilha){
    Pilha *pilhaAux;
    float valor;
    if(!estaVazia(*pilha)) {
        return 0;
    }
    pilhaAux = *pilha;
    valor = (*(pilha))->v;
    *pilha = pilhaAux->ptr;
    free(pilhaAux);
    return valor;
}
int estaVazia(Pilha* pilha){
    if(pilha == NULL) {
        return 0;
    }
    return 1;
}
void libera(Pilha* pilha){

}


