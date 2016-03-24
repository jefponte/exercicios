#ifndef FILA_H
#define FILA_H



struct lista {

	int info;
	struct lista *proximo;

};
typedef struct lista Lista;


typedef struct fila {
	Lista*inicio;
	Lista*fim;

} Fila;



void printHora(int intTempo);
Fila* filaCria();
void filaInsere(Fila *fila, int conteudo);
int filaVazia(Fila *fila);
float filaRetira(Fila *fila);
void filaImprime(Fila *fila);
void mostrarCliente(Lista *lista);

#endif /* FILA_H */
