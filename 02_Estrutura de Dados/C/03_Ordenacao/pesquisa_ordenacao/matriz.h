
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
void calcParesImpares(MatrixOfInt *mat, int *armazenaPares, int *armazenaImpares);
//int returnMediaDeImpares(MatrixOfInt *mat , int *media);
float returnMediaDeImpares(MatrixOfInt *mat);

int returnNumeroColunas(MatrixOfInt *matA);
void geraVetor(MatrixOfInt *matA, MatrixOfInt *matB);
int returnNumeroColunasComIndicePar(MatrixOfInt *matA);
void geraVetorPartindoDeIndicePares(MatrixOfInt *matA, MatrixOfInt *matB);
void geraVetorPartindoDeOutrosDois(MatrixOfInt *matA, MatrixOfInt *matB, MatrixOfInt *matC);
#endif
