#include <stdio.h>
#include <stdlib.h>
#include "caixa.h"


int main()
{
    int dimensao;
    Caixa *historicoDeCaixa;
    printf("Digite a dimensao:\n");
    scanf("%d", &dimensao);

    historicoDeCaixa = (Caixa*)malloc(sizeof(Caixa)*dimensao);
    if(historicoDeCaixa == NULL)
    {
        printf("Memoria nao alocada\n");
        return 0;
    }
    lerVetor(historicoDeCaixa, dimensao);
    relatorio(historicoDeCaixa, dimensao);
    return 0;
}
