#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * Valores para teste
 * Distancia == 1000 metros
 * Tempo == 60 minutos
 *
 * Velocidade == 1000 / 60
 * Velocidade == 1 Km/H
 * Ou
 * Velocidade == 0,27 m/s
 *
 *
 */
/* Objetivo é calcular a velocidade média.
 * Entrada de dados é a distancia e o tempo*/

int main() {

	float distancia;
	float tempo;
	float VelocidadeMedia;

	printf(
			"Este programa calcula a velocidade Média utilizando o valor da distância e do tempo.");
	printf("\n Digite a distância que vai percorrer em metros:");
	scanf("%f", &distancia);
	printf("\n Agora digite o valor inteiro do tempo em minutos:");


	scanf("%f", &tempo);
	tempo = tempo * 60;
	printf("O tempo é %f segundos, e a distancia é %.2f metros", tempo,
			distancia);

	if (tempo) {

		VelocidadeMedia = distancia / tempo;
		printf(
				"\n a velocidade média que você deverá manter para chegar no local de destino no tempo \n previsto será de %.2f Metros por segundo",
				VelocidadeMedia);

		distancia = distancia/1000;
		printf("\ndistancia em km é de %.2f", distancia);

		tempo = tempo/60;
		tempo = tempo/60;
		printf("\nTempo em Horas é de: %.2f", tempo);
		VelocidadeMedia = distancia/tempo;
		printf("\nVelocidade Media pode ser escrita também da seguinte forma: %.2f Km/hora", VelocidadeMedia);








	}

	else
	{
		printf("\n\nNão podemos realizar esse calculo. Desculpe!");

	}

	return 0;

}
