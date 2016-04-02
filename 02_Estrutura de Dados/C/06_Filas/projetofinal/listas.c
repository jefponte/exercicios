#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listas.h"


//IMPLEMENTA플O DE FUN합ES QUE MANIPULAM UMA LISTA ENCADEADA DE ALUNOS
// funcao de criacao de lista: retorna uma lista vazia, ou seja, um ponteiro para NULL.
ListaDeAlunos * criaListaDeAlunos() {
    return NULL;
}
// funcao basica para insercao na lista, basica, pois nao insere ordenado, insere sempre no inicio da lista
ListaDeAlunos * insereNaListaDeAlunos(ListaDeAlunos * listaDeAlunos) {
    // aloca-se um espaco na memoria para um novo elemento lista (ponteiro de lista)
    ListaDeAlunos *novaLista = (ListaDeAlunos*)calloc(1, sizeof(ListaDeAlunos));
    // aloca uma espaco na memoria para armazenar uma string, essencialmente ptr 4bytes (referencia)
    novaLista->aluno.nome = (char *)calloc(80, sizeof(char));
    int i;


    printf("Entre com o nome do aluno: ");
    scanf("%79[^\n]", novaLista->aluno.nome);
    getchar(); // na hora que digita a string e tecla enter, string entra, mas nao pega o enter.
    getchar();
    getchar();
    getchar();
    printf("Entre com o id do aluno: ");
    getchar();
    scanf("%d", &novaLista->aluno.id);
    getchar();
    getchar();
    getchar();


    novaLista->aluno.materia = (char**)calloc(2, sizeof(char*));
    for(i=0; i < 2; i++) {
        *(novaLista->aluno.materia + i) = (char*)calloc(80, sizeof(char));
    }

    for(i=0; i < 2; i++) {
        printf("Entre com a materia do aluno: ");
        scanf("%79[^\n]", *(novaLista->aluno.materia + i));
        getchar();
        getchar();
    }

    //novaLista->aluno.id = 12;
    //novaLista->aluno.nome = "Alane";
    novaLista->proxima = listaDeAlunos;
    return novaLista;

}

void imprimeListaDeAlunos(ListaDeAlunos *listaDeAlunos) {
    ListaDeAlunos * aux; // cria-se um ptr de alunos, nao aponta nada, cria-se para andar na lista
    // aux passa a apontar pro mesmo lugar que lista
    for (aux = listaDeAlunos; aux !=NULL; aux = aux->proxima) {
        printf("matricula: %d \n", aux->aluno.id);
        printf("nome = %s\n", aux->aluno.nome);
        printf("materia 1 = %s\n", *(aux->aluno.materia));
        printf("materia 2 = %s\n ",*(aux->aluno.materia + 1));
   }
}

int testaListaVaziaDeAlunos(ListaDeAlunos *listaDeAlunos) {

    return (listaDeAlunos == NULL);

}

//Lista * buscaNaListaPorNome(Lista * lista, char *nomeProcurado) {
int buscaNaListaPorNomeDeAlunos(ListaDeAlunos * listaDeAlunos, char *nomeProcurado) {
    ListaDeAlunos *aux;
    //int boolean = FALSE;
    for (aux = listaDeAlunos; aux !=NULL; aux = aux->proxima) {
        //boolean = (*aux->aluno.nome == *nomeProcurado) ? TRUE : FALSE;
        if (*aux->aluno.nome == *nomeProcurado) {
            return TRUE;
        }
    }
    return FALSE;

}

ListaDeAlunos * retiraDaListaDeAlunos(ListaDeAlunos *listaDeAlunos, char *nomeProcurado) {
    ListaDeAlunos *anterior = NULL;
    ListaDeAlunos *aux = listaDeAlunos;

    while (aux != NULL && *aux->aluno.nome != *nomeProcurado) {
        anterior = aux;
        aux = aux->proxima;
    }

    if (aux == NULL)
        return listaDeAlunos;
    else if (anterior == NULL) {
        listaDeAlunos = aux->proxima;
    }
    else {
        anterior->proxima = aux->proxima;
    }

    free(aux);
    return listaDeAlunos;
}

ListaDeAlunos *insereNaListaDeAlunoOrdenadoPorId(ListaDeAlunos* listaDeAlunos, int matricula) {
    ListaDeAlunos* novo;
    ListaDeAlunos* anterior = NULL;
    ListaDeAlunos* aux = listaDeAlunos;

    while(aux!=NULL && aux->aluno.id < matricula) {
        anterior = aux->proxima;
    }

    novo = (ListaDeAlunos*)calloc(1, sizeof(ListaDeAlunos));
    novo->aluno.id = matricula;

    if (anterior == NULL) {
        novo->proxima = listaDeAlunos;
        listaDeAlunos = novo;
    } else {
        novo->proxima = anterior->proxima;
        anterior->proxima = novo;
    }
    return listaDeAlunos;
}

void liberaListaDeAlunos(ListaDeAlunos *listaDeAlunos) {
    ListaDeAlunos *aux = listaDeAlunos;
    while (aux!=NULL) {
        ListaDeAlunos *proximoElemento = aux->proxima;
        free(aux);
        aux = proximoElemento;

    }
}
//FIM DA IMPLEMENTA합ES REFERENTES A LISTA DE ALUNOS


//IMPLEMENTA플O DE FUN합ES QUE MANIPULAM UMA LISTA ENCADEADA DE FACILITADORES
ListaDeFacilitadores * criaListaDeFacilitadores() {
    return NULL;
}

ListaDeFacilitadores * insereNaListaDeFacilitadores(ListaDeFacilitadores * lista) {
    ListaDeFacilitadores *novaLista = (ListaDeFacilitadores*)calloc(1, sizeof(ListaDeFacilitadores));
    novaLista->facilitador.nome = (char *)calloc(80, sizeof(char));
    //novaLista->facilitador.materia = (char *)calloc(80, sizeof(char));

    printf("Entre com o nome do FACILITADOR: ");
    scanf("%79[^\n]", novaLista->facilitador.nome);
    getchar(); // na hora que digita a string e tecla enter, string entra, mas nao pega o enter.
    getchar();//gets(novaLista->aluno.nome);


    novaLista->facilitador.materia = (char**)calloc(2, sizeof(char*));
    int i;
    for(i=0; i < 2; i++) {
        *(novaLista->facilitador.materia + i) = (char*)calloc(80, sizeof(char));
    }

    for(i=0; i < 2; i++) {
        printf("Entre com a materia que ele esta apto a ensinar: ");
        scanf("%79[^\n]", *(novaLista->facilitador.materia + i));
        getchar();
    }

     for(i=0; i < 2; i++) {
        printf("%s\n", *(novaLista->facilitador.materia + i));
    }

    //novaLista->aluno.id = 12;
    //novaLista->aluno.nome = "Alane";
    novaLista->proxima = lista;
    return novaLista;

}

void imprimeListaDeFacilitadores(ListaDeFacilitadores *lista) {
    ListaDeFacilitadores * aux;
    for (aux = lista; aux !=NULL; aux = aux->proxima) {
        //printf("nome = %s\n", aux->aluno.nome);
        printf("nome = %s\n", aux->facilitador.nome);
        printf("materia 1 = %s\n", *(aux->facilitador.materia));
        printf("materia 2 = %s\n ", *(aux->facilitador.materia + 1));
        //printf("nome = %s\n", aux->aluno.nome);
   }
}

int testaListaVaziaDeFacilitadores(ListaDeFacilitadores *lista) {

    return (lista == NULL);

}

//ListaDeFacilitadores * buscaNaListaPorNomeDeFacilitadores(ListaDeFacilitadores * lista, char *nomeProcurado) {
int buscaNaListaPorNomeDeFacilitadores(ListaDeFacilitadores * lista, char *nomeProcurado) {
    ListaDeFacilitadores *aux; // = (ListaDeFacilitadores*)calloc(1, sizeof(ListaDeFacilitadores));
    int boolean = FALSE;
    //nomeProcurado = (char *)calloc(80, sizeof(char));
    for (aux = lista; aux !=NULL; aux = aux->proxima) {
        boolean = (*aux->facilitador.nome == *nomeProcurado) ? TRUE : FALSE;
        /* if (aux->facilitador.nome == nomeProcurado) {
            printf("%s\n", aux->facilitador.nome);
            //return aux;
            return TRUE;
        }*/
    }

    //printf("%s\n", aux->facilitador.nome);

    //return NULL;
    return boolean;

}

ListaDeFacilitadores * retiraDaListaDeFacilitadores(ListaDeFacilitadores *lista, char *nomeProcurado) {
    ListaDeFacilitadores *anterior = NULL;
    ListaDeFacilitadores *aux = lista;

    while ( aux != NULL && *aux->facilitador.nome != *nomeProcurado) {
        anterior = aux;
        aux = aux->proxima;
    }

    if (aux == NULL) {
        return lista;
    }
    if (anterior == NULL) {
        lista = aux->proxima;
    }
    else {
        anterior->proxima = aux->proxima;
    }
    free(aux);
    return lista;
}

void liberaListaDeFacilitadores(ListaDeFacilitadores *lista) {
    ListaDeFacilitadores *aux = lista;
    while (aux!=NULL) {
        ListaDeFacilitadores *proximoElemento = aux->proxima;
        free(aux);
        aux = proximoElemento;

    }
}
// FIM DA IMPLEMENTACAO REFERENTE A LISTA DE FACILITADORES


// IMPLEMENTACOES REFERENTES A LISTA DE MATERIAS

ListaDeMaterias * criaListaDeMaterias() {
    return NULL;
}
ListaDeMaterias * insereNaListaDeMaterias(ListaDeMaterias * listaDeMaterias) {
    ListaDeMaterias *novaLista = (ListaDeMaterias*)calloc(1, sizeof(ListaDeMaterias));
    novaLista->materia.nome = (char *)calloc(40, sizeof(char));

    printf("Entre com o nome da MATERIA: ");
    scanf("%39[^\n]", novaLista->materia.nome);
    getchar(); // na hora que digita a string e tecla enter, string entra, mas nao pega o enter.

    novaLista->proxima = listaDeMaterias;
    return novaLista;

}

void imprimeListaDeMaterias(ListaDeMaterias *listaDeMaterias) {
    ListaDeMaterias * aux;
    for (aux = listaDeMaterias; aux !=NULL; aux = aux->proxima)
        printf("MATERIAS = %s\n", aux->materia.nome);

}

/*void imprimeAlunosFacilitadoresNaMateria(ListaDeMaterias *listaDeMaterias, ListaDeAlunos *listaDeAlunos, ListaDeFacilitadores*listaDeFacilitadores, char *materiaProcurada) {
    ListaDeMaterias *auxMaterias;
    ListaDeAlunos *auxAlunos = listaDeAlunos;
    ListaDeFacilitadores *auxFacilitadores = listaDeFacilitadores;
    int i;
    while (auxAlunos != NULL) {
        do {
            for(auxMaterias = listaDeMaterias; auxMaterias !=NULL; auxMaterias = auxMaterias->proxima) {
                for(i=0; i<2; i++) {
                    if(*(listaDeMaterias->materia.nome)== *(listaDeAlunos->aluno.materia + i)) {
                        printf("Aluno: %s", *(listaDeAlunos->aluno.nome));
                    }
                }
            }

        } while ();
        auxAlunos = auxAlunos->proxima;
    }
    if(*(listaDeMaterias->materia.nome) == *(listaDeAlunos->aluno.materia))
}*/
int testaListaVaziaDeMaterias(ListaDeMaterias *listaDeMaterias) {

    return (listaDeMaterias == NULL);

}

//Lista * buscaNaListaPorNome(Lista * lista, char *nomeProcurado) {
int buscaNaListaPorNomeDeMaterias(ListaDeMaterias * listaDeMaterias, char *nomeProcurado) {
    ListaDeMaterias *aux;
    //int boolean = FALSE;
    for (aux = listaDeMaterias; aux !=NULL; aux = aux->proxima) {
        //boolean = (*aux->aluno.nome == *nomeProcurado) ? TRUE : FALSE;
        if (*aux->materia.nome == *nomeProcurado) {
            return TRUE;
        }
    }
    return FALSE;

}

ListaDeMaterias * retiraDaListaDeMaterias(ListaDeMaterias *listaDeMaterias, char *nomeProcurado) {
    ListaDeMaterias *anterior = NULL;
    ListaDeMaterias *aux = listaDeMaterias;

    while (aux != NULL && *aux->materia.nome != *nomeProcurado) {
        anterior = aux;
        aux = aux->proxima;
    }

    if (aux == NULL)
        return listaDeMaterias;
    else if (anterior == NULL) {
        listaDeMaterias = aux->proxima;
    }
    else {
        anterior->proxima = aux->proxima;
    }

    free(aux);
    return listaDeMaterias;
}

void liberaListaDeMaterias(ListaDeMaterias *listaDeMaterias) {
    ListaDeMaterias *aux = listaDeMaterias;
    while (aux!=NULL) {
        ListaDeMaterias *proximoElemento = aux->proxima;
        free(aux);
        aux = proximoElemento;

    }
}


// FIM DE IMPLEMENTACOES REFERENTES A LISTA DE MATERIAS

