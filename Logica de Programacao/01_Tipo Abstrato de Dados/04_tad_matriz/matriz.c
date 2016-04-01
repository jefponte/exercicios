
#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int alocaMemoria(Matriz *mat) {
    mat->ponteiro = (int **)calloc(mat->linhas, sizeof(int*));
    if(mat->ponteiro == NULL){
        return 0;
    }


    mat->matrizDeInt = (int*)malloc(mat->numeroDimensao*(sizeof(int)));
    if (mat->matrizDeInt == NULL) {
        return 0;
    } else {
        return 1;
    }
}

void lerDimensao(Matriz *mat) {
    printf("Digite a dimensão:");
    scanf("%d", &mat->numeroDimensao);
}

void lerElementos(Matriz *mat) {
    int i;
    for(i = 0; i < mat->numeroDimensao ; i++) {
        printf("Elemento %d: \n", i );
        scanf("%d", (mat->matrizDeInt+i));
    }
}

void exibeElementos(Matriz *mat) {
    int i;
    for (i=0; i< mat->numeroDimensao; i++) {
        printf("Elemento %d: %d \n", i, *(mat->matrizDeInt + i));
    }
}

