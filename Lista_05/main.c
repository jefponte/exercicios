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
No* inserirInicio(No* lista, char conteudo);
No* inserirNumero(No* lista, int conteudo);
void noPrint(No*no);
void boxListar(No* lista);
No* strEmpilhar(char *palavra);
No* excluirPrimeiro(No*lista);
int opera(int a, int b, char operador);
No* resolveParenteses(No* lista);
No* resolvePilha(No* lista);
void mostraInvertido(No* lista);
char* itoa(int i, char b[]);

int main()
{
	No*lista = NULL;
	char palavra[100];

	lista = strEmpilhar("4*1-10+4*4");

	//printf("Digite a equação:\n");
	//scanf("%s", palavra);
	//lista = strEmpilhar(palavra);
	mostraInvertido(lista);
	lista = resolvePilha(lista);
	boxListar(lista);

	return 0;
}



No* inserirInicio(No* lista, char conteudo){
	No* novo = (No*)malloc(sizeof(No));
	novo->operador = conteudo;
	novo->proximo = lista;
	return novo;
}


No* inserirNumero(No* lista, int conteudo){
	No* novo = (No*)malloc(sizeof(No));
	novo->operador = '_';
	novo->numero = conteudo;
	novo->proximo = lista;
	return novo;
}

void noPrint(No*no){

	if(no->operador == '_'){
		printf("%d", no->numero);
	}else{
		printf("%c", no->operador);
	}


}
void boxListar(No* lista){
	No *p;
	printf("\n\n-----------Listando-----------\n\n");
	for(p = lista; p != NULL; p = p->proximo){
		noPrint(p);
	}
	printf("\n");
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
				lista =  inserirNumero(lista, atoi(subPalavra));
				subPalavra[0] = '\0';
				flag = 0;
			}
			if(palavra[i] != '\0'){
				lista = inserirInicio(lista, palavra[i]);
			}else{
				break;
			}
		}
	}
	return lista;

}

No* excluirPrimeiro(No*lista){
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

No* resolveParenteses(No* lista){
	No *p;
	No *anterior;
	int resultado;
	anterior = lista;

	for(p = lista; p->proximo->operador != '('; p = p->proximo){
		if(p->operador == ')'){
			p = excluirPrimeiro(lista);
			p = resolveParenteses(p);
		}

		if(p->proximo->proximo != NULL)
		{
			p->proximo->proximo->numero = opera(p->numero, p->proximo->proximo->numero, p->proximo->operador);
			p = excluirPrimeiro(p);
			p = excluirPrimeiro(p);
			

		}
		p = resolvePilha(p);
		break;
	}
	anterior = p->proximo;
	p->proximo = p->proximo->proximo;
	free(anterior);
	
	return p;


}



No* resolvePilha(No* lista){
	No *p;
	No *anterior;
	int resultado;
	anterior = lista;

	for(p = lista; p->proximo != NULL; p = p->proximo){
		if(p->operador == ')'){
			p = excluirPrimeiro(lista);
			p = resolveParenteses(p);
		}
		if(p->proximo->proximo != NULL)
		{
			p->proximo->proximo->numero = opera(p->numero, p->proximo->proximo->numero, p->proximo->operador);
			p = excluirPrimeiro(p);
			p = excluirPrimeiro(p);


		}
		p = resolvePilha(p);
		break;
	}
	
	return p;


}
char* itoa(int i, char b[]){
    char const digit[] = "0123456789";
    char* p = b;
    if(i<0){
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    do{ //Move to where representation ends
        ++p;
        shifter = shifter/10;
    }while(shifter);
    *p = '\0';
    do{ //Move back, inserting digits as u go
        *--p = digit[i%10];
        i = i/10;
    }while(i);
    return b;
}

void mostraInvertido(No* lista){
	No *p;
	char operador[2];
	operador[1] = '\0';
	char palavra[100];
	char final[100];

	palavra[0] = '\0';
	printf("\n\n-----------Listando-----------\n\n");
	for(p = lista; p != NULL; p = p->proximo){
		if(p->operador == '_'){
			strcat(final, itoa (p->numero,palavra));
			
		}else{

		    operador[0] = p->operador;
		    strcat(final, operador);
			
		}
	}
	//printf("%s", final);
	p = strEmpilhar(final);
	final[0] ='=';
	final[1] = '\0';

	for(; p != NULL; p = p->proximo){
		if(p->operador == '_'){
			strcat(final, itoa (p->numero,palavra));
			
		}else{

		    operador[0] = p->operador;
		    strcat(final, operador);
			
		}
	}
	printf("\n%s\n", final);

}
