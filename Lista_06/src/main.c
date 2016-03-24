#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fila.h"



int main() {

	Fila *fila;
	fila = filaCria();
	printf("Mostrando\n");
	filaImprime(fila);
	filaInsere(fila, 10);
	printf("Mostrando\n");
	filaImprime(fila);
	filaInsere(fila, 20);
	printf("Mostrando\n");
	filaImprime(fila);
	filaInsere(fila, 30);
	printf("Mostrando\n");
	filaImprime(fila);
	filaInsere(fila, 40);
	printf("Mostrando\n");
	filaImprime(fila);
	filaInsere(fila, 50);
	printf("Mostrando\n");
	filaImprime(fila);
	filaInsere(fila, 60);
	printf("Mostrando\n");
	filaImprime(fila);

	int valor = filaRetira(fila);
	printf("Retirei o %d\n", valor);
	filaImprime(fila);

	return 0;
}
/*
int loop() {

	//Cliente* fila = NULL;
	//Cliente* atendidos = NULL;
	int hora = 3600;
	int i;

	for (i = 0; i <= hora; i++) {
		sleep(1);
		printf("Hora atual:");
		printHora(i);
		printf("\n");

		if (i <= 900) {
			//Chega gente de 20 em 20 segundos
			//Não começou a distribuição.
			if (!(i % 20)) {

				fila = inserirFinal(fila, i);
				printf("Na fila:\n");
				clienteListar(fila);

			}

		} else if (i > 900 && i <= 1500) {
			//Entra gente de 10 em 10 segundos.
			//Ainda não começou a distribuição.
			if (!(i % 10)) {
				fila = inserirFinal(fila, i);

			}

		} else if (i > 1500 && i <= 1800) {
			printHora(i);
			//Entra gente de 5 em 5 segundos.
			if (!(i % 5)) {
				fila = inserirFinal(fila, i);
				clienteListar(fila);

			}
			//Não começou a distribuição.

		} else if (i > 1800 && i <= 2400) {
			//Inicia-se a entrega do lanche.
			//Entra gente de 10 em 10 segundos na fila.
			if (!(i % 10)) {
				fila = inserirFinal(fila, i);
				clienteListar(fila);

			}

		} else if (i > (1800 + 600) && i <= (1800 + 1200)) {
			//Entre 10 e 20 minutos.
			//Entra gente de 20 em 20 segundos.

			if (!(i % 20)) {
				fila = inserirFinal(fila, i);
				clienteListar(fila);
			}
		} else if (i > (1800 + 1200) && i <= (1800 + 1800)) {
			//entra gente de 30 em 30 segundos.
			if (!(i % 30)) {
				fila = inserirFinal(fila, i);
				clienteListar(fila);
			}
		}

	}

	fila = inserirFinal(fila, 600);
	fila = inserirFinal(fila, 900);

	printf("Clientes na fila:\n");
	clienteListar(fila);
	printf("Clientes atendidos:\n");
	clienteListar(atendidos);
	return 0;

}

*/
