/*Exercicio 0
Faça uma tad para matriz de uma linha.
Uma função para alocar, uma função para ler os valores do teclado, outra função para mostrar.
*/

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"



int main()
{
    Matriz m;

    lerDimensao(&m);

    if (alocaMemoria(&m)) {
        printf("Deu certo. \n");
    } else {
        exit(1);
    }

    lerElementos(&m);
    exibeElementos(&m);


    return 0;
}
