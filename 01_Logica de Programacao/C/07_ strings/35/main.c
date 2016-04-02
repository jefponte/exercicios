#include <stdio.h>
#include <string.h>
/*
 * 35. Fazer um programa em "C" que recebe um string como
 * parâmetro e devolve o endereço do primeiro caracter branco encontrado.
 */



int main(int argc, char **argv) {

	char s[100];
	puts("Digite a frase.");
	gets(s);
	printf("O primeiro espaço em branco está em: %p", strchr(s, ' '));








	return 0;
}


