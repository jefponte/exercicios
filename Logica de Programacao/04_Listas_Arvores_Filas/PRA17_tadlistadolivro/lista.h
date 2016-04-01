#ifndef LISTA_H
#define LISTA_H
#define FALSE 0
#define TRUE !FALSE

typedef struct lista{
    int info;
    struct lista* prox;

}Lista;
Lista* lst_cria(void);
Lista* lst_insere(Lista* l, int i);
Lista* lst_insere_na_calda(Lista* l, int v);
int lst_vazia(Lista* l);
Lista* lst_busca(Lista* l, int v);
Lista* lst_retira(Lista* l, int v);
void lst_libera(Lista* l);
void lst_imprime(Lista* l);



#endif






