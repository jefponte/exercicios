#include "vetor.h"
#include <stdio.h>
#include <stdlib.h>
#include "pesquisaeordenacao.h"

int allocateVector(Vector *vet) {
    if((vet->ptr = (int *)calloc(vet->numberOfElements, sizeof(int)))== NULL) {
        return FALSE;
    }

    return TRUE;
}

int returnNumberOfCol(Vector *vet) {
    int i, col = 0;
    for(i=0; i<vet->numberOfElements; i++) {
        if(*(vet->ptr + i) > 10 && *(vet->ptr + i) < 40) {
            col++;
        }
    }
    return col;
}

void createVector(Vector *vetA, Vector *vetB) {
    vetB->numberOfElements = returnNumberOfCol(vetA);
    int i, col = 0;
    if(allocateVector(vetB)) {
        for(i=0; i< vetA->numberOfElements; i++) {
            if(*(vetA->ptr+i) > 10 && *(vetA->ptr+i)  < 40) {
                *(vetB->ptr+col)  = *(vetA->ptr+i);
                col++;
            }
        }
    } else {
        printf("Não conseguiu alocar memória para VetorB.\n");
    }
}

int returnNumberColOfIndexPair(Vector *vet) {
    int i, col = 0;
    for(i=0; i<vet->numberOfElements; i++) {
        if(i%2 == 0) {
            col++;
        }
    }
    return col;
}


void createVectorWithIndexPair(Vector *vetA, Vector *vetB) {
    vetB->numberOfElements = returnNumberColOfIndexPair(vetB);
    int i, col = 0;
    if(allocateVector(vetB)) {
        for(i=0; i< vetA->numberOfElements; i++) {
            if(i%2 == 0) {
                *(vetB->ptr + col) = *(vetA->ptr + i);
                col++;
            }
        }
    } else {
        printf("Não conseguiu alocar memória pra VetorB.\n");
    }
}

void createVectorStartingTwoVector(Vector *vetA, Vector *vetB, Vector *vetC) {
    vetB->numberOfElements = returnNumberColOfIndexPair(vetB);
    int i;
    if(allocateVector(vetB)) {
        for (i = 0; i< vetA->numberOfElements; i++) {
            if(i%2==0) {
                *(vetC->ptr + i)=   *(vetB->ptr + i);
            } else {
                 *(vetC->ptr + i)=   *(vetA->ptr + i);
            }
        }
    } else {
        printf("Não conseguiu alocar o VetorC. \n");
    }

}


void releaseVector(Vector *vet) {
	int i;
	for(i = 0; i < vet->numberOfElements; i++){
			printf( "Liberando ponteiro da posição [%d].\n", i);
			free((vet->ptr + i));
			printf("\n");
	}
	printf( "Liberando ponteiro do vetor. \n");
	free(vet->ptr);
}
