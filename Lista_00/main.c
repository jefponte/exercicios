#include <stdio.h>
#define N 100


int mainQuestao1() {

	int lista[100];
	int dimensao, i, houveTroca, aux, impar, par, media;


	printf("Digite a dimensão, no máximo 100:");
	scanf("%d", &dimensao);
	for(i = 0; i < dimensao; i++){
		printf("Digite o elemento %d:\n", i);
		scanf("%d", &lista[i]);
		if(lista[i] > 256)
			i--;
	}


	printf("\nLista como foi digitada:\n ");
	printf("\n-----------------\n");
	//Mostrar lista antes de ordenar.
	for(i = 0; i < dimensao; i++)
		printf("Elemento %d: %d\n", i, lista[i]);



	//Ordem decrescente.
	do{
		houveTroca = 0;
		for(i = 0; i < (dimensao - 1); i++){
			if(lista[i] < lista[i+1]){
				aux = lista[i];
				lista[i] = lista[i+1];
				lista[i+1] = aux;
				houveTroca = 1;
			}
		}
	}while(houveTroca);


	printf("\nLista ordenada:\n ");
	printf("\n-----------------\n");

	impar = 0;
	par = 0;
	aux = 0;
	media = 0;
	//Mostrar lista depois de ordenar.
	for(i = 0; i < dimensao; i++){
		if(lista[i]%2){
			impar++;
			if(lista[i] > 50)
			{
				media += lista[i];
				aux++;
			}

		}
		else
			par++;
		printf("Elemento %d: %d\n", i, lista[i]);
	}
	printf("--------------\n");
	media = media/aux;
	printf("Impares: %d\n", impar);
	printf("Pares: %d\n", par);
	printf("Media dos impares maiores que 50:%d\n", media);


	return 0;
}

void mostraVetor(int *vetor, int dimensao){
	int i;
	for(i = 0; i < dimensao; i++){
		printf("Elemento [%d]: %d\n", i, vetor[i]);
	}
}

int mainQuestao2(){
	int dimensaoX, dimensaoY, dimensaoW, i, menorX, maiorX;
	int vetorX[N], vetorY[N], vetorW[N];


	printf("Digite a dimensão do vetor X, no máximo %d:", N);
	scanf("%d", &dimensaoX);
	for(i = 0; i < dimensaoX; i++){
		printf("Digite o elemento %d:\n", i);
		scanf("%d", &vetorX[i]);
	}

	dimensaoY = 0;
	dimensaoW = 0;
	for(i = 0; i < dimensaoX; i++){
		if(vetorX[i] > 10 && vetorX[i] < 40){
			vetorY[dimensaoY] = vetorX[i];
			dimensaoY++;
		}
		//Posicoes pares
		if(!(i%2)){
			vetorW[dimensaoW] = vetorX[i];
			dimensaoW++;
		}
	}


	printf("Vetor X:\n");


	return 0;
}

int main() {
	int questao;

	do {
		printf("Digite um número entre 0 e 5 ou 0 para sair.\n");
		scanf("%d", &questao);

		switch (questao) {
		case 0:
			break;
		case 1:
			mainQuestao1();
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;

		default:
			printf("Comando não encontrado\n");
			break;

		}

	} while (questao);

	printf("Fim do programa!!!\n\n\n");
	return 0;
}
