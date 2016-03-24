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



#endif /* FILA_H */
