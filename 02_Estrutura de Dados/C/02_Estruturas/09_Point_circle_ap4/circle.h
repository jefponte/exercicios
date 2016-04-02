#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"


typedef struct{
	Point center;
	double radius;

}Circle;


int circleLoadVector(const char *filename, Circle *ptr, int dim);
void circleShowVector(Circle *vetorDeCirculos, int dimensaoDoVetor);
void showCircle(Circle *ptr);
void mostraCirculosDoPrimeiroQuadrante(Circle *ptr, int dimensaoDoVetor);
double retornaArea(Circle *ptr);
void mostraSomaDasAreasDosElementos(Circle *ptr, int dimensaoDoVetor);
#endif
