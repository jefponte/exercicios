
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include "point.h"

Point* cria(double x, double y){
    Point* ptr;
    ptr = malloc(sizeof(Point));
    ptr->x = x;
    ptr->y = y;
    return ptr;
}

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
	char ch;
	int i = 0;
	FILE *fd;

	if ((fd = fopen(filename, "rb")) == NULL) {
		printf("O arquivo não pode ser aberto");

		return 0;
	}
	while (!feof(fd)) {
		ch = getc(fd);
		i++;
	}
	fclose(fd);
	return i;
}
void showVector(Point *ptr, int dim) {
	int i;

	for(i = 0; i< dim; i++){
	    printf("\nPonto %d: \n", i);
		showPoint(ptr + i);

	}

}
void showPoint(Point *ptr) {

	printf("\nMostrando Ponto\n(%.2f, %.2f)\n", ptr->x, ptr->y);

}
int retornaDimensaoDoVetor(const char *filename){
	int valor;
	valor = identificaNumeroDeBytesDeArquivo(filename);
	return valor;
}
double calculaDistanciaEntrePontos(Point *pontoA, Point *pontoB){
	double distancia;
	double auxX;
	double auxY;
	double aux;

	auxX = (pontoB->x - pontoA->x)*(pontoB->x - pontoA->x);
	auxY = (pontoB->y - pontoA->y)*(pontoB->y - pontoA->y);

	aux = auxX + auxY;
	distancia = sqrt(aux);
	return distancia;

}
Point *retornaEnderecoDoMaisDistanteDaOrigem(Point* ptr, int dimensaoDoVetor)
{
    Point* origem;
    int i;
    int indiceDoMaior = 0;
    origem = cria(0.0, 0.0);
    for(i = 0; i < dimensaoDoVetor; i++)
    {
        //partiremos do pressuposto de que o primeiro elemento é o mais distante.
        //Comparamos ele com o seguinte. Se o seguinte for mais distante, seu indice passa a ser o do mais distante.
        if(calculaDistanciaEntrePontos(ptr+i, origem) > calculaDistanciaEntrePontos(ptr+indiceDoMaior, origem))
        {
            indiceDoMaior = i;
        }


    }
    return ptr+ indiceDoMaior;
}

int doPrimeiroQuadrante(Point *ptr){

    if(ptr->x > 0 && ptr->y > 0){
        return TRUE;

    }else{
        return FALSE;

    }



}
