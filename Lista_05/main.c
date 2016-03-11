#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Cada elemento pode ser um
Numero ou um operador.
Caso o caractere seja '_'
    o valor significa
    um Numero
Senão
    O valor significa um Operador
    no char operador.
*/

typedef struct no{
    int numero;
    char operador;
    struct no *proximo;
}No;


int main()
{
    char palavra[100];
    char car;
    char subPalavra[100];
    int i;
    printf("Digite a expressao: ");
    scanf("%s", palavra);
    printf("%s", palavra);

    for(i = 0; palavra[i] != '\0'; i++){
        subPalavra[i] = palavra[i];
        if(!isdigit(palavra[i])){
 
		car = palavra[i];
		subPalavra[i] = '\0';
		strcpy(&palavra[0], &palavra[i+1]);
		i = 0;
        }else
            continue;

        printf("\nPalavra: %s\n", palavra);
        printf("\ncaracter %c", car);
        printf("\n\nSubpalavra: %s", subPalavra);
	


    }

    return 0;
}
