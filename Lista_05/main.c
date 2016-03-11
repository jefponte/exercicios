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

No* inserir_inicio(No* lista, char conteudo){
	No* novo = (No*)malloc(sizeof(Box));
	novo->operador = conteudo;
	novo->proximo = lista;
	return novo;
}


No* inserir_numero(No* lista, int conteudo){
	No* novo = (No*)malloc(sizeof(Box));
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
	char palavra[100];
	char car;
	char subPalavra[100];
	No *lista = NULL;
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
		
		lista =  inserir_numero(lsita, atoi(subPalavra));
		lista = inserir_inicio(lista, car);
	}
	box_listar(lista);
	

	return 0;
}
