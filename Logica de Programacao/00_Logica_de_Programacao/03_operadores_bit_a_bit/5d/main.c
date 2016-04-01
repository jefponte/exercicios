#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main() {
	int valor;
	scanf("%d", &valor);

	if(valor < 256 && valor > 0)
	{
		printf("0x%X", valor);


	}
	else
	{
		printf("Digite um valor entre 0 e 256");
	}

	return 0;
}
