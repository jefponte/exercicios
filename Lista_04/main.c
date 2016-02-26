#include <stdio.h>
#include <stdlib.h>


typedef struct box{
    char conteudo;
    struct box *proximo;

}Box;


Box* inserir_inicio(Box* lista, char conteudo){
    Box* novo = (Box*)malloc(sizeof(Box));
    novo->conteudo = conteudo;
    novo->proximo = lista;
    return novo;
}
void box_listar(Box* lista){
    Box *p;
    printf("\n\n-----------Listando-----------\n\n");
    for(p = lista; p != NULL; p = p->proximo){
        printf("Conteudo: %c\n", p->conteudo);
    }
}
Box* inserir_final(Box *lista, char conteudo){
    Box *p;

    return p;

}
int main()
{
    char letra;
    Box *lista = NULL;

    lista = inserir_inicio(lista, 'c');

    box_listar(lista);

    lista = inserir_final(lista, 'h');

    box_listar(lista);

    lista = inserir_final(lista, 'j');

    box_listar(lista);


    return 0;
}
