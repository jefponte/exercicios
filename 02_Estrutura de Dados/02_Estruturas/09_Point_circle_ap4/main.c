#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "circle.h"


int main(int argc, char **argv) {
/*
    Circle circulo;
    Point *ptr;
    ptr = cria(12.2, 1.2);
    circulo.center = *ptr;
    circulo.radius = 7.2;
    showCircle(&circulo);
*/

    int numeroDeBytes;
	int dimensaoDoVetor;
	Circle *vetorDeCirculos;


	numeroDeBytes = identificaNumeroDeBytesDeArquivo("data.bin");
	printf("O vetor do arquivo possui %d bytes ", numeroDeBytes);
	dimensaoDoVetor = numeroDeBytes/sizeof(Circle);
	printf("\nLogo temos %d Circulos \n", dimensaoDoVetor);


    //Faço uma alocação dinâmica para a quantidade de vetorres que quero.

	vetorDeCirculos = (Circle *)calloc(dimensaoDoVetor, sizeof(Circle));
	if(vetorDeCirculos == NULL){
		exit(1);
	}


	if(!circleLoadVector("data.bin", vetorDeCirculos, dimensaoDoVetor)){
		printf("AAAAAAA que pena. ");
		exit(1);
	}

	circleShowVector(vetorDeCirculos, dimensaoDoVetor);
    printf("Mostrei todos, agora quero mostrar os do primeiro quadrante. /n");

    mostraCirculosDoPrimeiroQuadrante(vetorDeCirculos, dimensaoDoVetor);
    mostraSomaDasAreasDosElementos(vetorDeCirculos, dimensaoDoVetor);

/*
**Terceiro teste
** O ponto mais distante da origem.
*/

/*
    int numeroDeBytes;
	int dimensaoDoVetor;
	Point *vetorDePontos;
	Point *maisDistante;


	numeroDeBytes = identificaNumeroDeBytesDeArquivo("points01.bin");
	printf("O vetor do arquivo possui %d bytes /n/n/n", numeroDeBytes);
	dimensaoDoVetor = numeroDeBytes/sizeof(Point);
	printf("\nLogo a dimensão é de: %d pontos \n", dimensaoDoVetor);


    //Faço uma alocação dinâmica para a quantidade de vetorres que quero.

	vetorDePontos = (Point *)calloc(dimensaoDoVetor, sizeof(Point));
	if(vetorDePontos == NULL){
		exit(1);
	}


	if(!loadVector("points01.bin", vetorDePontos, dimensaoDoVetor)){
		printf("AAAAAAA que pena. ");
		exit(1);
	}


    maisDistante = retornaEnderecoDoMaisDistanteDaOrigem(vetorDePontos, dimensaoDoVetor);
    printf("O mais distante da origem é o seguinte ponto: ");
    showPoint(maisDistante);
    */


	return 0;
}
