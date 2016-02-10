#include <stdio.h>
#include <stdlib.h>
#include "caixa.h"



void lerCaixa(Caixa *ptr){
    printf("Digite a situacao:(x-Ocupado, *-apagado)\n");
    getchar();
    scanf("%c", &ptr->situacao);
    printf("Digite a data:(Dia mes ano)\n");
    scanf("%d", &ptr->data.dia);
    scanf("%d", &ptr->data.mes);
    scanf("%d", &ptr->data.ano);
    printf("Digite o tipo de lancamento:(D-Despesa e R-Receita)\n");
    getchar();
    scanf("%c", &ptr->tipo);
    printf("Digite o valor:(R$)\n ");
    scanf("%f", &ptr->valor);
}

void mostrarCaixa(Caixa *ptr){

    printf("Situação: %c\n", ptr->situacao);
    printf("Data %d/%d/%d\n", ptr->data.dia, ptr->data.mes, ptr->data.ano);


}

void lerVetor(Caixa *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("Ler caixa %d:\n", i);
        lerCaixa(ptr+i);
    }
}
void relatorio(Caixa *ptr, int dimensao){
    int i;
    int despesasJaneiro = 0;
    float saldo = 0;
    float valor = 0;
    float valorReceita = 0;
    float valorDespesa = 0;
    float valorAno = 0;
    float despesas = 0;
    float receitas = 0;


    for(i = 0; i < dimensao; i++){
        if((ptr+i)->data.mes <= 3 && (ptr+i)->data.ano <= 2005){
            if((ptr+i)->tipo == 'D')
                despesas += (ptr+i)->valor;
            if((ptr+i)->tipo == 'R')
                receitas += (ptr+i)->valor;

        }

        if((ptr+i)->data.ano == 2005){
            if((ptr+i)->tipo == 'R')
                valorReceita += (ptr+i)->valor;
            if((ptr+i)->tipo == 'D'){
                valorDespesa += (ptr+i)->valor;
                if((ptr+i)->data.mes == 1)
                    despesasJaneiro++;

            }
        }
    }
    valor = receitas - despesas;
    printf("A  quantidade de lançamentos do tipo despesa realizados no mês de janeiro de 2005: %d\n",despesasJaneiro);
    printf("A soma dos lançamentos de despesa %.2f, de receita %.2f realizados no ano de 2005\n", valorDespesa, valorReceita);
    printf("Saldo de janeiro de 2005: %.2f\n", valor);


}

