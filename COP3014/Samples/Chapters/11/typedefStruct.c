/*
 * typedefStruct.c
 * Jim Lewis
*/

#include <stdio.h>
#include <string.h>

// Be sure you understand how new "data types" are defined
// and later used.

typedef char NameT[30];

typedef struct
{
    NameT first;
    NameT last;
    int age;
    double gpa;
} StudentT;

// function prototypes
StudentT getStudent(void);
void displayStudent(StudentT);

int main()
{
    // now declare three variables as type student
    StudentT s1, s2, s3;
    s1 = getStudent();
    s2 = getStudent();
    displayStudent(s1);
    displayStudent(s2);
    return 0;
}

// creates a student struct and initializes it
// returns a copy of that struct
StudentT getStudent()
{
    StudentT temp;
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

// displays the student
void displayStudent(StudentT theStudent)
{
    printf("-------------\n");
    printf("  Student \n");
    printf("-------------\n");
    printf("%s, %s\n", theStudent.last, theStudent.first);
    printf("%d\n", theStudent.age);
    printf("%4.2lf\n", theStudent.gpa);
}



