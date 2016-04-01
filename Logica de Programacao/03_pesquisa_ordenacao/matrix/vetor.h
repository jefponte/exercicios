#ifndef VETOR_H
#define VETOR_H

#define FALSE 0
#define TRUE !FALSE

typedef struct {
    int *ptr;
    int numberOfElements;
} Vector;

int allocateVector(Vector *vet);
int returnNumberOfCol(Vector *vet);
void createVector(Vector *vetA, Vector *vetB);
int returnNumberColOfIndexPair(Vector *vet);
void createVectorWithIndexPair(Vector *vetA, Vector *vetB);
void createVectorStartingTwoVector(Vector *vetA, Vector *vetB, Vector *vetC);
void releaseVector(Vector *vet);

#endif
