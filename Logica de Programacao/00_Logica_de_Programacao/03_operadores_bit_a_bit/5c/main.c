#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main() {
	int aa;
	int rr;
	int gg;
	int bb;


	printf("\n Digite 4 valores decimais para a AARRGGBB: ");

	scanf("%d", &aa);
	scanf("%d", &rr);
	scanf("%d", &gg);
	scanf("%d", &bb);

	printf("\n Os valores das componentes são: %X,%X,%X,%X", aa, rr, gg, bb);
	printf("\n Digite o novo valor da Opacidade: ");

	scanf("%d", &aa);

	printf("\n Os valores das componentes são: %X,%X,%X,%X", aa, rr, gg, bb);


	printf("\n Digite o novo valor da componente vermehla: ");

	scanf("%d", &rr);

	printf("\n Os valores das componentes são: %X,%X,%X,%X", aa, rr, gg, bb);

	printf("\n Digite o novo valor da componente Verde: ");

	scanf("%d", &gg);

	printf("\n Os valores das componentes são: %X,%X,%X,%X", aa, rr, gg, bb);

	printf("\n Digite o novo valor da componente Azul: ");

	scanf("%d", &bb);

	printf("\n Os valores das componentes são: %X,%X,%X,%X", aa, rr, gg, bb);



	return 0;
}
