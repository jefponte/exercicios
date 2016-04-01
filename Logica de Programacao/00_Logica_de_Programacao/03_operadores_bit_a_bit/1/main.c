#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 *
 1.   Escreva  um  programa  que  inverta  a  ordem  dos  bits
 em  um  valor  inteiro. O programa  deve  inserir  o  valor  do
 usuário  e  o  result ado  deve  imprimir  os  bits  em ordem  inversa.
 Imprima  o  valor  em  bit s  ant es  e  depois  de  os  bits  serem
 invert idos  para  conf irmar  que  os  bit s  f oram  corretament e
 invertidos.

 */

int main(int argc, char **argv) {

	unsigned  char valorinicial;
	unsigned  char decimal;

	int p0 = 0;
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;
	int p6 = 0;
	int p7 = 0;

	printf("Digite o valor inicial até 255 e sem sinal:\n ");
	scanf("%d", &valorinicial);




	decimal = valorinicial;



		printf("O valor digitado foi: %d", decimal);


			p7 = decimal % 2;

			decimal = decimal / 2;

			p6 = decimal % 2;

			decimal = decimal / 2;

			p5 = decimal % 2;

			decimal = decimal / 2;
			p4 = decimal % 2;

			decimal = decimal / 2;

			p3 = decimal % 2;

			decimal = decimal / 2;

			p2 = decimal % 2;

			decimal = decimal / 2;

			p1 = decimal % 2;

			decimal = decimal / 2;

			p0 = decimal % 2;

			printf("\n O número binário correspondente é:  %d%d%d%d%d%d%d%d ", p0, p1,p2, p3, p4, p5, p6, p7);


			decimal = ~valorinicial;
			printf("\n O seu inverso sem considerar sinal é: %d", decimal);

			p7 = decimal % 2;

			decimal = decimal / 2;

			p6 = decimal % 2;

			decimal = decimal / 2;

			p5 = decimal % 2;

			decimal = decimal / 2;
			p4 = decimal % 2;

			decimal = decimal / 2;

			p3 = decimal % 2;

			decimal = decimal / 2;

			p2 = decimal % 2;

			decimal = decimal / 2;

			p1 = decimal % 2;

			decimal = decimal / 2;

			p0 = decimal % 2;

			printf("\n O número binário correspondente é: %d%d%d%d%d%d%d%d ", p0, p1,p2, p3, p4, p5, p6, p7);

	return 0;

}
