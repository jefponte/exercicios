#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "Fila.h"
#include "listas.h"

#define LISTA6 1
#define LISTA7 2
#define LISTA8 3
#define LISTA9 4
#define LISTA10 5
#define SAIR 6


int clock=0;
int id=0;
int alunosFila=0;
int maxFila=0;
int somaTempoEspera=0;
tqueue* hotcat;

void menuPrincipal();
int menuDePrincipal();
int menuDeOrdenacao();
void menuOrdenacao();

void copiaVetor(int *, int *);


int main() {

    menuPrincipal();
    //printf("%d", SIZE);
}

void menuPrincipal() {
    int opcao = 0;
    do {
        opcao = menuDePrincipal();
        switch(opcao) {
            case LISTA6:
                menuOrdenacao();
                break;

            case LISTA7:
                menuCadastro();
                break;

            case LISTA8:
                lista8();
                break;

            case LISTA9:
                break;

            case LISTA10:
                break;

            case SAIR:
                exit(1);
                break;

        }
    } while(opcao!=SAIR);

}
int menuDePrincipal() {
    int opcao = 0;
    printf("\n------- MENU DE OPCOES --------\n");
    printf("DIGITE UMA DAS OPCOES ABAIXO:\n\n");
    printf("DIGITE 1 - PARA LISTA 6\n");
    printf("DIGITE 2 - PARA LISTA 7\n");
    printf("DIGITE 3 - PARA LISTA 8\n");
    printf("DIGITE 4 - PARA LISTA 9\n");
    printf("DIGITE 5 - PARA LISTA 10\n");
    printf("DIGITE 6 - PARA SAIR\n");
    printf("ENTRE COM SUA OPCAO: ");
    scanf("%d", &opcao);

    return opcao;

}

int menuDeOrdenacao() {
    int op = 0;
    printf("OPCOES DE ORDENACAO: \n");
    printf("DIGITE 1 - PARA BUBBLE SORT\n");
    printf("DIGITE 2 - PARA INSERTION SORT\n");
    printf("DIGITE 3 - PARA SELETION SORT\n");
    printf("DIGITE 4 - PARA QUICK SORT\n");
    printf("DIGITE 5 - PARA SAIR\n");
    printf("\nENTRE COM UMA DAS OPCOES PARA ORDENACAO:");
    scanf("%d", &op);

    return op;
}
void menuOrdenacao() {
    int op = 0;;
    int vector[SIZE];
    int vectorAux[SIZE];
    readVector(SIZE, vector);
    printf("Vetor DESORNEDADO: ");
    printVector(SIZE, vector);

    do {
        op = menuDeOrdenacao();
        switch(op) {
            case 1:
                copiaVetor(vector, vectorAux);
                bubbleSortRecursive(SIZE, vectorAux);
                printf("Vetor DESORNEDADO: ");
                printVector(SIZE, vector);
                printf("\nVetor ORDENADO.");
                printVector(SIZE, vectorAux);
                break;
            case 2:
                copiaVetor(vector, vectorAux);
                insertionSort(SIZE, vectorAux);
                printf("Vetor DESORNEDADO: ");
                printVector(SIZE, vector);
                printf("\nVetor ORDENADO.");
                printVector(SIZE, vectorAux);
                break;
            case 3:
                copiaVetor(vector, vectorAux);
                seletionSort(SIZE, vectorAux);
                printf("Vetor DESORNEDADO: ");
                printVector(SIZE, vector);
                printf("\nVetor ORDENADO.");
                printVector(SIZE, vectorAux);
                break;
            case 4:
                copiaVetor(vector, vectorAux);
                quickSort(SIZE, vectorAux);
                printf("Vetor DESORNEDADO: ");
                printVector(SIZE, vector);
                printf("\nVetor ORDENADO.");
                printVector(SIZE, vectorAux);
                break;
            case 5:
                menuPrincipal();
        }
    } while(op!=5);
}

void copiaVetor(int *vectorA, int *vectorB) {
    int i;
    for (i = 0; i < SIZE; i++) {
        vectorB[i] = vectorA[i];
    }
}

int menuDeCadastro() {
    int op = 0;
    printf("MENU DE CADASTRO:\n");
    printf("DIGITE 1 - PARA INSERIR ALUNOS\n");
    printf("DIGITE 2 - PARA INSERIR FACILITADORES\n");
    printf("DIGITE 3 - PARA INSERIR MATERIAS\n");
    printf("DIGITE 4 - PARA LISTA DE ALUNOS\n");
    printf("DIGITE 5 - PARA LISTA DE FACILITADORES\n");
    printf("DIGITE 6 - PARA LISTA DE MATERIAS\n");
    printf("DIGITE 7 - PARA REMOVER ALUNO\n");
    printf("DIGITE 8 - PARA REMOVER FACILITADOR\n");
    printf("DIGITE 9 - PARA REMOVER MATERIAS\n");
    printf("DIGITE 0 - PARA SAIR\n");
    printf("ENTRE COM SUA OPCAO: ");
    scanf("%d", &op);

    return op;
}

void menuCadastro() {
    int opcao = 0;
    ListaDeAlunos *listaDeAlunos = criaListaDeAlunos();
    ListaDeFacilitadores *listaDeFacilitadores = criaListaDeFacilitadores();
    ListaDeMaterias *listaDeMaterias = criaListaDeMaterias();
    char nome[80];
    char facilitador[80];
    char materia[80];
    do {
        opcao = menuDeCadastro();
        switch(opcao) {
            case 1:
                listaDeAlunos = insereNaListaDeAlunos(listaDeAlunos);
                break;

            case 2:
                listaDeFacilitadores = insereNaListaDeFacilitadores(listaDeFacilitadores);
                break;

            case 3:
                listaDeMaterias = insereNaListaDeMaterias(listaDeMaterias);
                break;

            case 4:
                imprimeListaDeAlunos(listaDeAlunos);
                break;

            case 5:
                imprimeListaDeFacilitadores(listaDeFacilitadores);
                break;

            case 6:
                imprimeListaDeMaterias(listaDeMaterias);
                break;
            case 7:
                printf("Entre com o aluno a ser retirado: ");
                scanf("%79[^\n]", &nome);
                retiraDaListaDeAlunos(listaDeAlunos, nome);
                break;
            case 8:
                printf("Entre com o facilitador a ser retirado: ");
                scanf("%79[^\n]", &facilitador);
                retiraDaListaDeAlunos(listaDeAlunos, facilitador);

                break;
            case 9:
                printf("Entre com o aluno a ser retirado: ");
                scanf("%79[^\n]", &materia);
                retiraDaListaDeAlunos(listaDeAlunos, materia);

                break;
            case 0:
                exit(1);
                break;

        }
    } while(opcao!=0);

}



//------------Lista 8----------------------------------->

void addAlunoAFila(){
    addQueue(hotcat,clock);
    alunosFila++;
    if(alunosFila>maxFila) maxFila=alunosFila;
    printf("\n entrou... %d segundos, alunos na fila: %d", clock, alunosFila);
}

void remAlunoDaFila(int quantTio){
    int cont;
    int tempoEntrada;
    for(cont=0;cont<quantTio;cont++){
        if(!isEmpty(hotcat)){
            tempoEntrada = remQueue(hotcat);
            somaTempoEspera += clock - tempoEntrada;
            alunosFila--;
            printf("\n   saiu... %d segundos, alunos na fila: %d", clock, alunosFila);
        }
    }
}

void antesDistribuicao(tqueue* q){
    hotcat = createQueue();
    for(clock;clock<=900;clock+=20,id++){
        addAlunoAFila();
    }
    for(clock;clock<=1500;clock+=10,id++){
        addAlunoAFila();
    }
    for(clock;clock<=1800;clock+=5,id++){
        addAlunoAFila();
    }
}

void depoisDistribuicao(tqueue* q, int quantTio){
    int insert=clock;
    int del=clock;

    for(clock;clock<=2400;clock++){
        if(clock==del+4){
            remAlunoDaFila(quantTio);
            del=clock;
        }
        if(clock==insert+10){
            addAlunoAFila();
            insert=clock;
            id++;
        }
    }
    for(clock;clock<=3000;clock++){
        if(clock==del+4){
            remAlunoDaFila(quantTio);
            del=clock;
        }
        if(clock==insert+20){
            addAlunoAFila();
            insert=clock;
            id++;
        }
    }
    for(clock;clock<=3600;clock++){
        if(clock==del+4){
            remAlunoDaFila(quantTio);
            del=clock;
        }
        if(clock==insert+30){
            addAlunoAFila();
            insert=clock;
            id++;
        }
    }
}

void lista8(){
    antesDistribuicao(hotcat);
    depoisDistribuicao(hotcat, 5);
    printf("\n\n\nTempo medio de espera: %d \nTotal de atendidos: %d\nNumero Maximo de alunos na fila: %d\n\n", somaTempoEspera/id, id, maxFila);
}

