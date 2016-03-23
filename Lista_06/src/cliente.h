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
    int tempoEspera;
    struct cliente *proximo;
}Cliente;

void printHora(int intTempo);
Cliente *clienteCria(void);



#endif /* CLIENTE_H */
