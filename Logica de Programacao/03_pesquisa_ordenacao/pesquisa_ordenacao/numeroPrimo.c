#include "numeroPrimo.h"





int verificaSeEhPrimo(int numero){
    int i;
    for(i = 2; i <= (int)numero/2; i++){
        if(numero%i == 0){
            return FALSE;
        }

    }
    return TRUE;


}
int retornaPrimoAnterior(int numero){
    int i;
    for(i = numero; i > 0; i--){
        if(verificaSeEhPrimo(i))
           return i;
    }
    return 0;

}
int retornaPrimoAntAnterior(int numero){

    return 0;
}
int retornaPrimoPosterior(int numero){
    return 0;
}
