#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int j;
	int e;
	int numeroDeDimensoes = 3;
	int numeroDeColunas = 5;
	int numeroDelinhas = 5;
	int matriz[numeroDeDimensoes][numeroDelinhas][numeroDeColunas];

	for(e = 0; e < numeroDeDimensoes; e++){
		for (i = 0; i < numeroDelinhas; i++) {
			for (j = 0; j < numeroDeColunas; j++) {
				matriz[e][i][j] = e;
			}
		}
	}
	for (e = 0; e < numeroDeDimensoes; e++){
		printf("Dimensao %d \n\n", e);
		for (i = 0; i < numeroDelinhas; i++)
		{
			for (j = 0; j < numeroDeColunas; j++)
			{

				printf("%d - ", matriz[e][i][j]);

			}
			printf("\n");

		}
		printf("\n\n\n\n");
	}

	return 0;

}
