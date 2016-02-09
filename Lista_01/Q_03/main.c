#include <stdio.h>
#include <stdlib.h>

#define CAMOCIM 1
#define MORRO_BRANCO 2
#define ARACATI 3
#define GUARAMIRANGA 4
#define OUTROS_LOCAIS 5

#define AUTOMOVEL 1
#define CAMINHAO 2
#define ONIBUS 3
#define OUTRO_VEICULO 4


typedef struct feriado{
    int destino;
    int veiculo;
}Feriado;

void lerLista(Feriado *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("Respostas motorista %d\n", i);
        lerFeriado(ptr+i);
    }

}

void lerFeriado(Feriado *ptr){
    printf("Qual o seu destino? \n");
    printf("1-  Camocim,\n");
    printf("2-  Morro Branco,\n");
    printf("3-  Aracati,\n");
    printf("4-Guaramiranga e 5- Outros Locais;\n");
    scanf("%d", &ptr->destino);
    printf("Qual o veículo? \n");
    printf("1-  Automóvel, 2-  Caminhão, 3-  Ônibus e 4-Outros Veículos");
    scanf("%d", &ptr->veiculo);


}

void relatorio(Feriado *ptr, int dimensao){
    int i, totalDeCaminhoes, caminhouesPraCamocim, totalDeOnibus;
    int destinoAracati = 0;
    totalDeCaminhoes = 0;
    totalDeOnibus = 0;

    for(i = 0; i < dimensao; i++){
        if((ptr+i)->destino == ARACATI)
            destinoAracati++;
        if((ptr+i)->veiculo == CAMINHAO){
            totalDeCaminhoes++;
            if((ptr+i)->destino == CAMOCIM)
                caminhouesPraCamocim++;


        }
        if((ptr+i)->veiculo == ONIBUS)
            totalDeOnibus++;
    }


}

int main()
{
    int dimensao;
	Feriado *listaDeRespostas;
	printf("Digite a dimensao:\n");
	scanf("%d", &dimensao);

	listaDeRespostas = (Feriado*)malloc(sizeof(Feriado)*dimensao);
	if(listaDeRespostas == NULL){
		printf("Momória insuficiente.");
		return 0;
	}
    lerLista(listaDeRespostas, dimensao);
    relatorio(listaDeRespostas, dimensao);


    return 0;
}
