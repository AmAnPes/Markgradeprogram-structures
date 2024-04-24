#include "functions.h"
#include <stdio.h>

void options(int p, Student students[], int n) 
{
    switch(p) 
    {
        case 1:
            printf("\t\t\t\tOption 1: INPUT STUDENT INFO\n");
            inputinfo(students, n);
            break;
        case 2:
            printf("\t\t\t\tOption 2: CHECK STUDENT INFO\n");
            printinfo(students, n);
            break;
        case 3:
            printf("\t\t\t\tOption 3: GRADE CALCULATION OF STUDENT NAD GRADE PRESENTATION\n");
            calculateinfo(students, n);
            break;
        default:
            printf("Invalid option\n");
            break;
    }
}

void inputinfo(Student students[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        
        printf("Enter marks for student %d in 3 subjects in ISA1: ", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &students[i].ISA1[j]);
        }

        printf("Enter marks for student %d in 3 subjects in ISA2: ", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &students[i].ISA2[j]);
        }

        printf("Enter marks for student %d in 3 subjects in ISA3: ", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &students[i].ISA3[j]);
        }
    }
}

void printinfo(Student students[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("\n");
        printf("Student %d Name: %s\n", i + 1, students[i].name);
        
        printf("ISA1 Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", students[i].ISA1[j]);
        }
        printf("\n");

        printf("ISA2 Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", students[i].ISA2[j]);
        }
        printf("\n");

        printf("ISA3 Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", students[i].ISA3[j]);
        }
        printf("\n");
    }
}

void calculateinfo(Student students[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        int l = 0, m = 0, p = 0; 

        printf("Student %d Name: %s\n", i + 1, students[i].name);
        
        for (int j = 0; j < 3; j++)
        {
            l += students[i].ISA1[j];
            m += students[i].ISA2[j];
            p += students[i].ISA3[j];
        }
        
        printf("Average ISA1 Marks: %d\n", l/3); 
        printf("Average ISA2 Marks: %d\n", m/3); 
        printf("Average ISA3 Marks: %d\n", p/3); 
        
        int avg = (l + m + p) / 9; 
        printf("Final grade: %d\n", avg);
    }
}
