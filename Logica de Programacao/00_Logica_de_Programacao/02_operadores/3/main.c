#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int decimal;
	int p0 = 0;
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;
	int p6 = 0;
	int p7 = 0;


	printf("Digite um número na base decimal de até 255 para ser convertido para um binário de até 8 dígitos: ");

	scanf("%d", &decimal);
	printf("O Número digitado foi %d \n", decimal);


	p7 = decimal%2;

	decimal = decimal/2;

	p6 = decimal%2;

	decimal = decimal/2;

	p5 = decimal%2;

	decimal = decimal/2;
	p4 = decimal%2;

	decimal = decimal/2;

	p3 = decimal%2;

	decimal = decimal/2;

	p2 = decimal%2;

	decimal = decimal/2;

	p1 = decimal%2;

	decimal = decimal/2;

	p0 = decimal%2;



	printf("O número binário correspondente é: \n \n %d%d%d%d%d%d%d%d ",p0, p1, p2, p3, p4, p5, p6, p7);







	return 0;
}
