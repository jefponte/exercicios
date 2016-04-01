#include "matriz.h"
#include "pesquisaeordenacao.h"
#include <stdio.h>
#include <stdlib.h>


int *pesquisaSequencial(MatrixOfInt *mat, int valueSearch) {
    int achou = FALSE;
    int aux=0;
    int i;
	int j;
    //int aux = 0;
    //while(aux<(mat->row*mat->col && achou == FALSE) {
    //while(achou == FALSE) {
    while(!aux && !achou) {
        for(i = 0; i < mat->row; i++) {
            for(j = 0; j <mat->col; j++) {
                if (*(*(mat->ptr + i)+j) == valueSearch){
                    achou = TRUE;
                    return *(mat->ptr + i)+j;
                }

            }
        }
    aux = aux + 1;
    }
    return NULL;
}

void printResult(int result) {
    if (result == TRUE) {
        printf("\nValor encontrado.\n");
    } else {
        printf("\nValor não encontrado no vetor.\n");
    }
}

void bubbleSortWithFlag(MatrixOfInt *mat) {
	int j, i, flag, aux = 0;
	//flag;
	//for(z=0; z<(mat->row*mat->col); z++) {
	do {
        flag = 1;

        for(i=0; i < mat->row; i++) {

            for(j=0; j<mat->col; j++) {
                /*printf("z = %d \n", z);
                printf("i = %d\n", i);
                printf("j = %d\n", j);*/

                if (j==mat->col - 1) {

                    if (i!=mat->row-1 && (*(*(mat->ptr + i) + j) > *(*(mat->ptr + i + 1)))){

                    aux = *(*(mat->ptr + i) + j);
                    *(*(mat->ptr + i) + j) = *(*(mat->ptr + i+1));
                    *(*(mat->ptr + i+1)) = aux;

                    flag = 0;
                    }
                }
                else if (*(*(mat->ptr + i) + j) > *(*(mat->ptr + i) + (j + 1))) {
                    /*printf("i dentro do if = %d\n", i);
                    printf("j dentro do if  = %d\n", j);
                    printf("%d%d - %d\n",i, j, *(*(mat->ptr + i) + j));
                    printf("%d%d - %d\n",i, j, *(*(mat->ptr + i) + (j + 1)));
                    */

                    aux = *(*(mat->ptr + i) + j);
                    *(*(mat->ptr + i) + j) = *(*(mat->ptr + i) + (j + 1));
                    *(*(mat->ptr + i) + (j + 1)) = aux;
                    flag = 0;
                }
            }
        }
	} while(flag==0);
}

void descendingOrderWithFlag(MatrixOfInt *mat) {
	int j, i, flag, aux = 0;
	//flag;
	//for(z=0; z<(mat->row*mat->col); z++) {
	do {
        flag = 1;

        for(i=0; i < mat->row; i++) {

            for(j=0; j<mat->col; j++) {
                /*printf("z = %d \n", z);
                printf("i = %d\n", i);
                printf("j = %d\n", j);*/

                if (j==mat->col - 1) {

                    if (i!=mat->row-1 && (*(*(mat->ptr + i) + j) < *(*(mat->ptr + i + 1)))){

                    aux = *(*(mat->ptr + i) + j);
                    *(*(mat->ptr + i) + j) = *(*(mat->ptr + i+1));
                    *(*(mat->ptr + i+1)) = aux;

                    flag = 0;
                    }
                }
                else if (*(*(mat->ptr + i) + j) < *(*(mat->ptr + i) + (j + 1))) {
                    /*printf("i dentro do if = %d\n", i);
                    printf("j dentro do if  = %d\n", j);
                    printf("%d%d - %d\n",i, j, *(*(mat->ptr + i) + j));
                    printf("%d%d - %d\n",i, j, *(*(mat->ptr + i) + (j + 1)));
                    */

                    aux = *(*(mat->ptr + i) + j);
                    *(*(mat->ptr + i) + j) = *(*(mat->ptr + i) + (j + 1));
                    *(*(mat->ptr + i) + (j + 1)) = aux;
                    flag = 0;
                }
            }
        }
	} while(flag==0);
}


int *pesquisaBinaria (MatrixOfInt *mat, int valorSearch) {
    int limiteRow = (mat->row-1);
    int limiteCol = (mat->col-1);
    int meioRow = limiteRow/2;
    int meioCol = limiteCol/2;
    int flag = FALSE;
    bubbleSortWithFlag(mat);
    while(!flag) {
        if (valorSearch == *(*(mat->ptr + meioRow) + meioCol)) {
            flag = TRUE;
            return *(mat->ptr + meioRow) + meioCol;
        } else if (valorSearch < *(*(mat->ptr + meioRow) + meioCol)) {
            if (meioCol == 0) {
                if (meioRow == 0) {
                    return NULL;
                } else {
                    meioCol = limiteCol;
                    meioRow--;
                }
            } else {
                meioCol--;

            }

        } else {
            if (meioCol == limiteCol) {
                if (meioRow == limiteRow) {
                    return NULL;
                } else {
                    meioRow++;
                    meioCol = 0;
                }
            } else {
                meioCol++;
            }
        }
    }
    return *(mat->ptr + meioRow) + meioCol;
}

/*bool pesquisaBinaria(MatrixOfInt *mat, int valorSearch) {
    bubbleSortWithFlag(mat);
	int limiteInferior = 0, limiteSuperior = tamanhoDaLista-1, meio;
	bool achou = false;
	while (limiteInferior<=limiteSuperior) {
		meio = (limiteInferior+limiteSuperior)/2;
		if (valorBuscado == *(vetor+meio)) {
			achou = true;
		} else if (valorBuscado < *(vetor+meio)) {
			limiteSuperior = meio - 1;
		} else {
			limiteInferior = meio + 1;
		}
	}
	return achou;
}*/
//int* pesquisaBinaria(MatrixOfInt *mat, int valorSearch) {
/*int pesquisaBinaria(MatrixOfInt *mat, int valorSearch) {
    bubbleSortWithFlag(mat);
    int meioRow, meioCol, limiteInferiorRow, limiteSuperiorRow, limiteInferiorCol, limiteSuperiorCol, flag;
    limiteInferiorRow = 0;
    limiteSuperiorRow = (mat->row-1);
    limiteInferiorCol = 0;
    limiteSuperiorCol = (mat->col-1);
    flag = FALSE;
    while ((limiteInferiorRow <= limiteSuperiorRow) && (limiteInferiorCol <= limiteSuperiorCol)) {
        meioRow = (limiteInferiorRow + limiteSuperiorRow)/2;
        meioCol = (limiteInferiorCol + limiteSuperiorCol)/2;

        if (valorSearch == *(*(mat->ptr + meioRow)+meioCol)) {
            flag = TRUE;

        } else if (valorSearch < *(*(mat->ptr + meioRow)+meioCol)){
            limiteSuperiorRow = meioRow - 1;
            limiteSuperiorCol = meioCol - 1;
        } else {
            limiteInferiorRow = meioRow + 1;
            limiteInferiorCol = meioCol + 1;
        }


    }
    //return *(mat->ptr + meioRow)+meioCol;
    return flag;

}*/
