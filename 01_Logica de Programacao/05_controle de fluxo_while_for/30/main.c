#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*
 * 30)  Escreva um programa que leia 20 números e imprima a soma dos positivos e o total de
números negativos.
 */

int main() {

	int i;
	int vetor[20];
	int totaldenegativos = 0;
	int somadospositivos = 0;

	for(i = 0; i < 20; i++){
		printf("Digite o valor do vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}

	for (i = 0; i<20; i++){
		if(vetor[i] < 0){
			totaldenegativos++;

		}
		else
		{
			somadospositivos += vetor[i];

		}

	}
	printf("Total de Numeros Negativos: %d \n", totaldenegativos);
	printf("Soma dos Positivos: %d \n  ", somadospositivos);





	return 0;

}

