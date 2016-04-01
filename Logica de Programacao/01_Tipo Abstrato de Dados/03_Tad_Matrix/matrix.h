#ifndef MATRIX_H
#define MATRIX_H


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
int retornaMultiplicacaoDeLinhaComColunaDaOutra(MatrixOfInt *matA, MatrixOfInt *matB, int i,int j);

#endif
