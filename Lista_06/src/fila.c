/*
 * cliente.c
 *
 *  Created on: 22 de mar de 2016
 *      Author: jefponte
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


void printHora(int intTempo) {
	int hours, minutes;
	if (intTempo < 0) {
		intTempo = 0;
	}
	hours = intTempo / 3600;
	intTempo -= hours * 3600;
	minutes = intTempo / 60;
	intTempo -= minutes * 60;
	printf("%d:%d:%d", hours, minutes, intTempo);
}



typedef struct fila Fila;

Fila* filaCria() {
	Fila *fila = (Fila*) malloc(sizeof(Fila));
	fila->inicio = fila->fim = NULL;
	return fila;
}

void filaInsere(Fila *fila, int conteudo) {
	Lista*novo = (Lista*) malloc(sizeof(Lista));
	novo->info = conteudo;
	novo->proximo = NULL;
	if (fila->fim != NULL) {
		fila->fim->proximo = novo;
	} else {
		fila->inicio = novo;
	}
	fila->fim = novo;
}

int filaVazia(Fila *fila) {
	return (fila->inicio == NULL);
}
float filaRetira(Fila *fila) {
	Lista *t;
	int conteudo;
	if (filaVazia(fila)) {
		return 0.0;
	}
	t = fila->inicio;
	conteudo = t->info;
	fila->inicio = t->proximo;
	if (fila->inicio == NULL) {
		fila->fim = NULL;

	}
	free(t);
	return conteudo;
}

void filaImprime(Fila *fila) {
	Lista *q;
	printf("Fila:\n");
	for (q = fila->inicio; q != NULL; q = q->proximo) {
		mostrarCliente(q);
	}

}
void mostrarCliente(Lista *lista){
	printHora(lista->info);
	printf("\n");
}

