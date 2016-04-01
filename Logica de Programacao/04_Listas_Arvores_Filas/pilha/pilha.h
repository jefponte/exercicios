#ifndef PILHA_H
#define PILHA_H

typedef struct pilha{
    float v;
    struct pilha *ptr;

}Pilha;

Pilha* cria();
Pilha* push(Pilha* pilha, float v);
float pop(Pilha** pilha);
int estaVazia(Pilha* pilha);
void libera(Pilha* pilha);

#endif

