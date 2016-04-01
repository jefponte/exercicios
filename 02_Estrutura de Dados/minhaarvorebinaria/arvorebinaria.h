#ifndef ARVOREBINARIA
#define ARVOREBINARIA

//TAD DE ARVORE.C

typedef struct noDaArvore {
    int elemento;
    struct noDaArvore * sad;
    struct noDaArvore * sae;
} NoDaArvore;

NoDaArvore * criaArvoreVazia();
NoDaArvore * criaArvore(int informacao, NoDaArvore *sae , NoDaArvore *sad);
void imprimeArvore(NoDaArvore *arvore);
void insereNaArvore(int informacao, NoDaArvore *arvore)


#endif
