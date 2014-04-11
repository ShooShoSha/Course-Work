/*
 * structs.c
 * Jim Lewis
 * cop 3014 Sample
*/

#include "structs.h"

// creates a student struct and initializes it
// returns a copy of that struct
struct student getStudent()
{
	struct student temp = { "Helen", "Hayes", 87, 2.33 };
	return temp;
}

// displays the student
void displayStudent(struct student theStudent)
{
	printf("-------------\n");
	printf("  Student \n");
	printf("-------------\n");
	printf("%s, %s\n", theStudent.last, theStudent.first);
	printf("%d\n", theStudent.age);
	printf("%4.2lf\n", theStudent.gpa);
}


