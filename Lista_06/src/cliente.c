/*
 * cliente.c
 *
 *  Created on: 22 de mar de 2016
 *      Author: jefponte
 */

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"


void printHora(int intTempo) {
	int hours, minutes;
	if (intTempo < 0) {
		intTempo = 0;
	}
	hours = intTempo / 3600;
	intTempo -= hours * 3600;
	minutes = intTempo / 60;
	intTempo -= minutes * 60;
	printf("%d:%d:%d\n", hours, minutes, intTempo);
}

Cliente * inserirFinal(Cliente *lista, int horaEntrada) {
	Cliente *p = lista;

	if (lista == NULL) {
		Cliente* novo = (Cliente*) malloc(sizeof(Cliente));
		novo->horaEntrada = horaEntrada;
		novo->proximo = lista;
		return novo;

	}
	for (p = lista; p->proximo != NULL; p = p->proximo) {
	}
	p->proximo = (Cliente*) malloc(sizeof(Cliente));
	p->proximo->proximo = NULL;
	p->proximo->horaEntrada = horaEntrada;
	return lista;

}

void clienteListar(Cliente* lista){
    Cliente *p;
    printf("\n\n-----------Listando-----------\n\n");
    for(p = lista; p != NULL; p = p->proximo){
        printf("Cliente que entrou em: ");
        printHora(p->horaEntrada);
        printf("\n");
    }
    printf("\n\n-------------------------------\n\n");

}


