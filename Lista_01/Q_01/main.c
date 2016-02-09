#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct candidato{
	char nome[100];
	char sexo;
	int idade;
	char experiente;
}Candidato;

void lerLista(Candidato *ptr, int dimensao){



}
void lerCandidato(Candidato *ptr){
	printf("Digite o nome:\n");
	scanf("%s", ptr->nome);
	printf("Digite a idade:\n");
	scanf("%d", &ptr->idade);
	printf("Digite o Sexo M ou F:\n");
    getchar();
    scanf("%c", &ptr->sexo);
	printf("Experiencia S ou N:\n");
	getchar();
	scanf("%c", &ptr->experiente);

}

void mostraCandidato(Candidato *ptr){
	printf("Nome: %s\n", ptr->nome);
	printf("Sexo: %c\n", ptr->sexo);
	printf("Idade:%d\n", ptr->idade);
	printf("Experiencia:%c\n", ptr->experiente);

}

int main(void) {

	int dimensao;
	Candidato *listaDeCandidatos;
	printf("Digite a dimensao:\n");
	scanf("%d", &dimensao);

	listaDeCandidatos = (Candidato*)malloc(sizeof(Candidato)*dimensao);
	if(listaDeCandidatos == NULL){
		printf("Momória insuficiente.");
		return 0;
	}
	lerCandidato(listaDeCandidatos);
	printf("Mostrando: \n");
	mostraCandidato(listaDeCandidatos);






	return 0;
}
