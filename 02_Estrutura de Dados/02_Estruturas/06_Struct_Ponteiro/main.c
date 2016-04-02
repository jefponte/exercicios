#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
	int idade;
	int tamanho;
}Aluno;

int main(int argc, char **argv) {



	Aluno *ponteiroParaAluno;
	Aluno aluno;
	aluno.idade = 10;
	aluno.tamanho = 1000;
	ponteiroParaAluno = &aluno;



	ponteiroParaAluno = &aluno;
	printf("%d", ponteiroParaAluno->idade);





	return 0;
}
