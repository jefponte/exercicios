#include <stdio.h>
#include <stdlib.h>


typedef struct box{
    char conteudo;
    struct box *proximo;

}Box;

void mostrarLista(Box *lista){
    printf("Vamos mostrar");
    Box *p;
    p = lista;
    while(p != NULL){
        printf("%c\n", lista->conteudo);
        p = lista->proximo;
    }
}
void inserirNaFrente(Box *lista, char letra){
    if(lista == NULL){
        lista = (Box*)malloc(sizeof(Box));
        lista->conteudo = letra;
        lista->proximo = NULL;
    }
    else{
        lista->proximo = (Box*)malloc(sizeof(Box));
        lista->proximo->conteudo = letra;
        lista->proximo->proximo = NULL;
    }
}


int main()
{
    int comando;
    char letra;
    Box *lista = NULL;
    //mostrarLista(lista);

    do{
        printf("Digite um comando:\n\n");

        printf("0 para encerrar\n");
        printf("1 - Novo elmento no final da lista.\n");
        printf("2 - Novo elemento no inicio da lista\n");
        printf("3 - Inserir a partir de um elemento encontrado\n");
        printf("4 - Excluir um elemento por conteudo\n");
        printf("5 - Excluir Ultimo\n");
        printf("6 - Excluir Primeiro\n");
        printf("7 - Mostrar lista\n");
        scanf("%d", &comando);
        switch(comando){
            case 1:
                printf("digite um caracter\n");
                getchar();
                scanf("%c", &letra);
                inserirNaFrente(lista, letra);
            break;
            case 7:
                mostrarLista(lista);
                break;
            default:
                printf("Comando desconhecido\n");
            break;
        }

    }while(comando);
    printf("Adeus!");
    return 0;
}
