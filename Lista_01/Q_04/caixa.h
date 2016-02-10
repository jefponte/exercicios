#ifndef CAIXA_H_INCLUDED
#define CAIXA_H_INCLUDED


typedef struct data{
    int dia;
    int mes;
    int ano;

}Data;


typedef struct caixa{
    char situacao;
    Data data;
    char tipo;//Despesa D, Receita R
    float valor;
}Caixa;



void lerCaixa(Caixa *ptr);
void mostrarCaixa(Caixa *ptr);
void lerVetor(Caixa *ptr, int dimensao);
void relatorio(Caixa *ptr, int dimensao);


#endif // CAIXA_H_INCLUDED
