#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 * Objetivo é converter Celsos para farenheit
 *
 * Formula matematica é a seguinte:
 * f = ((c/5)*9) + 32;
 *
 *
 */

int main(){

	float TemperaturaEmCelsos;
	float TemperaturaEmFarenheit;

	printf("Digite a temperatura em graus Celsos:");
	scanf("%f", &TemperaturaEmCelsos);

	TemperaturaEmFarenheit = ((TemperaturaEmCelsos/5)*9) + 32;

	printf("Temperatura é de %.2f Graus Farenheit", TemperaturaEmFarenheit);
	return 0;



}
