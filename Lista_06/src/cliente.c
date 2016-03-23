/*
 * cliente.c
 *
 *  Created on: 22 de mar de 2016
 *      Author: jefponte
 */

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"

void printHora(int intTempo){
    int hours, minutes;
    if(intTempo < 0){
        intTempo = 0;
    }
    hours = intTempo/3600;
    intTempo -= hours * 3600;
    minutes =  intTempo / 60 ;
    intTempo -= minutes * 60;
    printf("%d:%d:%d\n", hours, minutes, intTempo);
}


