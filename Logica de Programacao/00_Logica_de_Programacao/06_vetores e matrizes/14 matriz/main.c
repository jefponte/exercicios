#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	int j;
	int linhas = 4;
	int colunas = 5;
	int matriz[linhas][colunas];
	int somadevalores = 0;


	/*
 * 14) Ler uma matriz 4x5 de inteiros, calcular e imprimir a
 * soma de todos os seus
elementos.
 */

	for(i = 0; i < linhas; i++){
		for(j = 0; j< colunas; j++)
		{

			printf("Digite o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);


		}

	}


	//soma dos elementos
	for(i = 0; i< linhas; i++){
		for(j= 0; j< colunas; j++){

			somadevalores += matriz[i][j];

		}
	}

	printf("A soma dos valores da matriz é:%d ", somadevalores);


	return 0;

}
