#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
6.   Escreva  um  programa  que  leia  um  ângulo  em  segundos  e  imprima
quant os  graus,  minut os  e  segundos  há  nest e  ângulo.


360  equivale a 12 horas, ou seja
12 * 60 *60
logo
360 graus são 43200 segundos
O que faremos é uma regra de três simples.
1 grau ---- x segundos

360 x = 43200 graus
x = 43200/360

x = 120 segundos
1 grau é 120 segundos.


valor pra teste
6 horas é 180 graus vale 21600 segundos


*/

int main() {
	float valorEmSegundos;
	float valorEmGraus;

	printf("Digite o valor em Segundos: ");
	scanf("%f", &valorEmSegundos);



	valorEmGraus = valorEmSegundos/120.0;

	printf("O valor em graus é de: %0.0f graus.", valorEmGraus);



	return 0;

}
