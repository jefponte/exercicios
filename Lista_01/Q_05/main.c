#include <stdio.h>
#include <stdlib.h>
#include "renda.h"


int main()
{
    int dimensao;
    Renda *listaDeRendas;
    printf("Digite a dimensao: \n");
    scanf("%d", &dimensao);

    listaDeRendas = malloc(sizeof(Renda)*dimensao);
    if(listaDeRendas == NULL){
        printf("Memoria insuficiente:\n");
        return 0;
    }
    lerLista(listaDeRendas, dimensao);
    mostraLista(listaDeRendas, dimensao);

    return 0;
}
