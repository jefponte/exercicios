
#ifndef MATRIZ_H
#define MATRIZ_H


#define FALSE 0
#define TRUE !FALSE


typedef struct {
  int **ptr;
  int row;
  int col;
} MatrixOfInt;


void readDimentions(MatrixOfInt *mat);
int allocateMatrix(MatrixOfInt *mat);
void readMatrix(MatrixOfInt *mat);
int multiplyMatrix(MatrixOfInt *matR, MatrixOfInt *matA, MatrixOfInt *matB);
void showMatrix(MatrixOfInt *mat);
void releaseMatrix(MatrixOfInt *mat);
int returnMultiplicationOfRowAndCol(MatrixOfInt *matA, MatrixOfInt *matB, int i, int j);
void randomicMatrix(MatrixOfInt *mat);

//float calcParesImpares(MatrixOfInt *mat, float armazenaPares, float armazenaImpares, float media);
void calcNumberPairsOdd(MatrixOfInt *mat, int *storePairs, int *storeOdd);
//int returnMediaDeImpares(MatrixOfInt *mat , int *media);
float returnMeanOfOdd(MatrixOfInt *mat);

#endif
