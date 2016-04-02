#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

	char s[50];
	char chAtual;
	char chNovo;
	int i;
	int numeroDeCaracteres;
	int contador;

	puts("Digite uma string:");
	gets(s);
	puts("Digite o Caractere chAtual:");
	scanf("%c", &chAtual);
	puts("Digite o caractere chNovo:");
	getchar();
	scanf("%c", &chNovo);

	numeroDeCaracteres = strlen(s);
	contador = 0;
	for (i = 0; i < numeroDeCaracteres; i++) {

		if (s[i] == chAtual) {
			s[i] = chNovo;
			contador++;

		}

	}

	puts(s);
	printf("Tivemos %d substituições.", contador);
	return 0;
}
