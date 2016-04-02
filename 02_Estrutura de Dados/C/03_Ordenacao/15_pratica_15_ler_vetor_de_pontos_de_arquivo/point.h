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
int retornaDimensaoDoVetor(const char *filename);
void showVector(Point *ptr, int dim);
void showPoint(Point *ptr);
double calculaDistanciaEntrePontos(Point *ponto1, Point *ponto2);


#endif
