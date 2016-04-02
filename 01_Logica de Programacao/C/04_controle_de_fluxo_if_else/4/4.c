#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
	int numero;

	printf("Digite um número: \n");
	scanf("%d", &numero);

	if(numero == 0){
		printf("O número é nulo.");

	}
	else if (numero > 0) {
		printf("O número é positivo.");

	}else
	{
		printf("O número é negativo.");
	}


	return 0;

}
