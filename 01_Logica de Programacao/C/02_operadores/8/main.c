#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*

8.   Escreva  um  programa  que  leia  um  compriment o  em  cent ímet ros  e
imprima  quantos metros,   decímet ros  e  cent ímet ros  há  nest e
comprimento.


 */

int main() {
	int valorTotalEmCentimetros;
	int metros;
	int centimetros;
	int decimetros;

	printf("Digite o tamanho em centímetros:  ");
	scanf("%d", &valorTotalEmCentimetros);

	metros = valorTotalEmCentimetros/100;
	centimetros = valorTotalEmCentimetros%100;

	decimetros = centimetros/10;
	centimetros = centimetros%10;




	printf("O valor é de: %d metros, %d decimetros e %d centímetros", metros, decimetros, centimetros);




	return 0;
}
