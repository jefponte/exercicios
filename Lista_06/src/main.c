#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"

#include <pthread.h>
#include <sched.h>
#include <unistd.h>

int main()
{

    int hora = 3600;
    int i, aux;
    for(i = 0; i <= hora; i++){
    	//sleep(1);
    	printHora(i);
        if(i <= 900){
            //Chega gente de 20 em 20 segundos
        	//Não começou a distribuição.



        }else if(i > 900 && i <= 1500){
        	//Entra gente de 10 em 10 segundos.
        	//Ainda não começou a distribuição.

        }else if(i > 1500 && i <= 1800){
            printHora(i);
            //Entra gente de 5 em 5 segundos.
            //Não começou a distribuição.

        }else if(i > 1800 && i <= (1800+600)){
            //Inicia-se a entrega do lanche.
        	//Entra gente de 10 em 10 segundos na fila.
            printHora(i);


        }else if(i < (1800+600) && i <= (1800+1200)){
            //Entre 10 e 20 minutos.
        	//Entra gente de 20 em 20 segundos.
        }else if(i > (1800+1200) && i <= (1800+1800)){
        	//entra gente de 30 em 30 segundos.

        }
    }



    return 0;
}
