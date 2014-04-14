/*
 * structs.c
 * Jim Lewis
 * cop 3014 Sample
*/

#include <stdio.h>
#include "structs.h"

int main()
{
	struct student s1, s2 = {"Sue", "Allen", 21, 2.98};
	struct student s3;
	s3 = getStudent();
	s1.age = 58;
	s1.gpa = 3.19;
	strcpy(s1.first, "Joe"); // strcpy is actually from chapt. 10
	strcpy(s1.last, "Smith");
	displayStudent(s1);
	displayStudent(s2);
	displayStudent(s3);
	return 0;
}




