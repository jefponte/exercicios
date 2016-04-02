#include "numeroprimo.h"
#include <stdio.h>
#include <stdlib.h>

#define FALSE 0;
#define TRUE !FALSE;


int verificaSeEhPrimo(int numero){
    int i;
    if (numero == 0 || numero == 1) {
        return FALSE;
    }

    for(i = 2; i <= (int)numero/2; i++){
        if(numero%i == 0){
            return FALSE;
        }

    }

    return TRUE;


}

int retornaPrimoAnterior(int numero) {
    int i;
    for(i = numero-1; i > 0; i--) {
        if(verificaSeEhPrimo(i))
           return i;
    }
    return FALSE;

}

int retornaPrimoPosterior(int numero) {

    int result = FALSE;
    while(!result) {
        numero++;
        result = verificaSeEhPrimo(numero);
    }

    return numero;
}

