#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int j;
	int matriz[2][2];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{

			matriz[i][j] = i;

		}

	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{

			printf("%d \n", matriz[i][j]);

		}

	}

	return 0;

}
