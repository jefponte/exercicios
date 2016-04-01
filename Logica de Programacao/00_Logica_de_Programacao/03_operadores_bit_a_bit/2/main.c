#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*

2.   Quando  lemos  um  byt e  da  port a  paralela
(usada  antigament e  pela impressora),   não  temos
acesso  aos  três  primeiros  bits  do  byte  e  além
disso,   o bit   mais  signif icativo  vem  invertido.

Faça  um  programa  que  leia  um  byte  do teclado  e
a  seguir  invert a  o  bit   mais  significativo  e
zere  os  três  bits  menos significativos.

 */

int main()
{

	int p0 = 0;
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;
	int p6 = 0;
	int p7 = 0;


	printf("Primeiro, digite cada um dos oito bits do Byte:");
	printf("Bite 0:");
	scanf("%d", &p0);
	printf("Bite 1:");
	scanf("%d", &p1);
	printf("Bite 2:");
	scanf("%d", &p2);
	printf("Bite 3:");
	scanf("%d", &p3);
	printf("Bite 4:");
	scanf("%d", &p4);
	printf("Bite 5:");
	scanf("%d", &p5);
	printf("Bite 6:");
	scanf("%d", &p6);
	printf("Bite 7:");
	scanf("%d", &p7);




	printf("\n O Byte digitado foi:  %d%d%d%d%d%d%d%d ", p0, p1,p2, p3, p4, p5, p6, p7);


	if(p7 == 0){
		p7 = 1;
	}else{
		p7 = 0;

	}



	p0 = 0;
	p1 = 0;
	p2 = 0;

	printf("\n O Byte sua transformação é:  %d%d%d%d%d%d%d%d ", p0, p1,p2, p3, p4, p5, p6, p7);



	return 0;

}
