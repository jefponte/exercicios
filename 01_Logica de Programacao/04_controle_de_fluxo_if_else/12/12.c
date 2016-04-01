#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double salario;
	double prestacao;
	printf("Digite Salário Bruto: \n");
	scanf("%lf", &salario);
	printf("Digite O valor da prestação: \n");
	scanf("%lf", &prestacao);

	if(prestacao > salario*0.3){
		printf("O empréstimo não pode ser feito.");

	}else{
		printf("O empréstimo pode ser feito.");
	}
/*
	if (numero_a % numero_b == 0) {
		printf("A é Divisível Por B");
	} else {
		printf("A não é divisível por B");
	}

	*/
	return 0;

}
