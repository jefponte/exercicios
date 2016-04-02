#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>




void readDimentions(MatrixOfInt *mat){

    printf("Digite as dimensões da Matrix de Inteiros:\n");
    printf("Digite o número de linhas:\n");
    scanf("%d", &mat->row);
    printf("Digite o número de Colunas:\n");
    scanf("%d", &mat->col);

}
/**
*Depois dessa função teremos no mat um vetor de ponteiros endereçados pelo
*campo ptr da mat.
*
*/
int allocateMatrix(MatrixOfInt *mat){
    int i;
    if((mat->ptr = (int **)calloc(mat->row, sizeof(int *))) == NULL){
    	return FALSE;
    }

    for(i = 0; i < mat->row; i++)
    {
        if((*(mat->ptr + i) = calloc(mat->col, sizeof(int))) == NULL)
        {
            return FALSE;
        }


    }

    return TRUE;
}

void readMatrix(MatrixOfInt *mat){
	int i;
	int j;
	for(i = 0; i < mat->row; i++){
		for(j = 0; j < mat->col; j++){
			printf("Digite o valor da posição [%d][%d]", i, j);
			scanf( "%d", (*(mat->ptr + i) + j));
		}
	}



}
int multiplyMatrix(MatrixOfInt *matR, MatrixOfInt *matA, MatrixOfInt *matB){
	int i;
	int j;

	if(matA->col != matB->row){
		return FALSE;
	}

	matR->row = matA->row;
	matR->col = matB->col;
	if(!allocateMatrix(matR)){
		return FALSE;
	}
	for(i = 0; i < matR->row; i++){
		for(j = 0; j < matR->col; j++){
			//definindo cada um dos elementos
			//A linha atual tem a soma dos elementos de A
			//Vezes a soma dos elementos da coluna atual de B.

			*(*(matR->ptr + i) + j) = retornaMultiplicacaoDeLinhaComColunaDaOutra(matA, matB, i, j);

			//printf("Elemento [%d][%d] = %d * %d ",i, j, retornaSomaDeLinha(matA, i), retornaSomaDeColuna(matB, j));

		}
	}




    return TRUE;

}
void showMatrix(MatrixOfInt *mat){
	int i;
	int j;
	printf("\n-----------\n");
	for(i = 0; i < mat->row; i++){
		for(j = 0; j < mat->col; j++){
			printf( "[ %d]", *(*(mat->ptr + i) + j));
		}
		printf("\n");
	}
	printf("\n-----------\n");

}

void releaseMatrix(MatrixOfInt *mat){
	int i;
	for(i = 0; i < mat->row; i++){
			printf( "Liberando ponteiro da linha [%d];\n", i);
			free(*(mat->ptr + i));
			printf("\n");
	}
	printf( "Liberando ponteiro para ponteiro da matriz");
	free(mat->ptr);
}

int retornaMultiplicacaoDeLinhaComColunaDaOutra(MatrixOfInt *matA, MatrixOfInt *matB, int i, int j){
	//int linha;
	int coluna;
	int resultado = 0;
	//percorre a linha i da matriz a
	for(coluna = 0; coluna < matA->col; coluna++){
		 //cada elemento vai ser multiplicado com um elemento da outra
		 //mmatriz
		 //Depois somado ao resultado
		 //o elemento da coluna 0
		 //coluna 0 com linha zero da outra.
		resultado += (*(*(matA->ptr + i) + coluna)) * (*(*(matB->ptr + coluna) + j));


	}


	return resultado;

}

