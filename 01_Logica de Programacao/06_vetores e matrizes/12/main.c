#include <stdio.h>
#include <stdlib.h>

/*
 * 12)  Escreva um programa que receba dez números do usuário e armazene em um vetor o
 quadrado  de  cada  número.  Após  isso,  o  programa  deve  imprimir  todos  os valores
 armazenados.
 */

int main() {
	int i;
	int vetor[10];

	for (i = 0; i < 10; i++) {
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
		vetor[i] = vetor[i] * vetor[i];


	}



	for(i = 0; i< 10; i++){

		printf("Vetor[%d]: %d \n", i, vetor[i]);


	}

	return 0;

}
