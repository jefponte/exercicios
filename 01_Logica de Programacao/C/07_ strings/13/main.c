#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 13. Escreva um programa em C para ler um caractere e logo após um número indeterminado de frases. Para cada frase informada imprimir o número de ocorrências do caractere na frase. O programa deve ser encerrado quando a frase digitada for a palavra "fim".

 */

int main(int argc, char **argv) {
	char caractere;
	char s[100];
	int numeroDeCaracteres;
	int i;
	int numeroDeOcorrencias;

	puts("Digite um caractere.");
	scanf("%c", &caractere);
	getchar();
	do{

		puts("Digite uma frase.");
		gets(s);

		numeroDeCaracteres = strlen(s);
		numeroDeOcorrencias = 0;
		for(i = 0; i< numeroDeCaracteres; i++)
		{
			if(s[i] == caractere)
			{
				numeroDeOcorrencias++;

			}

		}
		printf("Numero de ocorrências é: %d\n", numeroDeOcorrencias);


	}while(strcmp(s, "fim"));



	return 0;
}
