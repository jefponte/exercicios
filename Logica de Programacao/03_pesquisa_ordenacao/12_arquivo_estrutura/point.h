#ifndef MATRIX_H
#define MATRIX_H
#define FALSE 0
#define TRUE !FALSE


typedef struct{
	double x;
	double y;

}Point;

int loadVector(const char *filename, Point *ptr, int dim);
int identificaNumeroDeBytesDeArquivo(const char *filename);
void showVector(Point *ptr, int dim);
void showPoint(Point *ptr);
int retornaDimensaoDoVetor(const char *filename);
double calculaDistanciaEntrePontos(Point *pontoA, Point *pontoB);

#endif

