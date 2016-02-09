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
    int i;
    for(i = 0; i < dimensao; i++){
        printf("Candidato %d\n", i);
        lerCandidato(ptr+i);
    }

}
void mostraLista(Candidato *ptr, int dimensao){
    int i;
    for(i = 0; i < dimensao; i++){
        printf("\n-----------------------------\n");
        printf("Candidato %d\n", i);
        mostraCandidato(ptr+i);
        printf("\n-----------------------------\n");

    }


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
void relatorios(Candidato *ptr, int dimensao){
    int i, novinhasExperientes;
    int totalFeminino,totalMasculino, totalHomensVelhos;
    float percentualHomensVelhos;

    totalHomensVelhos = 0;
    totalMasculino = 0;
    totalFeminino = 0;
    novinhasExperientes = 0;
    for(i = 0; i < dimensao; i++){
        if(ptr->sexo == 'M'){
            totalMasculino++;
            if(ptr->idade > 45){
                totalHomensVelhos++;
            }

        }
        else if(ptr->sexo == 'F'){
            totalFeminino++;
            if(ptr->idade < 35 && ptr->experiente == 'S'){
                novinhasExperientes++;
            }
        }
    }




    printf("%d candidatos do sexo feminino e %d candidatos do sexo masculino.\n", totalFeminino, totalMasculino);
    printf("Percentual de homens com mais de 45 %d\n", totalHomensVelhos);




}

int main(void) {

	int dimensao, comando;
	Candidato *listaDeCandidatos;
	printf("Digite a dimensao:\n");
	scanf("%d", &dimensao);

	listaDeCandidatos = (Candidato*)malloc(sizeof(Candidato)*dimensao);
	if(listaDeCandidatos == NULL){
		printf("Momória insuficiente.");
		return 0;
	}
    lerLista(listaDeCandidatos, dimensao);
    mostraLista(listaDeCandidatos, dimensao);

    relatorios(listaDeCandidatos, dimensao);

	return 0;
}
