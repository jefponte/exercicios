#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char **argv) {
	char s[50];
	char s2[50];
	int i;
	int numedoDeCaracteres;

	puts("Digite uma palavra: ");
	gets(s);
	numedoDeCaracteres = strlen(s);
	for(i = 0; i < numedoDeCaracteres; i++){
		s2[i] = s[numedoDeCaracteres - 1 - i];



	}

	s2[i+1] = '\0';

	puts(s2);





	//inverter caracteres de string;


	return 0;
}
