/*
 * dynamicMemory4.c
 * Jim Lewis
 * Cop 3530 Sample
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY_SIZE 10

typedef char NameT[30];

typedef struct
{
    NameT first;
    NameT last;
    int age;
    double gpa;
} studentT;

// function prototypes
void getStudent(studentT *);
void displayStudent(studentT *);

int main()
{
    studentT *students; 
    printf("The size of one student struct is %lu bytes\n", sizeof(studentT));
    printf("The size of students is %lu bytes\n", sizeof(students));
    students = (studentT *) malloc(MAX_ARRAY_SIZE * sizeof(studentT));
    if(students == NULL) 
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    
    int i;
    studentT *temp;
    temp = students;
    for( i=0; i<5; i++ )
        getStudent(temp++);
    
    temp = students;
    for( i=0; i<5; i++ )
        displayStudent(temp++);
    
    return 0;
}

// inserts info for one student into the student struct
void getStudent(studentT *temp)
{	
    printf("Enter student's first name -- ");
    scanf("%s", temp->first);
    printf("Enter student's last name  -- ");
    scanf("%s", temp->last);
    printf("Enter student's age        -- ");
    scanf("%d", &(temp->age));
    printf("Enter student's gpa        -- ");
    scanf("%lf", &(temp->gpa));
}

// displays one student
void displayStudent(studentT *theStudent)
{
    printf("-------------\n");
    printf("  Student \n");
    printf("-------------\n");
    printf("%s, %s\n", theStudent->last, theStudent->first);
    printf("%d\n", theStudent->age);
    printf("%4.2lf\n", theStudent->gpa);
}



