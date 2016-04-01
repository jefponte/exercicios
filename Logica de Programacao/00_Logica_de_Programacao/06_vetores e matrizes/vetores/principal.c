#include <stdio.h>
#include <stdlib.h>

#define DIMENSION1 2
#define DIMENSION2 2

int main() {
	int vetor[11];
	int i;
	for (i = 0; i < 51; i++) {

		vetor[i] = i;


	}

	for (i = 0; i < 51; i++) {

		printf("%d \n", vetor[i]);

	}

	return 0;
}
