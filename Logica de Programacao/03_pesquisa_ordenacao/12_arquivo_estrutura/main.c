#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"


int main(int argc, char **argv) {
	int numeroDeBytes;
	int dimensaoDoVetor;
	Point *vetorDePontos;
	numeroDeBytes = identificaNumeroDeBytesDeArquivo("points01.bin");



/*






	dimensaoDoVetor = numeroDeBytes/sizeof(Point);

	vetorDePontos = (Point *)calloc(dimensaoDoVetor, sizeof(Point));
	if(vetorDePontos == NULL){
		exit(1);
	}
	printf("Sao %d pontos", dimensaoDoVetor);

	if(!loadVector("points01.bin", vetorDePontos, dimensaoDoVetor)){
		printf("AAAAAAA");
		exit(1);
	}

	showVector(vetorDePontos, dimensaoDoVetor);






	//printf("%d", dimensaoDoVetor);


*/


	return 0;
}
