#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {


	char s[100];
	char ch;
	int pos;


	puts("Digite uma palavra ou frase.");
	gets(s);

	puts("Digite o caractere CH:");
	scanf("%c", &ch);
	getchar();


	puts("Digite a posição da string que quer substituir pelo caractere.");
	scanf("%d", &pos);





	strcpy(&s[pos+1],&s[pos]);


	s[pos] = ch;

	puts("A nova String é: ");

	puts(s);




	return 0;
}
