#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
	int numero;

	printf("Digite um número: \n");
	scanf("%d", &numero);

	if(numero%2 == 0){
		printf("O número é par");

	}else{
		printf("O Número é Impar");
	}


	return 0;

}
