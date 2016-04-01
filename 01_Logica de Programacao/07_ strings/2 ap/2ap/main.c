#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
 * Criar um programa que carregue uma matriz 12x4 com valores das vendas de uma loja,
 * em que cada linha represente um mes do ano,
 * cada coluna, uma semana do mes.
 * Para fins de simplificação considere que cada mes possui somente 4 semanas
 * Calcule e imprima:
 *
 * - Total vendido em cada mes do ano;
 * - Total vendido em cada semana durante todo o ano;
 * - Total vendido no ano;
 *
 *
 */

int main() {

	int i;
	int j;
	float matriz[12][4];
	float semana[4];
	float mes[12];
	float totalDeVendasDoAno;

	totalDeVendasDoAno = 0;

	for(i = 0; i< 4; i++){
		semana[i] = 0;
		//printf("%f\n", semana[i]);
	}
	for(i = 0; i< 12; i++){
			mes[i] = 0;
			//printf("%f\n", semana[i]);
		}

	for(i = 0; i<12; i++){
		for(j = 0; j < 4 ;j++){

			matriz[i][j] = 10 + i + j;


		}
	}

	for(i = 0; i<12; i++){
		for(j = 0; j < 4 ;j++){

			//para mostrar o valor de cada matriz
			//printf("%f \n",matriz[i][j]);
			semana[j] += matriz[i][j];
			mes[i] += matriz[i][j];
			totalDeVendasDoAno += matriz[i][j];

		}
	}

	for(i = 0; i< 4; i++){

			printf("Total de vendas na semana %d durante o ano foi: %f\n", i+1,  semana[i]);
		}
	for(i = 0; i< 12; i++){

			printf("Total de vendas no mes %d durante o ano foi: %f\n", i+1,  mes[i]);
		}

	printf("Total de vendas do ano Foi: %f", totalDeVendasDoAno);


	return 0;

}
