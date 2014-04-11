/*
 * arrayOfStructs.c
 * Jim Lewis
 * cop 3014 Sample
*/

#include <stdio.h>
#include <string.h>

// this is the definition of the structure
// no memory is allocated by this definition
// there are no variables
struct student
{
	char first[30];
	char last[30];
	int age;
	double gpa;
};

struct student getStudent(void);
void displayStudent(struct student);

int main()
{
	// creates an  array that can hold 5 student structures
	// the memory is allocated for all 5
	struct student students[5];
	students[0] = getStudent();
	displayStudent(students[0]);
	printf("First name = %s\n", students[0].first);
	printf("GPA        = %lf\n", students[0].gpa);
	return 0;
}

// creates a student struct and initializes it
// returns a copy of that struct
struct student getStudent()
{
	struct student temp;
	printf("Enter student's first name -- ");
	scanf("%s", temp.first);
	printf("Enter student's last name  -- ");
	scanf("%s", temp.last);
	printf("Enter student's age        -- ");
	scanf("%d", &(temp.age));
	printf("Enter student's gpa        -- ");
	scanf("%lf", &(temp.gpa));
	return temp;
}

// displays one student
void displayStudent(struct student theStudent)
{
	printf("-------------\n");
	printf("  Student \n");
	printf("-------------\n");
	printf("%s, %s\n", theStudent.last, theStudent.first);
	printf("%d\n", theStudent.age);
	printf("%4.2lf\n", theStudent.gpa);
}


