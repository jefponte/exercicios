/*
 * cliente.h
 *
 *  Created on: 22 de mar de 2016
 *      Author: jefponte
 */

#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct cliente{

    int tempoEsperado;
    int atendido;
    struct cliente *proximo;

}Cliente;

void printHora(int intTempo);



#endif /* CLIENTE_H */
