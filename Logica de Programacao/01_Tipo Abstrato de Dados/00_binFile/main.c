#include <stdio.h>
#include <stdlib.h>
#include "binFile.h"

int main(int argc, char **argv) {
	Student student[MAX];

	//readStudent(student);
	//showStudent(student);

	//readVector(student, MAX);
	//recordVector("student.bin", student, MAX);
	loadVector("student.bin", student, MAX);
	showVector(student, MAX);
	return 0;
}
