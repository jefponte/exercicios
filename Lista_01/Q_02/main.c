#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
	char nome[100];
	char sexo;
	int producao;

}Funcionario;

void lerLista(Funcionario *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("Funcionario %d\n", i);
        lerFuncionario(ptr+i);
    }

}
void mostraLista(Funcionario *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("\n-----------------------------\n");
        printf("Funcionario %d\n", i);
        mostraFuncionario(ptr+i);
        printf("\n-----------------------------\n");

    }


}
void lerFuncionario(Funcionario *ptr){
	printf("Digite o nome:\n");
	scanf("%s", ptr->nome);
	printf("Digite a producao:\n");
	scanf("%d", &ptr->producao);
	printf("Digite o Sexo M ou F:\n");
    getchar();
    scanf("%c", &ptr->sexo);

}

void mostraFuncionario(Funcionario *ptr){
	printf("Nome: %s\n", ptr->nome);
	printf("Sexo: %c\n", ptr->sexo);
	printf("Producao:%d\n", ptr->producao);
}
void relatorios(Funcionario *ptr, int dimensao){

}

int main(void) {

	int dimensao, comando;
	Funcionario *listaDeFuncionarios;
	printf("Digite a dimensao:\n");
	scanf("%d", &dimensao);

	listaDeFuncionarios = (Funcionario*)malloc(sizeof(Funcionario)*dimensao);
	if(listaDeFuncionarios == NULL){
		printf("Momória insuficiente.");
		return 0;
	}
    lerLista(listaDeFuncionarios, dimensao);
    mostraLista(listaDeFuncionarios, dimensao);
    relatorios(listaDeFuncionarios, dimensao);
	return 0;
}
