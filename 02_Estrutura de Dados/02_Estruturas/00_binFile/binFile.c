#include "binFile.h"
#include <stdio.h>
#include <stdlib.h>

void readStudent(Student *ptr)
{
	printf("Nome: ");
	scanf("%s", ptr->nome);
	printf("Id: ");
	scanf("%d", &ptr->id);
	printf("Gender: ");
	getchar();
	scanf("%c", &ptr->gender);
	printf("IRA:");
	scanf("%lf", &ptr->ira);

}
void showStudent(const Student *ptr)
{
	printf("Nome: %s \n", ptr->nome);
	printf("Id: %d \n", ptr->id);
	printf("Gender:%c\n", ptr->gender);
	printf("IRA:%lf\n", ptr->ira);
	printf("\n----------\n");



}
void readVector(Student *ptr, int dim)
{
	int i;
	for(i = 0; i< dim; i++){
		readStudent(ptr+i);
	}

}
void showVector(Student *ptr, int dim)
{
	int i;
	for(i = 0; i< dim; i++){
		showStudent(ptr+i);
	}

}
int recordVector(const char *filename, Student *ptr, int dim){

	FILE *output;

	if((output = fopen(filename, "ab")) == NULL){
		return FALSE;
	}

	fwrite((Student *)ptr, sizeof(Student), dim, output);
	fclose(output);
	return TRUE;

}


int loadVector(const char *filename, Student *ptr, int dim){

	FILE *input;

	if((input = fopen(filename, "rb")) == NULL){
		return FALSE;
	}

	fread((Student *)ptr, sizeof(Student), dim, input);
	fclose(input);

	return TRUE;

}
