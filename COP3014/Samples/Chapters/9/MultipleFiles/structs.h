/*
 * structs.h
 * Jim Lewis
 * cop 3014 Sample
*/

#ifndef _structs_h
#define _structs_h

#include <stdio.h>
#include <string.h>

// this is the definition of the structure
// no memory is allocated by this definition
// there are no variables, no executable statements
struct student
{
	char first[30];
	char last[30];
	int age;
	double gpa;
};

// function prototypes
struct student getStudent(void);
void displayStudent(struct student);

#endif
