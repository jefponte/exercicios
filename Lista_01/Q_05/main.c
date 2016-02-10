#include <stdio.h>
#include <stdlib.h>
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


void lerLista(Renda *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("Ler renda %d\n", i);
        lerRenda(ptr+i);
    }
}
void mostraLista(Renda *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("\n------------------------\n");
        printf("Renda %d\n", i);
        mostrarRenda(ptr+i);
        printf("\n------------------------\n");
    }

}

void lerRenda(Renda *ptr){
    printf("Digite o sexo M ou F:\n");
    getchar();
    scanf("%c", &ptr->sexo);
    printf("Estado Civil: 0- solteiro, 1- casado, 2- vi�vo e 3- divorciado:\n:");
    scanf("%d", &ptr->estadoCivil);
    printf("Idade em anos:\n");
    scanf("%d", &ptr->idade);
    printf("Renda Anual (R$):\n");
    scanf("%f", &ptr->rendaAnual);
}
void mostrarRenda(Renda *ptr){
        printf("Sexo: %c\n", ptr->sexo);
        printf("Estado civil ");
        switch(ptr->estadoCivil){
            case SOLTEIRO:
                printf("Solteiro\n");
            case CASADO:
                   printf("Casado\n");
                break;
                case VIUVO:
                    printf("Viuvo\n");
                break;
                case DIVORCIADO:
                   printf("Divorciado\n");
                default:
                    printf("\n");
            break;
        }
        printf("Idade: %d\n",ptr->idade);
        printf("Renda: %.2f\n", ptr->rendaAnual);
}


void relatorio(Renda *ptr, int dimensao){
    int i, homens, mulheres, solteiras, divorciados, aux;
    homens = 0;
    mulheres = 0;
    solteiras = 0;
    divorciados = 0;
    float percentualDivorciados = 0;
    aux = 0;
    float media = 0;
    for(i = 0; i < dimensao; i++){
        if(ptr->sexo == 'M'){
            homens++;
            if(ptr->estadoCivil == DIVORCIADO)
                divorciados++;
        }
        else if(ptr->sexo == 'F'){
            mulheres++;
            if(ptr->estadoCivil == SOLTEIRO)
                solteiras++;
            else if(ptr->estadoCivil == CASADO && ptr->idade >= 20 & ptr->idade <= 40){
                media += ptr->rendaAnual;
                aux++;
            }


        }


    }

    if(aux)
        media = (float)media/(float)aux;

    printf("Quantidade de entrevistados %d, %d do sexo feminino e %d do sexo masculino.\n", homens+mulheres, mulheres, homens);
    printf("Mulheres solteiras: %d.\n", solteiras);
    if(homens)
        percentualDivorciados = (float)divorciados/(float)homens*100;
    printf("A porcentagem dos homens divorciados em rela��o ao total de homens %.2f.\n", percentualDivorciados);
    printf("A  renda anual m�dia das mulheres casadas com idade entre 20 e 40 an os (inclusive) %.2f\n", media);

}
int main()
{
    int dimensao;
    Renda *listaDeRendas;
    printf("Digite a dimensao: \n");
    scanf("%d", &dimensao);

    listaDeRendas = malloc(sizeof(Renda)*dimensao);
    if(listaDeRendas == NULL){
        printf("Memoria insuficiente:\n");
        return 0;
    }
    lerLista(listaDeRendas, dimensao);
    mostraLista(listaDeRendas, dimensao);

    return 0;
}
