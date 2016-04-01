#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
	double numero;

	printf("Digite um número: \n");
	scanf("%lf", &numero);
	//printf("%lf", numero);


	if(numero == 0){
		printf("A raiz do número é: 0\n\n");

	}
	else if (numero > 0) {


		numero = sqrt(numero);
		printf("A raiz do número é: %lf\n\n", numero);

	}else
	{
		numero = pow(numero, 2);
		printf("O número é negativo. Mostraremos seu quadrado: %lf\n\n", numero);
	}


	return 0;

}
