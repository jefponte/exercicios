#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


/**
 * Função recebe um ponteiro para vetor de 10 elementos, do tipo double.
 * Descobre qual é o maior e divide cada elemento pelo maior.
 */
void calculaMaiorEFazDivisaoDeTodosPorEle(float *ponteiroParaFloat, int quantidadeDeElementos)
{

	int i;
	int posicaoDoMaior = 0;
	float maiorDeTodos;


	//primeiro vamos descobrir qual é o maior.
	for(i = 0; i< quantidadeDeElementos; i++){
		if(*(ponteiroParaFloat + i) > *(ponteiroParaFloat + posicaoDoMaior)){
			posicaoDoMaior = i;
		}

	}

	//pronto! Já calculei a posicao do maior.
	//agora iremos dividir cada um pelo maior.
	maiorDeTodos = *(ponteiroParaFloat+ posicaoDoMaior);

	for(i = 0; i< quantidadeDeElementos; i++){
		//printf("\nEu estou dividindo *ponteiro + %d(%f) pelo *(ponteiro + %d)(%f)\n", i,*(ponteiroParaFloat+i), posicaoDoMaior, *(ponteiroParaFloat+posicaoDoMaior));
		*(ponteiroParaFloat+i) = (*(ponteiroParaFloat+i)) / maiorDeTodos;
	}
}
void lerEImprimeVetorDeDezFloats(float *ponteiroParaFloat, int quantidadeDeElementos){
	int i;
	printf("\n-------------------------------------\n");
	for(i= 0; i < quantidadeDeElementos; i++){

		printf("%f \n", *(ponteiroParaFloat + i));
	}
	printf("\n-------------------------------------\n");

}

int main(int argc, char **argv) {
	float vetor[10];
	int i;



	//alimentar o vetor com valores
	for(i = 0; i< 10; i++){
		printf("digite o elemento %d:\n ", i+1);
		scanf("%f", &vetor[i]);
		//vetor[i] = 2.2;
		//vetor[i] = (double)i;

	}


	lerEImprimeVetorDeDezFloats(vetor, 10);
	calculaMaiorEFazDivisaoDeTodosPorEle(vetor, 10);
	lerEImprimeVetorDeDezFloats(vetor, 10);

	return 0;

}
