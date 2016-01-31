#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE !FALSE

void mostraVetor(int *vetor, int dimensao){
	int i;
	for(i = 0; i < dimensao; i++)
		printf("Elemento [%d]: %d\n", i, vetor[i]);
}


void ordenacaoBolha(int *lista, int dimensao){
    int houveTroca, i, aux;
	do{
		houveTroca = FALSE;
		for(i = 0; i < (dimensao - 1); i++){
			if(lista[i] < lista[i+1]){
				aux = lista[i];
				lista[i] = lista[i+1];
				lista[i+1] = aux;
				houveTroca = TRUE;
			}
		}
	}while(houveTroca);
}

void retiraDaLista(int *lista, int *dimensao, int posicao){
    int i;
    printf("Quero eliminar %d\n", *(lista+posicao));


    for(i = posicao; i < (*dimensao)-1; i++){
        *(lista+i) = *(lista+i+1);
    }
    (*dimensao)--;
}

int main()
{
    int dimensao, i,j, flagRepetiu, removidos;
    int *lista;
    printf("Digite o valor de N, dimensao do vetor:\n");
    scanf("%d", &dimensao);
    lista = malloc(sizeof(int)*dimensao);
    if(!lista){
        printf("Memoria insuficiente\n");
        return 0;
    }
    for(i = 0; i < dimensao; i++){
        printf("Digite o elemento %d:", i);
        scanf("%d", (lista+i));
    }

    printf("Lista como foi digitado:\n");
    mostraVetor(lista, dimensao);

    removidos = 0;

    for(i = 0; i < dimensao; i++){
        for(j = (i+1); j < dimensao; j++){
            if(*(lista+i)== *(lista+j)){
                removidos++;
                retiraDaLista(lista, &dimensao, i);
                i--;
                break;
            }
        }
    }
    printf("%d removidos:\n", removidos);
    printf("Lista depois de remover:\n");
    mostraVetor(lista, dimensao);
}
