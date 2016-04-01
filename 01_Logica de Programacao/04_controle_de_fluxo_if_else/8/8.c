#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero;

	printf("Digite um número: \n");
	scanf("%d", &numero);

	if (numero % 5 == 0) {
		printf("é Divisível Por 5");
	} else {
		printf("não é divisível por 5");
	}
	return 0;

}
