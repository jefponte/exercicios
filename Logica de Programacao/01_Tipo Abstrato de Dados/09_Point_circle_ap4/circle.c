#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include "point.h"
#include "circle.h"



int circleLoadVector(const char *filename, Circle *ptr, int dim){
    FILE *input;

	if((input = fopen(filename, "rb")) == NULL){
		return FALSE;
	}
	fread((Circle *)ptr, sizeof(Circle), dim, input);
	fclose(input);
	return TRUE;



}
void circleShowVector(Circle *vetorDeCirculos, int dimensaoDoVetor){
	int i;

	for(i = 0; i< dimensaoDoVetor; i++){
	    printf("\nCirculo %d: \n", i);
		showCircle(vetorDeCirculos + i);

	}
}

void showCircle(Circle *ptr){
    printf("Mostrando Circulo: \n");
    showPoint(&ptr->center);
	printf("\nRaio: \n%.2f\n", ptr->radius);

}
void mostraCirculosDoPrimeiroQuadrante(Circle *ptr, int dimensaoDoVetor){

	int i;
	for(i = 0; i< dimensaoDoVetor; i++){
        if((ptr+ i)->center.x > 0 && (ptr+ i)->center.y > 0)
        {
            printf("\nCirculo %d: \n", i);
            showCircle(ptr + i);


        }

	}


}
double retornaArea(Circle *ptr){
    double raizDeR;
    raizDeR = ptr->radius * ptr->radius;
    return M_PI*raizDeR;

}

void mostraSomaDasAreasDosElementos(Circle *ptr, int dimensaoDoVetor){

	int i;
	double soma = 0.0;

	for(i = 0; i< dimensaoDoVetor; i++){
        soma += retornaArea(ptr+i);

	}

    printf("Soma das areas : %f", soma);

}

