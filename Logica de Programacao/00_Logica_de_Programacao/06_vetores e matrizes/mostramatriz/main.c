#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int j;

	int numeroDeColunas = 30;
	int numeroDelinhas = 5;

	int matriz[numeroDelinhas][numeroDeColunas];

	for (i = 0; i < numeroDelinhas; i++) {
		for (j = 0; j < numeroDeColunas; j++) {
			matriz[i][j] = j;
		}
	}

	for (i = 0; i < numeroDelinhas; i++)
	{
		for (j = 0; j < numeroDeColunas; j++)
		{

			printf("%d - ", matriz[i][j]);

		}
		printf("\n");

	}

	return 0;

}
