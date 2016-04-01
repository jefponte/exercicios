#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz {
    int linhas;
    int colunas;
    int **ponteiro;

} Matriz;

void exibeElementos(Matriz *mat);
void lerElementos(Matriz *mat);
void lerDimensao(Matriz *mat);
int alocaMemoria(Matriz *mat);




#endif

