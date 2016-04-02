#include <stdlib.h>
#include <stdio.h>
#include "arvorebinaria.h"

NoDaArvore *criaArvoreVazia() {
    return NULL;
}

/** Para construir �rvores n�o-vazias, podemos ter uma opera��o que cria um n�
raiz dadas as informa��es e as duas sub�vores, a da esquerda e a da direita. Essa
fun��o tem como valor de retorno o endere� do n� raiz criado.*/
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

