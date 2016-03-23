/*
 * cliente.h
 *
 *  Created on: 22 de mar de 2016
 *      Author: jefponte
 */

#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct cliente{

    int horaEntrada;
    int tempoDeEspera;
    struct cliente *proximo;

}Cliente;

void printHora(int intTempo);
void clienteListar(Cliente* lista);
Cliente * inserirFinal(Cliente *lista, int horaEntrada);

#endif /* CLIENTE_H */
