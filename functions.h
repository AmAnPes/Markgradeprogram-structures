#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAX 1000

typedef struct {
    char name[50];
    int ISA1[3];
    int ISA2[3];
    int ISA3[3];
} Student;

void options(int p, Student students[], int n);
void inputinfo(Student students[], int n);
void printinfo(Student students[], int n);
void calculateinfo(Student students[], int n);

#endif
