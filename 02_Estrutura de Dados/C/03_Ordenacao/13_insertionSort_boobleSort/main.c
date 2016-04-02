#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>



/*
ordenacao
Objetivo dele é alocar um vetor e ordenar.

*/



int main()
{
    int tamanho = 0;
    int *vetor;
    tamanho = lerDimensao();
    if(!(vetor = alocaVetor(tamanho, vetor))){
        exit(1);
    }
    criaVetorRandomico(tamanho, vetor);
    lerVetor(tamanho, vetor);
    mostraVetor(tamanho, vetor);
    insertionSort(tamanho, vetor);
   // bubbleSort(tamanho, vetor);
    mostraVetor(tamanho, vetor);
    liberaVetor(vetor);


    return 0;
}
