#ifndef BINFILE_H
#define BINFILE_H
#define MAX 4
#define FALSE 0
#define TRUE  !FALSE

#pragma pack(1);


typedef struct
{
	char nome[80];
	int id;
	char gender;
	double ira;


}Student;


void readStudent(Student *ptr);
void showStudent(const Student *ptr);
void readVector(Student *ptr, int dim);
int recordVector(const char *filename, Student *ptr, int dim);
int loadVector(const char *filename, Student *ptr, int dim);
void showVector(Student *ptr, int dim);

#endif //BINFILE_H
