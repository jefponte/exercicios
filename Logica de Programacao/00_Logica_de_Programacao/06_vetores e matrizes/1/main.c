#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int vetor[51];


	for(i = 0; i< 51; i++){
		vetor[i] = i;

	}
	for(i = 0; i<51; i++){
		printf("O Valor do vetor[%d] é: %d \n", i, vetor[i]);

	}


	return 0;

}
