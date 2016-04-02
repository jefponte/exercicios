#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*
 * 41)  A série de Fibonacci é formada pela seqüência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até oN-ésimo termo.
 */

int main() {


	int i;
	int n;
	int numerofibanate;
	int numeroanterior;
	int numerodeantesdoanterior;


	printf("Digite o vlor de N");
	scanf("%d", &n);


	for (i = 0; i < n; i++){
		if(i == 0 )
		{
			numerofibanate = 1;
		}else if (i == 1) {
			numeroanterior = 1;
			numerofibanate = 1;
		}else{
			numerodeantesdoanterior = numeroanterior;
			numeroanterior = numerofibanate;
			numerofibanate = numerodeantesdoanterior + numeroanterior;

		}
		printf("%d, ", numerofibanate);



	}


	return 0;
}
