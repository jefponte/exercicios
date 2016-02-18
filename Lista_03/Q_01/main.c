#include <stdio.h>
#include <stdlib.h>
#define DIMENSAO 5



void readVector(int *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("Digite o elemento %d:\n", i);
        scanf("%d", (ptr+i));
    }

}
void showVector(int *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("[%d]:%d \n", i, *(ptr+i));
    }
}


void bubbleSort(int *lista, int dimensao){
    int i, j, aux;
    for(i = dimensao-1; i >= 1; i--){
        for(j = 0; j < i;j++){
            if(lista[j]> lista[j+1]){
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;
            }
        }

    }
}

void selectionSort(int *lista, int dimensao){
    int i, j, menor, aux;
    for (i = 0; i < (dimensao-1); i++)
    {
        menor = i;
        for (j = (i+1); j < dimensao; j++) {
          if(lista[j] < lista[menor])
            menor = j;
    }
    if (i != menor) {
        aux = lista[i];
        lista[i] = lista[menor];
        lista[menor] = aux;
    }
  }

}
void insertionSort(int *lista, int tamanho)
{
	int i, j, atual;
	for (i = 0; i < tamanho; i++)
	{
		atual = *(lista+i);
		j = i - 1;

		while ((j >= 0) && (atual < lista[j]))
		{
			lista[j + 1] = lista[j];
            j = j - 1;
		}

		lista[j + 1] = atual;
	}
}


int main()
{
    int lista[DIMENSAO];
    int comando;
    printf("Alimente o vetor:\n\n");
    readVector(lista, DIMENSAO);
    showVector(lista, DIMENSAO);



    printf("Selecione o tipo de ordenacao desejada: \n");
    printf("1 - Bubble Sort;");
    printf("2 - Insertion Sort;");
    printf("3 - Selection Sort;");
    printf("4 - QuickSort Sort");
    scanf("%d", &comando);

    switch(comando){

        case 1:
            bubbleSort(lista, DIMENSAO);
            break;
        case 2:
            insertionSort(lista, DIMENSAO);
            break;
        case 3:
            selectionSort(lista, DIMENSAO);
            break;
        case 5:
            break;
        default:
            printf("Comando nao encontrado.");
            break;
    }
    printf("Depois da ordenacao:\n");
    showVector(lista, DIMENSAO);

    return 0;
}
