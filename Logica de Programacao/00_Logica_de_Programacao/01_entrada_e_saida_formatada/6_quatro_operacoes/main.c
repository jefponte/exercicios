#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
	float A;
	float B;

	printf("Digite o Valor de A:");
	scanf("%f", &A);
	printf("Digite o Valor de B:");

	scanf("%f", &B);

	if(B){
		printf("A = %.2f e B = %.2f",  A, B);
		printf("\n 4 Operações\n\n\n A + B = %.2f \n\n A x B = %.2f \n\n A / B =  %.2f", A + B, A*B, A/B);
	}
	else
	{
		printf("A = %.2f e B = %.2f",  A, B);
		printf("\n 4 Operações\n\n\n A + B = %.2f \n\n A x B = %.2f \n\n Não podemos fazer a divisão já que B é Zero e não existe divisão de número por zero", A + B, A*B);
	}
	return 0;
}
