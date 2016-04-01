#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero;

	printf("Digite um número: \n");
	scanf("%d", &numero);

	if (numero % 3 == 0 && numero % 7 == 0)
	{
		printf("é Divisível Por 3 e por 7");
	} else
	{
		printf("não é divisível por 3 e por 7");
	}
	return 0;

}
