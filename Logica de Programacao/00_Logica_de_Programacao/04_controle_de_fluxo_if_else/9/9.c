#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero_a;
	int numero_b;
	printf("Digite um número: \n");
	scanf("%d", &numero_a);
	printf("Digite outro número: \n");
	scanf("%d", &numero_b);

	if (numero_a % numero_b == 0) {
		printf("A é Divisível Por B");
	} else {
		printf("A não é divisível por B");
	}
	return 0;

}
