#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int NumeroASerInvertido;
	printf("Digite o numero a ser convertido no seu oposto: ");
	scanf("%d", &NumeroASerInvertido);
	/* Qualquer numero multiplicado por menos 1 vira o seu oposto. */
	NumeroASerInvertido = NumeroASerInvertido*(-1);
	printf("%d", NumeroASerInvertido);

	return 0;

}
