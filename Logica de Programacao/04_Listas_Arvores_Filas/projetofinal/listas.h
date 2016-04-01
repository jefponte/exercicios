
#ifndef LISTAS_H
#define LISTAS_H
#define FALSE 0
#define TRUE !FALSE

//STRUCT PARA CRIA플O DE UMA MATERIA
typedef struct materia {
    char *nome;
} Materia;

//STRUCT PARA CRIA플O DE UMA LISTA ENCADEADA DE MATERIAS
typedef struct listaDeMaterias {
    Materia materia;
    struct listaDeMaterias *proxima;
} ListaDeMaterias;


//STRUCT PARA CRIA플O DE ALUNO
typedef struct aluno {
    int id;
    int nota;
    char **materia;
    char *nome;
} Aluno;

//STRUCT PARA CRIA플O DE UMA LISTA ENCADEADA DE ALUNOS
typedef struct lista {
    Aluno aluno;
    struct lista *proxima;
} ListaDeAlunos;

//STRUCT PARA CRIA플O DE UM FACILITADOR
typedef struct facilitador {
    char *nome;
    char **materia;
} Facilitador;

//STRUCT PARA CRIA플O DE UMA LISTA ENCADEADA DE ALUNOS
typedef struct listaDeFacilitadores {
    Facilitador facilitador;
    struct listaDeFacilitadores *proxima;
} ListaDeFacilitadores;



//ASSINATURAS DE FUN합ES QUE MANIPULAM UMA LISTA DE ALUNOS
ListaDeAlunos * criaListaDeAlunos();
ListaDeAlunos * insereNaListaDeAlunos(ListaDeAlunos * listaDeAlunos);
void imprimeListaDeAlunos(ListaDeAlunos *listaDeAlunos);
int testaListaVaziaDeAlunos(ListaDeAlunos *listaDeAlunos);
int buscaNaListaPorNomeDeAlunos(ListaDeAlunos * listaDeAlunos, char *nomeProcurado);
ListaDeAlunos * retiraDaListaDeAlunos(ListaDeAlunos *listaDeAlunos, char *nomeProcurado);
ListaDeAlunos *insereNaListaDeAlunoOrdenadoPorId(ListaDeAlunos* listaDeAlunos, int matricula);
void liberaListaDeAlunos(ListaDeAlunos *listaDeAlunos);

//ASSINATURAS DE FUN합ES QUE MANIPULAM UMA LISTA DE FACILITADORES
ListaDeFacilitadores * criaListaDeFacilitadores();
ListaDeFacilitadores* insereNaListaDeFacilitadores(ListaDeFacilitadores* lista);
void imprimeListaDeFacilitadores(ListaDeFacilitadores *lista);
int testaListaVaziaDeFacilitadores(ListaDeFacilitadores *lista);
int buscaNaListaPorNomeDeFacilitadores(ListaDeFacilitadores * lista, char *nomeProcurado);
ListaDeFacilitadores * retiraDaListaDeFacilitadores(ListaDeFacilitadores *lista, char *nomeProcurado);
void liberaListaDeFacilitadores(ListaDeFacilitadores *lista);

//ASSINATURAS DE FUN합ES QUE MANIPULAM UMA LISTA DE MATERIAS
ListaDeMaterias * criaListaDeMaterias();
ListaDeMaterias * insereNaListaDeMaterias(ListaDeMaterias * listaDeMaterias);
void imprimeListaDeMaterias(ListaDeMaterias *listaDeMaterias);
int testaListaVaziaDeMaterias(ListaDeMaterias *listaDeMaterias);
int buscaNaListaPorNomeDeMaterias(ListaDeMaterias * listaDeMaterias, char *nomeProcurado);
ListaDeMaterias * retiraDaListaDeMaterias(ListaDeMaterias *listaDeMaterias, char *nomeProcurado);
void liberaListaDeMaterias(ListaDeMaterias *listaDeMaterias);

#endif
