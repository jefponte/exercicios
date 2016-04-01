#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void readVector(int size, int *vector){
    int i;
    printf("ENTRE COM OS ELEMENTOS DO VETOR:\n");
    for(i = 0; i<size; i++) {
        printf("Elemento %d:\n", i);
        scanf("%d", &vector[i]);
    }

}
void printVector(int size, int *vector){
    int i;
    printf("\n{");
    for(i = 0; i<size; i++) {
        printf("%d,", vector[i]);
    }
    printf("}\n");

}
void bubbleSort(int size, int *vector) {

    int i, j, aux= 0, flag;
    for(i = size - 1; i >= 1; i--) {
        flag = 0;
        for(j = 0; j <= i; j++) {
            if (vector[j] > vector[j+1]) {
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
                flag = 1;

            }
        }
        if (flag == 0) {
            return;
        }
    }
}

void bubbleSortRecursive(int size, int *vector) {
    int i, aux = 0, flag = 0;
    for(i = 0; i < size - 1; i++) {
        //printVector(SIZE, vector);
        if(vector[i] > vector[i+1]) {
            aux = vector[i];
            vector[i] = vector[i+1];
            vector[i+1] = aux;
            flag = 1;
        }

    }
    if (flag != 0) {
        bubbleSortRecursive(size - 1, vector);
    }
}

void quickSort(int size, int* vector)
{

    int x = vector[0];
    int temp = 0;
    int a = 1;//A vai ser o maior, vai ficar apos o pivo
    int b = size-1;//B responsavel pelos menores. Vai ser o indice correspondente.
    //Se o vetor tiver um elemento, cai fora da função, tem nada pra fazer aqui não.
    if(size <= 1){
        return;
    }
    do{
        while(a < size && vector[a] <= x) a++;


        while(vector[b] > x) b--;
        if(a < b){
            temp = vector[a];
            vector[a] = vector[b];
            vector[b] = temp;
            a++;
            b--;
        }

    }while(a <= b);

    vector[0] = vector[b];
    vector[b] = x;

    //printVector(SIZE, vector);

    quickSort(b, vector);
    quickSort(size-a, &vector[a]);



}

void insertionSort(int size, int*vector){
    int i, j, tmp;
    for(i = 1; i < size; i++) {
        tmp = vector[i];
        for(j = i-1; j >= 0 && tmp < vector[j]; j--) {
            vector[j+1] = vector[j];
        }
        vector[j+1] = tmp;
    }
}


void seletionSort(int size, int*vector) {
    int i, j, aux = 0;
    for(i = 0; i< size; i++){
        for(j = (i+1); j < size ; j++ ){
            if(vector[j] < vector[i]){
                aux = vector[i];
                vector[i]= vector[j];
                vector[j] = aux;
            }
        }
    }
}

/*void insertionSort(int size, int* vector){
    int index= 0;
    int i;
    int arranjo = 1;
    int key;
    while(arranjo <= size){
      key = vector[arranjo];
      index = arranjo - 1;
      while((index>=0) && key < vector[index]) {
            vector[index+1] = vector[index];
            index--;

      }
      vector[index+1] = key;
      arranjo++;
    }
}*/

