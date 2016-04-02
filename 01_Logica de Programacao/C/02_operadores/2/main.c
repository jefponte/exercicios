#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*

 2.   Diga  a  ordem  de  cálculo  e  o  result ado  das  expressões  abaixo

 Considerarei o valor de x como sendo do tipo float. E a apresentação de dados
 com duas casas decimais.


 x = 5*4/6+7;

 O valor de X será 10, visto que se faz primeiro a multiplicação
 e a divisão, logo após se faz a soma.
 Já que os valores que estão sendo passados na divisão e multiplicação
 são números inteiros parte francionária de cada resultado se perderá.
 O valor de X é 10.00





 x = 5*4.0/6+7;

 O valor de X será 10, visto que se faz primeiro a multiplicação
 e a divisão, logo após se faz a soma.
 A existência do valor 4.0, por ser ponto flutuante permite que o resultado
 tenha suas casas decimais, portanto
 x será 10.33




 x   = 5*4%6+7;


 Primeiro a multiplicação, depois o resto da divisão e depois a soma,
 5x4 = 20, Resto da divisão de 20 por 6 é 2 e 2 + 7 é 9
 X é igual a 9.00


 x =  ((4/2)+ (3.0*5));

 Nesse caso os parênteses estão organizando nossas operações.
 Primeiro cada operação dentro dos parênteses mais internos depois a soma.
 O valor de x será 17.00;





 */

int main() {
	float x;

	x = 5 * 4 / 6 + 7;
	printf("\n %0.2f", x);

	x = 5 * 4.0 / 6 + 7;

	printf("\n %0.2f", x);

	x = 5 * 4 % 6 + 7;

	printf("\n %0.2f", x);

	x = ((4 / 2) + (3.0 * 5));

	printf("\n %0.2f", x);

	return 0;

}
