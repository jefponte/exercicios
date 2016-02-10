#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int dia;
    int mes;
    int ano;

}Data;


typedef struct caixa{
    char situacao;
    Data data;
    char tipo;//Despesa D, Receita R
    float valor;
}Caixa;

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


int main()
{
    int dimensao;
    Caixa *historicoDeCaixa;
    printf("Digite a dimensao:\n");
    scanf("%d", &dimensao);

    historicoDeCaixa = (Caixa*)malloc(sizeof(Caixa)*dimensao);
    if(historicoDeCaixa == NULL)
    {
        printf("Memoria nao alocada\n");
        return 0;
    }
    lerCaixa(historicoDeCaixa);
    mostrarCaixa(historicoDeCaixa);


    return 0;
}
