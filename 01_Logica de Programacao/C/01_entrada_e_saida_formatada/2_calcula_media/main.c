#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 * Aqui remos pegar o nome do aluno e a suas 5 notas,
 * ao final daremos o valor da media.
 *
 *
 */


int main() {
	float Nota1;
	float Nota2;
	float Nota3;
	float Nota4;
	float Nota5;
	float Media;

	printf("Esse programa vai calcular a média de um aluno a partir de 5 notas. \n\n");
	printf("Digite a nota 1:");
	scanf("%f", &Nota1);

	printf("Digite a nota 2:");
	scanf("%f", &Nota2);

	printf("Digite a nota 3:");
	scanf("%f", &Nota3);

	printf("Digite a nota 4:");
	scanf("%f", &Nota4);

	printf("Digite a nota 5:");
	scanf("%f", &Nota5);

	Media = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5)/5;
	printf("A Média Será %.2f", Media);

	return 0;
}
