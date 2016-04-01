
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include "point.h"


int loadVector(const char *filename, Point *ptr, int dim) {
		FILE *input;

		if((input = fopen(filename, "rb")) == NULL){
			return FALSE;
		}
		fread((Point *)ptr, sizeof(Point), dim, input);
		fclose(input);
		return TRUE;
}
int identificaNumeroDeBytesDeArquivo(const char *filename) {
	//char ch;
	int i = 0;
	FILE *fd;


	if ((fd = fopen(filename, "rb")) == NULL) {
		printf("O arquivo não pode ser aberto");

		return 0;
	}
	while (!feof(fd)) {
//		ch = getc(fd);
		i++;
	}
//	ch = 'c';
	fclose(fd);
	return i;
}
void showVector(Point *ptr, int dim) {
	int i;
	for(i = 0; i< dim; i++){
		showPoint(ptr + i);

	}

}
void showPoint(Point *ptr) {

	printf("\n---------\nMostrando Ponto\n(%lf, %lf)\n", ptr->x, ptr->y);

}
int retornaDimensaoDoVetor(const char *filename){
	int valor;
	valor = identificaNumeroDeBytesDeArquivo(filename);
	return valor;
}
double calculaDistanciaEntrePontos(Point *pontoA, Point *pontoB){
	double aux1;
	double aux2;
	double resultado;
	aux1 = ((pontoB->x - pontoA->x)*(pontoB->x - pontoA->x));
	aux2 = ((pontoB->y - pontoA->y)*(pontoB->y - pontoA->y));
	resultado =(double) aux1+ aux2;
	resultado = sqrt(resultado);

	return resultado;
}
