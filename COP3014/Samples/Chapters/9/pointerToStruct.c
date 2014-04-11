/*
 * pointerToStruct.c
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
void displayStudent(struct student *);

int main()
{
	// create one struct and one pointer to a struct
	struct student s1 = { "Al", "Jones", 24, 3.33 };
	struct student *sptr;
	sptr = &s1;
	s1 = getStudent();
	printf("Name = %s, %s\n", s1.last, s1.first);

	// BEWARE: the parens are necessary around the pointer!! Why??
	printf("Age = %d\n", (*sptr).age);
	printf("GPA = %lf\n", (*sptr).gpa);

	// NOTE: here is a more friendly syntax
	// to accomplish the same thing as the two previous statements
	printf("Age = %d\n", sptr->age);
	printf("GPA = %lf\n", sptr->gpa);

	// Notice the pointer is being passed
	displayStudent( sptr );
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
	scanf("%lf", &temp.gpa);
	return temp;
}

// displays one student - Notice that a pointer is passed
// must dereference the pointer, sp
void displayStudent(struct student *sp)
{
	printf("-------------\n");
	printf("  Student \n");
	printf("-------------\n");
	printf("%s, %s\n", (*sp).last, (*sp).first);
	printf("%d\n", (*sp).age);
	printf("%4.2lf\n", (*sp).gpa);
}


