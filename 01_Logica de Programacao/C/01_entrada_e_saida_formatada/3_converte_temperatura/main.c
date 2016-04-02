#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 * Objetivo é converter farenheit para celsos
 *
 * Formula matematica é a seguinte:
 * c = ((f - 32)/9)* 5
 *
 *
 */

int main(){

	float TemperaturaEmCelsos;
	float TemperaturaEmFarenheit;

	printf("Digite a temperatura em Farenheit:");
	scanf("%f", &TemperaturaEmFarenheit);
	TemperaturaEmCelsos  = ((TemperaturaEmFarenheit - 32)/9)*5;

	printf("Temperatura em celsos é de %f", TemperaturaEmCelsos);
	return 0;



}
