#ifndef PONTOR3_H
#define PONTOR3_H
#define FALSE 0
#define TRUE !FALSE



/*TAD: Ponto(x, y)*/
/*Tipo exportado*/
typedef struct pontor3{
    float x;
    float y;
    float z;
}Pontor3;
/*Funções exportadas */

/*Função cria
**Aloca e retorna um ponto com coordenadas (x, y)
*/

Pontor3* ptor3_cria(float x, float y, float z);


/*Função libera
**libera memória de um ponto previamente criado
*/

//void pto_libera(Ponto* p);

/*Função acessa
**retorna os valores das coordenadas de um ponto
*/

//void pto_acessa(Ponto* p, float* x, float* y, float*z);


/*Função atribui
**Atribui novos valores as coordenadas de um ponto
*/

//void pto_atribui(Ponto* p, float x, float y);

/*Função distancia
**Retorna a distância entre dois pontos
*/

//float pto_distancia(Ponto* p1, Ponto* p2);

/*
**mostra as coordenadas de um ponto com printf
*/
void ptor3_mostra(Pontor3* p);
/*
**Devove um ponteiro para um novo ponto que coorresponde a soma dos dois enviados por parametro.
*/
//void pto_soma(Ponto* p1, Ponto* p2, Ponto* resultado);
/*
**Devove um ponteiro para um novo ponto que coorresponde a subtracao dos dois enviados por parametro.
*/
//void pto_subtrai(Ponto* p1, Ponto* p2, Ponto* resultado);
/*
**Vai exibir com printf as coordenadas polares de um ponto, ou seja, r-> distancia do ponto até a origem.
**e Q o angulo formado por uma reta trassada da origem até o ponto com o eixo X
*/
//void pto_mostraCoordenadasPolares(Ponto* p);


#endif

