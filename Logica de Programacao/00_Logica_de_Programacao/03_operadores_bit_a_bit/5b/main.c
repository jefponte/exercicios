#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main() {
	int aa;
	int rr;
	int gg;
	int bb;


	printf("Digite 4 valores decimais para as cores: ");
	printf("Digite o componente da opacidade: ");
	scanf("%d", &aa);
	printf("Digite o componente vermelho: ");
	scanf("%d", &rr);
	printf("Digite o componente verde: ");

	scanf("%d", &gg);
	printf("Digite o componente azul: ");
	scanf("%d", &bb);

	printf("Os valores das componentes são: %X,%X,%X,%X", aa, rr, gg, bb);





	return 0;
}
