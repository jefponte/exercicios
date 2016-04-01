#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*

5.   Escreva  um  programa  que  calcule  o  produt o  ent re  um  valor
dado  x  por  2
elevado  a  um  valor  dado  n.
Utilize  operadores  binarios.

A fazer.


 */


int main() {

	int x;
	int n;
	double resultado;



	printf("\nDigite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de N: ");
	scanf("%d", &n);

	printf("\n O Valor de x foi %d", x);
	printf("\n Duas vezes x é %d", x*2);



	x = x*2;




	resultado = pow(x, n);





	printf("\n Elevando o valor a N temos:  %lf", resultado);



}
