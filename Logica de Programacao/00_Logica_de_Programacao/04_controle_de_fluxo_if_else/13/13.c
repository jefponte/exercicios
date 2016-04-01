#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int c;
	int d;
	int p1;
	int p2;
	int p3;
	int p4;

	printf("Defina os valores de A, B, C e D. Os Números não podem se repetir.\n ");

	printf("Digite o número A: \n");
	scanf("%d", &a);
	printf("Digite o número B: \n");
	scanf("%d", &b);
	printf("Digite o número C: \n");
	scanf("%d", &c);
	printf("Digite o número D: \n");
	scanf("%d", &d);



	//se são 4 valores ABCD são 24 possibilidade. se desconsiderarmos valores Iguais
	//Quais são as possibilidades?

	//ABCD
	if(a> b && b > c && c > d){

		p1 = a;
		p2 = b;
		p3 = c;
		p4 = d;
	}
	//ABDC

	else if (a> b && b > d && d > c) {
		p1 = a;
		p2 = b;
		p3 = d;
		p4 = c;


	}
	//ACBD
	else if (a > c && c > b && b > d) {
		p1 = a;
		p2 = c;
		p3 = b;
		p4 = d;


	}
	//ACDB
	else if (a > c && c > d && d > b) {
		p1 = a;
		p2 = c;
		p3 = d;
		p4 = b;

	}//ADBC
	else if (a > d && d > b && b > c) {

		p1 = a;
		p2 = d;
		p3 = b;
		p4 = c;



	}
	//ADCB
	else if (a > d && d > c && c > b) {

		p1 = a;
		p2 = d;
		p3 = c;
		p4 = b;

	}
	//BCDA
	else if (b > c && c > d && d > a) {

		p1 = b;
		p2 = c;
		p3 = d;
		p4 = a;

	}
	//BCAD
	else if (b > c && c > a && a > d) {

		p1 = b;
		p2 = c;
		p3 = a;
		p4 = d;

	}
	//BACD
	else if (b > a && a > c && c > d) {

		p1 = b;
		p2 = a;
		p3 = c;
		p4 = d;


	}
	//BADC
	else if (b > a && a > d && d > c) {


		p1 = b;
		p2 = a;
		p3 = d;
		p4 = c;



	}

	//BADC
	else if (b > a && a > d && d > c) {


		p1 = b;
		p2 = a;
		p3 = d;
		p4 = c;



	}
	//BDAC
	else if (b > d && d > a && a > c) {

		p1 = b;
		p2 = d;
		p3 = a;
		p4 = c;


	}
	//BDCA
	else if (b > d && d > c && c > a) {

		p1 = b;
		p2 = d;
		p3 = c;
		p4 = a;



	}

	//BCAD
	else if (b > c && c > a && a > d) {

		p1 = b;
		p2 = c;
		p3 = a;
		p4 = d;



	}

	//BCDA
	else if (b > c && c > d && d > a) {

		p1 = b;
		p2 = c;
		p3 = d;
		p4 = a;


	}
	//DABC
	else if (d > a && a > b && b > c) {


		p1 = d;
		p2 = a;
		p3 = b;
		p4 = c;



	}
	//DACB
	else if (d > a && a > c && c > b) {

		p1 = d;
		p2 = a;
		p3 = c;
		p4 = b;


	}
	//DBAC
	else if (d > b && b > a && a > c) {

		p1 = d;
		p2 = b;
		p3 = a;
		p4 = c;



	}

	//DBCA
	else if (d > b && b > c && c > a) {


		p1 = d;
		p2 = b;
		p3 = c;
		p4 = a;


	}

	//DCAB
	else if (d > c && c > a && a > b) {

		p1 = d;
		p2 = c;
		p3 = a;
		p4 = b;


	}

	//DCBA
	else if (d > c && c > b && b > a) {


		p1 = d;
		p2 = c;
		p3 = b;
		p4 = a;

	}
	//CABD
	else if (c > a && a > b && b > d) {


		p1 = c;
		p2 = a;
		p3 = b;
		p4 = d;


	}
	//CADB
	else if (c > a && a > d && d > b) {


		p1 = c;
		p2 = a;
		p3 = d;
		p4 = b;


	}
	//CBAD
	else if (c > b && b > a && a > d) {


		p1 = c;
		p2 = b;
		p3 = a;
		p4 = d;


	}
	//CBDA
	else if (c > b && b > d && d > a) {

		p1 = c;
		p2 = b;
		p3 = d;
		p4 = a;

	}

	//CDAB
	else if (c > d && d > a && a > b) {


		p1 = c;
		p2 = d;
		p3 = a;
		p4 = b;

	}


	//CDBA
	else if (c > d && d > b && b > a) {


		p1 = c;
		p2 = d;
		p3 = b;
		p4 = a;

	}
	// todos iguais
	else if (a == b && b == c && c == d)
	{
		p1 = c;
		p2 = d;
		p3 = b;
		p4 = a;

	}else if (a == b && b == c && c > d) {

		p1 = a;
		p2 = b;
		p3 = c;
		p4 = d;

	}



	//O valor maior é p1 e o valor menor é p4
	printf("maior valor é %d e o menor valor é %d", p1, p4);

	//printf("%d, %d, %d, %d", p1, p2, p3, p4);

	return 0;

}
