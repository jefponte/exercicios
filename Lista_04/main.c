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
void inserir_final(Box *lista, char conteudo){
    Box *p = lista;
    for(p = lista; p->proximo != NULL; p = p->proximo){
    }
    p->proximo = (Box*)malloc(sizeof(Box));
    p->proximo->proximo = NULL;
    p->proximo->conteudo = conteudo;
}
void insere_entre_dois(Box*lista, char primeiro, char proximo, char conteudo){
    Box*novo;

    Box *p = lista;
    for(p = lista; p != NULL; p = p->proximo){
        if(p->proximo == NULL)
            break;
        if(p->conteudo == primeiro && p->proximo->conteudo == proximo)
        {

            novo = (Box*)malloc(sizeof(Box));
            novo->proximo = p->proximo;
            novo->conteudo = conteudo;
            p->proximo = novo;

        }

    }
}

void eliminar_por_busca(Box*lista, char conteudo){
    Box*anterior;
    Box *p;

    anterior = lista;
    for(p = anterior->proximo; p != NULL; p = p->proximo){
        if(anterior == NULL)
            break;
        if(p->conteudo == conteudo)
        {
            anterior->proximo = p->proximo;
            free(p);

        }

    }
}

Box* eliminar(Box*lista, char conteudo){
    Box *p, *anterior, excluido;
    anterior = lista;
    if(anterior->conteudo == conteudo){
        p = anterior->proximo;
        free(anterior);
        return p;
    }

    for(p = anterior->proximo; p != NULL; p = p->proximo){
        if(p->conteudo == conteudo){
            anterior->proximo = p->proximo;
            free(p);
            return lista;
        }
        anterior = anterior->proximo;

    }
    return lista;
}
Box* excluir_primeiro(Box*lista){
    Box*excluido;
    excluido = lista;
    lista = lista->proximo;
    free(excluido);
    return lista;
}
void eliminar_final(Box *lista){
    Box *p = lista;
    Box *anterior;
    for(p = lista; p->proximo != NULL; p = p->proximo){
        anterior = p;
    }
    anterior->proximo = NULL;
    free(p);
}


int main()
{
    char letra;
    Box *lista = NULL;

    lista = inserir_inicio(lista, 'c');

    box_listar(lista);

    inserir_final(lista, 'h');

    box_listar(lista);

    inserir_final(lista, 'j');

    insere_entre_dois(lista, 'c', 'h', 'a');

    box_listar(lista);
    lista = eliminar(lista, 'h');
    box_listar(lista);
    lista = excluir_primeiro(lista);
    box_listar(lista);
    eliminar_final(lista);
    box_listar(lista);
    inserir_final(lista, 'j');
    inserir_final(lista, 'w');
    inserir_final(lista, 'x');
    inserir_final(lista, 'v');

    box_listar(lista);
    lista = eliminar(lista, 'w');

    box_listar(lista);

    lista = eliminar(lista, 'a');
    box_listar(lista);

    return 0;
}
