#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero_a;
	int numero_b;
	printf("Digite um número A: \n");
	scanf("%d", &numero_a);
	printf("Digite outro número B: \n");
	scanf("%d", &numero_b);

	if (numero_a > numero_b) {
		printf("A é maior do que B");
	} else if (numero_a < numero_b) {

		printf("A é Menor que B");
	}else{
		printf("A é Igual a B");
	}
	return 0;

}
