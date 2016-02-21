#include <stdio.h>
#include <stdlib.h>
#define DIMENSAO 10



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



void quickSort( int *lista, int esquerda, int direita )
{
    int pivot, i, j, x, aux;
    if (esquerda < direita)
    {

        x = lista[esquerda];
        i = esquerda;
        j = direita;

        do{
            while( lista[j] > x ){
                j--;
            }
            while( lista[i] < x ){
                i++;
            }
            if (i < j)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
            else
            {
                pivot = j;
                break;
            }
        }while(1);
        quickSort( lista, esquerda, pivot);
        quickSort(lista, pivot+1, direita);
    }
}

void loadVector(int *lista, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        lista[i] = i-(2*i)+300;

    }
}

int main()
{

    int lista[DIMENSAO];
    int comando;
    printf("Alimente o vetor:\n\n");
    //readVector(lista, DIMENSAO);
    loadVector(lista, DIMENSAO);
    showVector(lista, DIMENSAO);

    do{

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
            case 4:
                quickSort(lista, 0, DIMENSAO-1);
                break;
            default:
                printf("Comando nao encontrado.");
                break;
        }
        printf("Depois da ordenacao:\n");
        showVector(lista, DIMENSAO);
    }while(comando);
    return 0;
}
