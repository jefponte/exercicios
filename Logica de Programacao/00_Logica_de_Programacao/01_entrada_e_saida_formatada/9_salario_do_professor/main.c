#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*
 * 9.  Elaborar um algoritmo que calcule o
 * salário de um professor onde o usuário
 * deverá entrar com o número de aulas dadas,
 * o valor da hora aula, a quantidade de
 * dias trabalhados e o percentual de
 * desconto do INSS que é aplicado sobre o salário.
 */




int main() {

	int NumeroDeAulasDadas;
	float ValorDaAula;
	int DiasTrabalhados;
	float PercentualDeDesconto;
	float Resultado;

	printf("Digite o numero de Aulas dadas pelo professor: ");
	scanf("%d", &NumeroDeAulasDadas);

	printf("Digite o valor de cada aula: ");
	scanf("%f", &ValorDaAula);

	printf("Digite a quantidade de Dias Trabalhados: ");
	scanf("%d", &DiasTrabalhados);

	printf("Digite a porcentagem a ser descontada:");
	scanf("%f", &PercentualDeDesconto);


	Resultado = ((float)NumeroDeAulasDadas*ValorDaAula)*(PercentualDeDesconto/100);

	printf("O professor trabalhou %d dias,\n Valor seu salário descontado foi de %f", DiasTrabalhados, Resultado);



	return 0;

}
