#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 7.  Elaborar um algoritmo que calcule o salário de um professor onde o usuário deverá entrar com o número de
	aulas dadas, o valor de cada aula e a quantidade de dias trabalhados.*/

int main()
{
	float Salario;
	int QuantidadeDeAulasDadas;
	float ValorDeCadaAula;
	int QuantidadeDeDiasTrabalhados;

	printf("Esse programa calcula o salario de um professor em um mês qualquer. ");
	printf("\n\nDigite a quandidade de Aulas dadas pelo professor nesse mês: ");
	scanf("%d", &QuantidadeDeAulasDadas);
	printf("\n\nDigite o valor de cada aula: ");
	scanf("%f", &ValorDeCadaAula);
	printf("\n\nDigite a quantidade de dias trabalhados nesse mês:");
	scanf("%d", &QuantidadeDeDiasTrabalhados);

	Salario = (float)QuantidadeDeAulasDadas*ValorDeCadaAula;

	printf("\n O salário do professor será de %.2f. ", Salario);
	printf("\n O professor trabalhou %d dias", QuantidadeDeDiasTrabalhados);




	return 0;
}
