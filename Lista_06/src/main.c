#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fila.h"

void atender() {

}

int main() {

	Fila *fila;
	Fila *atendidos;
	int valor;
	int hora = 3600;
	int i, clientesAtendidos, numeroDeServidores, j;
	float tempoMedioDeEspera;
	fila = filaCria();
	atendidos = filaCria();
	tempoMedioDeEspera = 0;
	clientesAtendidos = 0;
	printf("Digite o número de servidores: \n");
	scanf("%d", &numeroDeServidores);

	for (i = 0; i < hora; i++) {
		if (i <= 900) {
			//Chega gente de 20 em 20 segundos
			//Não começou a distribuição.
			if (!(i % 20)) {
				filaInsere(fila, i);
			}
		} else if (i > 900 && i <= 1500) {
			//Entra gente de 10 em 10 segundos.
			//Ainda não começou a distribuição.
			if (!(i % 10)) {
				filaInsere(fila, i);

			}

		} else if (i > 1500 && i <= 1800) {
			//Entra gente de 5 em 5 segundos.
			if (!(i % 5)) {
				filaInsere(fila, i);

			}
			//Não começou a distribuição.

		} else if (i > 1800 && i <= 2400) {


			//Entra gente de 10 em 10 segundos na fila.
			if (!(i % 10)) {
				filaInsere(fila, i);
			}
			//Inicia-se a entrega do lanche. de 4 em 4 segundos cada servidor
			if (!(i % 4)) {

				for (j = 0; j < numeroDeServidores; j++) {
					if (!filaVazia(fila)) {
						valor = filaRetira(fila);
						valor = i - valor;
						tempoMedioDeEspera += valor;
						clientesAtendidos++;
						filaInsere(atendidos, valor);

					}
				}
			}

		} else if (i > (1800 + 600) && i <= (1800 + 1200)) {
			//Entre 10 e 20 minutos.
			//Entra gente de 20 em 20 segundos.

			if (!(i % 20)) {
				filaInsere(fila, i);

			}
			if (!(i % 4)) {

				for (j = 0; j < numeroDeServidores; j++) {
					if (!filaVazia(fila)) {
						valor = filaRetira(fila);
						valor = i - valor;
						tempoMedioDeEspera += valor;
						clientesAtendidos++;
						filaInsere(atendidos, valor);
					}
				}
			}
		} else if (i > (1800 + 1200) && i <= (1800 + 1800)) {
			//entra gente de 30 em 30 segundos.
			if (!(i % 30)) {
				filaInsere(fila, i);

			}
			if (!(i % 4)) {

				for (j = 0; j < numeroDeServidores; j++) {
					if (!filaVazia(fila)) {
						valor = filaRetira(fila);
						valor = i - valor;
						tempoMedioDeEspera += valor;
						clientesAtendidos++;
						filaInsere(atendidos, valor);
					}
				}
			}
		}

	}
	printf("Acabou!!!\n");
	printf("Tempo do termino: ");
	printHora(i);
	printf("\n");
	tempoMedioDeEspera = (float) tempoMedioDeEspera / (float) clientesAtendidos;
	printf("Tempo medio de espera: ");
	printHora((int) tempoMedioDeEspera);
	printf("\n");
	printf("Total de clientes atendidos %d\n", clientesAtendidos);
	printf("\n\n\n");
	printf("Para justificar os dados pode verificar o tempo de atendimento de cada um:\n");
	filaImprime(atendidos);
	return 0;

}

