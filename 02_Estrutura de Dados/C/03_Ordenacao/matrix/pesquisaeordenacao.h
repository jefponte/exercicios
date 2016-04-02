#ifndef PESQUISAEORDENACAO_H
#define PESQUISAEORDENACAO_H

#define FALSE 0
#define TRUE !FALSE


//int pesquisaSequencial(MatrixOfInt *mat, int valueSearch);
int *pesquisaSequencial(MatrixOfInt *mat, int valueSearch);
void printResult(int result);
void bubbleSortWithFlag(MatrixOfInt *mat);
int * pesquisaBinaria(MatrixOfInt *mat, int valorSearch);
void descendingOrderWithFlag(MatrixOfInt *mat);
//void bubbleSortWithFlagRecursivoForVector(Vector *vet);
//int pesquisaBinaria(MatrixOfInt *mat, int valorSearch);






#endif
