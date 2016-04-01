#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Lista *l;
    int valor = 4;
    l = lst_cria();

    if(!lst_vazia(l)){
        lst_imprime(l);
    }else{

        printf("Lista Vazia\n");
    }



    l = lst_insere_na_calda(l, 1);


    if(!lst_vazia(l)){
        lst_imprime(l);
    }else{
        printf("Lista Vazia\n");
    }




    return 0;
}
