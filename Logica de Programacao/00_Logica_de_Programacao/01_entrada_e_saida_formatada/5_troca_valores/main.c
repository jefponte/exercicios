#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*
 * O usuário atribuirá dois valores a duas variáveis.
 * Essas variáveis vão receber seus valores, mas o programa
 * fará com que seus valores sejam trocados e apresentados na tela.
 *
 */
int main()
{

	int A;
	int B;
	int C;

	printf("Digite o valor de A: ");
	scanf("%d", &A);

	printf("Digite o valor de B");
	scanf("%d", &B);

	printf("Atualmente o valor de A é %d e o valor de B é %d", A, B);
	printf("\n\n Começaremos a fazer a troca agora...");

	C = A;
	A = B;
	B = C;

	printf("\n\n Atualmente o valor de A é %d e o valor de B é %d", A, B);

	return 0;

}
