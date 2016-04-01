#include <stdio.h>
#include <stdlib.h>

typedef struct matriz{
    int numeroDeColunas;
    int *matrizDeInt;
} Matriz;


int main()
{
    Matriz m;
    int i;
    m.numeroDeColunas = 3;
    m.matrizDeInt =(int*)malloc(3*sizeof(int));
    if(m.matrizDeInt == NULL){
        exit(1);
    }

    for(i = 0; i < m.numeroDeColunas; i++){
        printf("Digite o elemento %d\n", i);
        scanf("%d", (m.matrizDeInt + i));
    }


    for(i = 0; i < m.numeroDeColunas; i++){
        printf("Elemento %d: %d\n", i, *(m.matrizDeInt+i));
    }



    return 0;
}
