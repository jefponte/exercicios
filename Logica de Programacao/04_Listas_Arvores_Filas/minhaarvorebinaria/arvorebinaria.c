#include <stdlib.h>
#include <stdio.h>
#include "arvorebinaria.h"

NoDaArvore *criaArvoreVazia() {
    return NULL;
}

/** Para construir árvores não-vazias, podemos ter uma operação que cria um nó
raiz dadas as informações e as duas subávores, a da esquerda e a da direita. Essa
função tem como valor de retorno o endereç do nó raiz criado.*/
NoDaArvore * criaArvore(int informacao, NoDaArvore *sae, NoDaArvore *sad) {
    NoDaArvore * ptrArvoreRaiz = (NoDaArvore*)malloc(sizeof(NoDaArvore));

    ptrArvoreRaiz->elemento = informacao;
    ptrArvoreRaiz->sae = sae;
    ptrArvoreRaiz->sad = sad;
    return ptrArvoreRaiz;
}

void imprimeArvore(NoDaArvore *arvore) {
  if (arvore != NULL) {
     printf("%d\n", arvore->elemento);
     //imprimeArvore(arvore);
     imprimeArvore(arvore->sae);
     imprimeArvore(arvore->sad);
  }
}

/*void insereNaArvore(int informacao, NoDaArvore *arvore) {
    if(arvore == NULL) {
        arvore = criaArvore(informacao, NULL, NULL);
    }
    //if (informacao < arvore.elemento) {
    //    insereNaArvore(informacao, arvore->sae);
    //} else {
    //    insereNaArvore(informacao, arvore->sad);
    //}

}*/

