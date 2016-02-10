#ifndef RENDA_H_INCLUDED
#define RENDA_H_INCLUDED

#define SOLTEIRO 0
#define CASADO 1
#define VIUVO 2
#define DIVORCIADO 3


typedef struct renda{
    char sexo;
    int estadoCivil;
    int idade;
    float rendaAnual;
}Renda;




void lerLista(Renda *ptr, int dimensao);
void mostraLista(Renda *ptr, int dimensao);
void lerRenda(Renda *ptr);
void mostrarRenda(Renda *ptr);
void relatorio(Renda *ptr, int dimensao);

#endif // RENDA_H_INCLUDED
