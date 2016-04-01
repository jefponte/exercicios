#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()
#include "matriz.h"
#include "pesquisaeordenacao.h"

#define FAIL 1
#define FALSE 0
#define TRUE !FALSE

int main()
{

    int i;
    for(i = 0; i< 100; i++){
        if(verificaSeEhPrimo(i)){
            printf("Return true para %d\n", i);

        }
        else
        {
            printf("Return false para %d\n", i);
        }

    }



    //srand(time(NULL));

    int pares = 0, impares = 0, valueSearch = 0; // mediaImpares = 0;
    int *result;
    MatrixOfInt a, b, c, x, y, w;
    printf("RESULTADOS REFERENTES A QUESTÃO 1 DA LISTA 3. \n");
    printf("\nMatrix A:\n");
    readDimentions(&a);
    if(!allocateMatrix(&a)){
        printf("Não consegui alocar a matrix a. ");
        exit(FAIL);
    }
    //Gera vator randomico
    randomicMatrix(&a);
    //printf("\nInforme os elementos da Matrix A:\n");
    //readMatrix(&a);
    //Ordena a matriz de forma decrescente
    descendingOrderWithFlag(&a);
    //Calcula quantos numeros pares e impares tem no vetor.
    showMatrix(&a);
    calcParesImpares(&a, &pares, &impares);
    printf("O números total de pares no vetor e menores que 256 é: %d. \n", pares);
    printf("O números total de ímpares no vetor e menores que 256 é: %d. \n", impares);
    printf("A média dos números ímpares é: %f. \n", returnMediaDeImpares(&a));
    releaseMatrix(&a);
    printf("-----------------------------------------------------------------------------\n");

    printf("\nRESULTADOS REFERENTES A QUESTÃO 2 DA LISTA 3. \n");
    x.row = 1;
    y.row = 1;
    w.row = 1;
    printf("Digite o número de ELEMENTOS do vetor X:\n");
    scanf("%d", &x.col);

    if(!allocateMatrix(&x)){
        printf("Não consegui alocar a matrix X. ");
        exit(FAIL);
    }
    printf("\nInforme os elementos da Matrix X:\n");
    readMatrix(&x);

    y.col = returnNumeroColunas(&x);

    if(!allocateMatrix(&y)){
        printf("Não consegui alocar a matrix Y. ");
        exit(FAIL);
    }
    //gera vetor com valores entre 10 e 40
    geraVetor(&x, &y);
    printf("\nMATRIZ X");
    showMatrix(&x);
    printf("MATRIZ Y");
    showMatrix(&y);

    w.col = returnNumeroColunasComIndicePar(&x);

    if(!allocateMatrix(&w)){
        printf("Não consegui alocar a matrix Y. ");
        exit(FAIL);
    }
    geraVetorPartindoDeIndicePares(&x,&w);
    printf("MATRIZ W");
    showMatrix(&w);
    printf("ENTRE COM O NÚMERO PARA SER PESQUISADO NO VETOR X: ");
    scanf("%d", &valueSearch);
    result = pesquisaBinaria(&x, valueSearch);
    if (result == NULL) {
        printf("Valor não encontrado.\n");
    } else {
        printf("O valor: %d foi encontrado no vetor X.\n", *result);
    }
    printf("O menor número no vetor X é: %d.\n", *(*(x.ptr)));
    printf("O maior número no vetor X é: %d.\n", *(*(x.ptr)+(x.col-1)));

    printf("-----------------------------------------------------------------------------\n");
    printf("RESULTADOS REFERENTES A QUESTÃO 3 DA LISTA 3.\n");
    a.row = 1;
    b.row = 1;
    c.row = 1;
    printf("Digite o número de ELEMENTOS do vetores A e B:\n");
    scanf("%d", &a.col);
    b.col = a.col;
    c.col = a.col;

    if(!allocateMatrix(&a)){
        printf("Não consegui alocar a matrix A. ");
        exit(FAIL);
    }

    if(!allocateMatrix(&b)){
        printf("Não consegui alocar a matrix B. ");
        exit(FAIL);
    }

    if(!allocateMatrix(&c)){
        printf("Não consegui alocar a matrix C. ");
        exit(FAIL);
    }

    printf("\nInforme os elementos da Matrix A:\n");
    readMatrix(&a);

    printf("\nInforme os elementos da Matrix B:\n");
    readMatrix(&b);

    geraVetorPartindoDeOutrosDois(&a,&b,&c);

    printf("ENTRE COM O NÚMERO PARA SER PESQUISADO NO VETOR C: ");
    scanf("%d", &valueSearch);

    printf("MATRIX A.");
    showMatrix(&a);
    printf("MATRIX B.");
    showMatrix(&b);
    printf("MATRIX C.");
    showMatrix(&c);

    result = pesquisaSequencial(&c, valueSearch);
    if (result == NULL) {
        printf("Valor não encontrado no vetor.\n");
    } else {
        printf("O valor: %d foi encontrado no vetor C. \n", *result);
    }

    return 0;



}
