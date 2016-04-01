#include <stdio.h>
#include <stdlib.h>
#include "arvorebinaria.h"

int main()
{
    NoDaArvore *arvore;
   // arvore = criaArvoreVazia();
    arvore = criaArvore(10, NULL, NULL);
    insereNaArvore(10, arvore);
    //insereNaArvore(20, arvore);
   // insereNaArvore(30,arvore);
    imprimeArvore(arvore);

}
