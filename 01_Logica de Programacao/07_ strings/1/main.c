#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char **argv) {

	char s[50];
	int n;
	int i;

	puts("Digite o valor de N:");
	scanf("%d", &n);

	n = n*2;


	for(i = 0; i< n; i++){

		if(i%2 == 0){

			s[i] = 'c';
		}else{
			s[i] = 'h';

		}


	}
	i++;
	s[i] = 0;


	puts(s);
}



