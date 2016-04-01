#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero_a;
	int numero_b;
	int soma;

	printf("Digite o valor de A");
	scanf("%d", &numero_a);

	printf("Digite o valor de B");
	scanf("%d", &numero_b);


	soma = numero_a + numero_b;

	if(soma > 10){
	printf("O valor da Soma é: %c", soma);

	}


	return 0;

}
