#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * Calcular o aumento de um funcionário sabendo que ele ganhará 40% de aumento.
 *
 */

int main() {
	float Salario;

	printf("Digite o salário atual:");
	scanf("%f", &Salario);
	printf("O Valor do aumento é de: %.2f", Salario*40/100);





	return 0;
}
