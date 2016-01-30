#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dimensao, i;
    int *lista;
    printf("Digite o valor de N, dimensao do vetor:\n");
    scanf("%d", &dimensao);
    lista = malloc(sizeof(int)*dimensao);
    if(!lista){
        printf("Memoria insuficiente\n");
        return 0;
    }
    for(i = 0; i < dimensao; i++){
        printf("Digite o elemento %d:", i);
        scanf("%d", (lista+i));
    }








}
