#include <stdio.h>


int mainQuestao1(){


	int lista[100];
	int dimensao, i;


	printf("Digite a dimensão, no máximo 100:");
	scanf("%d", dimensao);
	for(i = 0; i < dimensao; i++){
		printf("Digite o elemento %d\n", i);
		scanf("%d", lista[i]);
		if(lista[i] >= 256)
			printf("Digite valores menores que 256\n");
	}






	return 0;
}

int main(){
	int questao;


	do{
		printf("Digite um número entre 0 e 5 para escolher uma questão ou 6 para sair.");
		scanf("%d", &questao);

		switch(questao){
			case 1:
				mainQuestao1();
				break;
			default:
				print("Questão não encontrada.");
				break;
		}

	}while(questao != 6);

	printf("Teste");
	return 0;
}
