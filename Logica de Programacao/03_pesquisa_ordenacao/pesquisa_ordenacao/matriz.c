
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()



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

void randomicMatrix(MatrixOfInt *mat) {
    int i;
	int j;
	for(i = 0; i < mat->row; i++){
		for(j = 0; j < mat->col; j++){
			*(*(mat->ptr + i) + j) = (rand() % 300); // valores aleatórios de 0 a 300
		}
	}
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

int sumMatrix(MatrixOfInt *matA, MatrixOfInt *matB, MatrixOfInt *matR) {
    int i, j;
    if (matA->row != matB->row && matA->col != matB->col)
        return FALSE;

    for(i = 0; i<matA->row; i++) {
        for(j = 0; j<matB->col; j++) {
            *(*(matR->ptr + i) + j) = *(*(matA->ptr + i) + j) + *(*(matB->ptr + i) + j);
        }
    }
    return TRUE;
}

int subtractionMatrix(MatrixOfInt *matA, MatrixOfInt *matB, MatrixOfInt *matR) {
    int i, j;
    if (matA->row != matB->row && matA->col != matB->col)
        return FALSE;

    for(i = 0; i<matA->row; i++) {
        for(j = 0; j<matB->col; j++) {
            *(*(matR->ptr + i) + j) = *(*(matA->ptr + i) + j) - *(*(matB->ptr + i) + j);
        }
    }
    return TRUE;
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

			*(*(matR->ptr + i) + j) = returnMultiplicationOfRowAndCol(matA, matB, i, j);

			//printf("Elemento [%d][%d] = %d * %d ",i, j, retornaSomaDeLinha(matA, i), retornaSomaDeColuna(matB, j));

		}
	}
    return TRUE;

}
// funcao auxiliar para MultiplyMatrix ;)
int returnMultiplicationOfRowAndCol(MatrixOfInt *matA, MatrixOfInt *matB, int i, int j){
	//int linha;
	int coluna;
	int resultado = 0;
	//percorre a linha i da matriz a
	for(coluna = 0; coluna < matA->col; coluna++){
        // lei de formação de matriz: valores da coluna A, multiplica com linhas de B
		resultado += (*(*(matA->ptr + i) + coluna)) * (*(*(matB->ptr + coluna) + j));


	}


	return resultado;

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
	printf( "Liberando ponteiro para ponteiro da matriz. \n");
	free(mat->ptr);
}

// Para a função voltar a ser generica, apenas retirar a condicao de armazenamento.
void calcParesImpares(MatrixOfInt *mat, int *armazenaPares, int *armazenaImpares) {
    int i, j;
    for(i=0; i < mat->row; i++) {

        for(j=0; j<mat->col; j++) {


            if(*(*(mat->ptr + i)+j)<256) {
                if (*(*(mat->ptr + i) + j)%2 == 0) {
                    *armazenaPares = *armazenaPares+1;
                    //printf("%d \n", *armazenaPares);
                }
                else
                {
                    *armazenaImpares = *armazenaImpares+1;
                    //printf("IMPAR %d \n", *armazenaImpares);
                }
            }
        }
    }
    //return armazenaPares, armazenaImpares, media;
}

float returnMediaDeImpares(MatrixOfInt *mat) {
    int i, j;
    float media = 0;
    for(i=0; i < mat->row; i++) {
        for(j=0; j<mat->col; j++) {
            if (*(*(mat->ptr + i)+j)<256) {
                if (*(*(mat->ptr + i) + j)%2 != 0) {
                    media += (float)(*(*(mat->ptr + i) + j))/2;
                    printf("%f\n", media);
                }

            }

               /* if (*(*(mat->ptr + i) + j)%2 == 0) {
                   printf("par\n");

                } else {
                    media += (float)(*(*(mat->ptr + i) + j))/2;
                    printf("%f\n", media);
                }*/
        }

    }
    return media;
}
int returnNumeroColunas(MatrixOfInt *matA) {
    int j, coluna = 0;
    for(j=0; j<matA->col; j++) {
        if(*(*(matA->ptr)+j) > 10 && *(*(matA->ptr)+j) < 40) {
            coluna++;
        }
    }
    return coluna;
}

void geraVetor(MatrixOfInt *matA, MatrixOfInt *matB) {
    int j, coluna = 0;
    for(j=0; j<matA->col; j++) {
        if(*(*(matA->ptr)+j) > 10 && *(*(matA->ptr)+j) < 40) {
            *(*(matB->ptr)+coluna) = *(*(matA->ptr)+j);
            coluna++;
        }
    }
}

int returnNumeroColunasComIndicePar(MatrixOfInt *matA) {
    int j, coluna = 0;
    for(j=0; j<matA->col; j++) {
        if(j%2 == 0) {
            coluna++;
        }
    }
    return coluna;
}


void geraVetorPartindoDeIndicePares(MatrixOfInt *matA, MatrixOfInt *matB) {
    int j, coluna = 0;
    for(j=0; j<matA->col; j++) {
        if(j%2 == 0) {
            *(*(matB->ptr)+coluna) = *(*(matA->ptr)+j);
            coluna++;
        }
    }
}

void geraVetorPartindoDeOutrosDois(MatrixOfInt *matA, MatrixOfInt *matB, MatrixOfInt *matC) {
    int j;
    for (j = 0; j<matA->col; j++) {
        if(j%2==0) {
            *(*(matC->ptr)+j)=  *(*(matB->ptr)+j);
        } else {
            *(*(matC->ptr)+j)=  *(*(matA->ptr)+j);
        }
    }

}
