
#ifndef POINT_H
#define POINT_H
#define FALSE 0
#define TRUE !FALSE


typedef struct{
	double x;
	double y;

}Point;

Point* cria(double x, double y);
int loadVector(const char *filename, Point *ptr, int dim);
int identificaNumeroDeBytesDeArquivo(const char *filename);
int retornaDimensaoDoVetor(const char *filename);
void showVector(Point *ptr, int dim);
void showPoint(Point *ptr);
double calculaDistanciaEntrePontos(Point *ponto1, Point *ponto2);
Point *retornaEnderecoDoMaisDistanteDaOrigem(Point* ptr, int dimensaoDoVetor);
int doPrimeiroQuadrante(Point *ptr);
#endif
