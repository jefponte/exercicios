#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

#define FAIL 1

int main()
{




    MatrixOfInt a, b, c;
    printf("\nMatrix A:\n");
    readDimentions(&a);
    if(!allocateMatrix(&a)){
        printf("Não consegui alocar a matrix a. ");
        exit(FAIL);
    }


    printf("\nMatrix B:\n");
    readDimentions(&b);
    if(!allocateMatrix(&b)){
        printf("Não consegui alocar a matrix B. ");
        exit(FAIL);
    }

    printf("\nInforme os elementos da Matrix A:\n");
    readMatrix(&a);
    printf("\nInforme os elementos da Matrix B:\n");
    readMatrix(&b);


    printf("Multiplicaremos e retornaremos em uma matriz c\n");
     if(!multiplyMatrix(&c, &a, &b))
     {
     	exit(FAIL);
     }


     printf("\nA[%d][%d]\n", a.row, a.col);
     showMatrix(&a);
     printf("\nB[%d][%d]\n", b.row, b.col);
     showMatrix(&b);
     printf("\nC[%d][%d]\n", c.row, c.col);
     showMatrix(&c);
     releaseMatrix(&a);
     releaseMatrix(&b);
     releaseMatrix(&c);




    return 0;
}
