#include <stdio.h>
#include <stdlib.h>
#include "juros.h"

float calcJurosCompostos(float capital, float juros, int meses) {

    capital += capital*juros/100;
    meses--;

    if(meses>0) {
        calcJurosCompostos(capital, juros, meses);
    }
    return capital;
}

float calcJurosSimples(float capital, float juros, int meses, float montante) {

    montante += capital*juros/100;
    meses--;

    if(meses>0) {
        calcJurosCompostos(capital, juros, meses);
    }
    return montante + capital;
}
