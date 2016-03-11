#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUMERO 1
#define OPERADOR 2

typedef struct no{
    int tipo;
    int numero;
    char operador;
    struct no *proximo;
}No;

void imprimir(No *no){

    if(no->tipo == NUMERO){
        printf("%d", no->numero);
    }
    else if(no->tipo == OPERADOR){
        printf("%c", no->operador);

    }

}

int main()
{
    char palavra[100];
    char subPalavra[100];
    int i;
    printf("Digite a expressao: ");
    gets(palavra);
    printf("%s", palavra);

    for(i = 0; palavra[i] != '\0'; i++){

        if(!isdigit(palavra[i])){
            //Aqui é um operador.

        }
        printf("\n%c\n", palavra[i]);


    }

    return 0;
}
