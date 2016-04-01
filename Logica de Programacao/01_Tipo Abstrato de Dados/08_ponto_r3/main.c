#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "pontor3.h"
int main()
{
    //Exercicio 1
    //Exercício: Escreva um programa que faça uso do TAD ponto definida no livro.
    /*
    */
    float distancia;
    Ponto* ponto1;
    Ponto* ponto2;
    Ponto* ponto3;
    float x;
    float y;
    Pontor3* pontoNoR3;

    ponto1 = pto_cria(0.0, 0.0);
    if(ponto1 == NULL){
        exit(1);
    }
    ponto2 = pto_cria(3.0, 0.0);
    if(ponto2 == NULL){
        exit(1);
    }
    ponto3 = pto_cria(2.1, 10.2);
    if(ponto3 == NULL){
        exit(1);
    }

    distancia = pto_distancia(ponto1, ponto2);
    printf("\nA distancia entre os pontos é:  %f\n", distancia);
    printf("Modificaremos o valor do ponto 2, acessaremos e buscaremos novamente sua distancia\n\n");
    pto_atribui(ponto2, 10.0, 0.0);
    pto_acessa(ponto2, &x, &y);
    printf("O novo valor do ponto 2 é (%f, %f)", x, y);
    distancia = pto_distancia(ponto1, ponto2);
    printf("\n\n\nA nova distancia é: %f", distancia);


    //Exercício: Acrescente novas operações ao TAD ponto, tais como soma e subtração de pontos.
    //adicionamos o soma e o mostra
    //vamos atribuir novos valores ao ponto1
    pto_atribui(ponto1, 10.0, 12.2);
    //somar ponto1 com ponto2 e atribuir no ponto3
    printf("Mudamos o valor de ponto1. ");
    pto_mostra(ponto1);

    pto_soma(ponto1, ponto2, ponto3);
    printf("Somando ponto1 e ponto2 e guardamos o valor no ponto3");
    pto_mostra(ponto3);
    printf("Subtraindo ponto3 de ponto1 e guardamos o valor no ponto2");

    pto_subtrai(ponto1, ponto3, ponto2);
    pto_mostra(ponto2);

    //Exercício: Acrescente novas operações ao TAD ponto, de tal forma que seja possível obter uma representação do ponto em coordenadas polares.
    pto_mostraCoordenadasPolares(ponto1);
    pto_mostraCoordenadasPolares(ponto2);

    pto_libera(ponto1);
    pto_libera(ponto2);
    pto_libera(ponto3);


    //Exercício: Implemente um novo TAD para representar pontos no R3.
    pontoNoR3 = ptor3_cria(10, 20, 30);
    ptor3_mostra(pontoNoR3);



    return 0;
}
