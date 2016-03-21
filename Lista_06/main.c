#include <stdio.h>
#include <stdlib.h>

void printHora(int intTempo){
    char strHoras[100];
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

typedef struct cliente{

    int tempoEsperado;
    int atendido;
    Cliente *proximo;

}Cliente;

int main()
{

    int hora = 3600;
    int i, aux;
    for(i = 0; i <= hora; i++){

        if(i <= 900){
            //printf("Chega gente de 20 em 20 segundos");

        }else if(i > 900 && i <= 1500){


        }else if(i > 1500 && i <= 1800){
            printHora(i);
        }else if(i > 1800 && i <= (1800+600)){
            //Entre o inicio e 10 minutos depois.
            printHora(i);


        }else if(i < (1800+600) && i <= (1800+1200)){
            //Entre 10 e 20 minutos.
        }else if(i > (1800+1200) && i <= (1800+1800)){

        }
    }



    return 0;
}
