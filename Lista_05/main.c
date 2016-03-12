#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define TRUE !FALSE
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

No* inserir_inicio(No* lista, char conteudo){
	No* novo = (No*)malloc(sizeof(No));
	novo->operador = conteudo;
	novo->proximo = lista;
	return novo;
}


No* inserir_numero(No* lista, int conteudo){
	No* novo = (No*)malloc(sizeof(No));
	novo->operador = '_';
	novo->numero = conteudo;
	novo->proximo = lista;
	return novo;
}
void box_listar(No* lista){
	No *p;
	printf("\n\n-----------Listando-----------\n\n");
	for(p = lista; p != NULL; p = p->proximo){
		if(p->operador == '_'){
			printf("Conteudo: %d\n", p->numero);					
		}else{
			printf("Operador: %c\n", p->operador);
		}

	}
}
int main()
{	
	int i, flag;
	char palavra[100] = "12+34+40";
	char subPalavra[100];
	No*lista = NULL;
	
	flag = 0;
	for(i = 0; TRUE; i++){

		if(isdigit(palavra[i])){
			subPalavra[flag] = palavra[i];
			flag++;
		}
		else{
			if(flag){
				subPalavra[i] = '\0';
				lista =  inserir_numero(lista, atoi(subPalavra));
				subPalavra[0] = '\0';
				flag = 0;
			}
			if(palavra[i] != '\0'){
				lista = inserir_inicio(lista, palavra[i]);				
			}else{
				break;
			}
		}
	}
	box_listar(lista);
	return 0;
}
