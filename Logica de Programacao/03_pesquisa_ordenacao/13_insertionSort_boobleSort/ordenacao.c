#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int lerDimensao() {
    int tamanho = 0;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);
    return tamanho;

}
int*alocaVetor(int tamanho, int *ponteiro) {
    ponteiro = (int*)malloc(sizeof(int)*tamanho);
    return ponteiro;
}

void criaVetorRandomico(int tamanho, int *ponteiro) {
    srand(time(NULL));
    int i;
    for (i=0; i < tamanho; i++)
     {
           *(ponteiro+i) = rand() %100;
     }
}
void mostraVetor(int tamanho, int *ponteiro) {
    int i;
    for(i=0; i<tamanho; i++) {
        printf("vetor [%d ] : %d\n", i,  *(ponteiro+i));

    }

}
void lerVetor(int tamanho, int *ponteiro) {
    int i;
    for(i = 0; i<tamanho; i++) {
        printf("Digite o valor na posiçao[%d]: ",i);
        scanf("%d", (ponteiro+i));

    }

}
void liberaVetor(int*ponteiro) {
    free(ponteiro);

}
void bubbleSort(int tamanho, int *ponteiro) {
    int i,j;
    int aux = 0;

    for(i = 0; i < tamanho; i++) {
        for(j=0; j<tamanho-1; j++) {
            if(*(ponteiro+j)>*(ponteiro+j+1)) {
                aux = *(ponteiro+j+1);
                *(ponteiro+j+1) = *(ponteiro+j);
                *(ponteiro+j) = aux;
            }

        }
    }

}

void insertionSort(int tamanho, int*ponteiro) {
    int j, i, eleito, aux;
    eleito = 0;
    for(i = 0; i < tamanho; i++){
        j = i;
        *(ponteiro+eleito) = *(ponteiro+i);
        while(j >=0){
            if(*(ponteiro+j) > *(ponteiro+ eleito)){
                aux = *(ponteiro+j);
                *(ponteiro+j) = *(ponteiro+eleito);
            }
            j--;

        }


    }

   /*
   int i, j, eleito;
   for (i = 1; i < tamanho; i++){

      eleito = *(ponteiro+i);
      j = i - 1;

      while ((j>=0) && (eleito < *(ponteiro+j)) {
         *ponteiro(j+1) = *(ponteiro+j]);
         j--;
      }
      *ponteiro(j+1) = eleito;

   }
   */

}


