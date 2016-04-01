#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {



	printf("Tabela Verdade do Operador Ou Exclusivo. \n");

	/*
	 * Tabela Ou exclusivo, só um dos dois é verdadeiro.
	 *
	 */
	printf("\n 1 XOR 1 -> %d", 1^1);
	printf("\n 0 XOR 1 -> %d", 0^1);
	printf("\n 1 XOR 0 -> %d", 1^0);
	printf("\n 0 XOR 0 -> %d \n\n", 0^0);



	return 0;

}
