#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 13. Escreva um programa em C para ler um caractere e logo após um número indeterminado de frases. Para cada frase informada imprimir o número de ocorrências do caractere na frase. O programa deve ser encerrado quando a frase digitada for a palavra "fim".

 */

int main() {

	int i;
	char s[100];

	char p[100];

	gets(s);
	printf("%c", s[2]);


	i = s;

	strcpy(p, s);
	printf("\n %s", p);


	printf("%X", i);
	printf("\n%X", &s[1]);


	return 0;
}
