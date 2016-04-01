#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main() {

	int tudo;
	int aa;
	int rr;
	int gg;
	int bb;

	printf("Digite um valor hexadecimal AARRGGBB: ");

	scanf("%X", &tudo);

	aa = tudo&0xff000000;
	rr = tudo&0x00ff0000;
	gg = tudo&0x0000ff00;
	bb = tudo&0x000000ff;
	//rr = tudo<<4;
	//rr = rr&0xff000000;
	//gg = tudo<<8;
	//gg = gg&0xff000000;
	//bb = tudo<<12;
	//bb = bb&0xff000000;


	printf(" %X, %X, %X, %X", aa>>24, rr>>16, gg>>8, bb);








	return 0;
}
