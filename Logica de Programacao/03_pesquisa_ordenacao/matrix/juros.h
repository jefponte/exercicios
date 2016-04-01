#ifndef JUROS_H
#define JUROS_H

#define FALSE O
#define TRUE !FALSE


float calcJurosCompostos(float capital, float juros, int meses);
float calcJurosSimples(float capital, float juros, int meses, float montante);

#endif
