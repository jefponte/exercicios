#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int a, b, c, d;

	printf("Digite os valor de A: ");
	scanf("%d", &a);

	printf("Digite os valor de B: ");
	scanf("%d", &b);

	printf("Digite os valor de C: ");
	scanf("%d", &c);


	printf("\nOs valores atuais são: A = %d, B = %d e C = %d", a, b, c);

	printf("\nFazendo as trocas ficaremos da seguinte forma:");
	d = a;
	a = b;
	b = c;
	c = d;




	printf("\nOs valores atuais são: A = %d, B = %d e C = %d", a, b, c);






	return 0;

}
