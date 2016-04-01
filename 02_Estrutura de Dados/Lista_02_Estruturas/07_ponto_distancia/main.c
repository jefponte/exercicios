#include <stdio.h>
#include <stdlib.h>
#include "point.h"


int main(int argc, char **argv) {

/*
**Primeiro Teste
** Alocando dinamicamente e mostrando as distancias.
**Liberando memória depois
*/
/*
    Point *a;
    Point *b;
    a = cria(3.0, 0.0);
    b = cria(0.0, 0.0);;

    double distancia;

    printf("\nPonto A: \n");
    showPoint(a);
    printf("\nPonto B: \n");
    showPoint(b);
    distancia = calculaDistanciaEntrePontos(a, b);
    printf("\n\n\nDistância entre os pontos é de: %.2f\n\n\n", distancia);
    free(a);
    free(b);
*/


/*
**Segundo teste.
**Puxando todos os pontos do arquivo para a memória e mostrando todos.
*/


    int numeroDeBytes;
	int dimensaoDoVetor;
	Point *vetorDePontos;


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

	showVector(vetorDePontos, dimensaoDoVetor);




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
