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

void no_print(No*no){
	if(no->operador == '_'){
		printf("%d", no->numero);					
	}else{
		printf("%c", no->operador);
	}


}
void box_listar(No* lista){
	No *p;
	printf("\n\n-----------Listando-----------\n\n");
	for(p = lista; p != NULL; p = p->proximo){
		no_print(p);
	}
}

No* strEmpilhar(char *palavra){
	int i, flag;
	char subPalavra[100];
	No*lista = NULL;
	
	flag = 0;
	for(i = 0; TRUE; i++){

		if(isdigit(palavra[i])){
			subPalavra[flag] = palavra[i];
			subPalavra[flag+1] = '\0';
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
	return lista;

}
No* excluir_primeiro(No*lista){
    No*excluido;
    excluido = lista;
    lista = lista->proximo;
    free(excluido);
    return lista;
}
int opera(int a, int b, char operador){
	switch(operador){
		case '+':
			printf("\n%d+%d=%d\n", b, a, a+b);
			return  a+b;				
		break;
		case '-':
			printf("\n%d-%d=%d\n", b, a, b-a);
			return b-a;
		break;
		case '/':
			printf("\n%d/%d=%d\n", b, a, b/a);
			return b/a;
		break;
		case '*':
			printf("\n%d*%d=%d\n",b, a, b*a);
			return a*b;
		break;
		default:
			return  a+b;
		break;
	}

}
No* resolvePilha(No* lista){
	No *p;
	No *anterior;
	int resultado;
	anterior = lista;

	for(p = lista; p->proximo != NULL; p = p->proximo){
		if(p->proximo->proximo != NULL)
		{
			p->proximo->proximo->numero = opera(p->numero, p->proximo->proximo->numero, p->proximo->operador);
			p = excluir_primeiro(p);
			p = excluir_primeiro(p);
			box_listar(p);

		}
		p = resolvePilha(p);
		break;			
	}
	return p;
	
	
}
int main()
{
	No*lista = NULL;
	char palavra[100];
	
	lista = strEmpilhar("4*1-10+4*4");
	
	//printf("Digite a equação:\n");
	//scanf("%s", palavra);
	//lista = strEmpilhar(palavra);
	box_listar(lista);
	lista = resolvePilha(lista);
	box_listar(lista);
	return 0;
}
