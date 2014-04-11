/*
	SwitchSample.c
	Jim Lewis
	COP 3014

	Notice that the 'D' option is empty. Why?
	Also, notice the default.
	You need not have a "default" in a switch. It's optional.
	Notice that the control variable, in this case letterGrade
	must be an integral type. (int, char, bool) It cannot be
	a double or float.
*/

#include <stdio.h>

int main ()
{
    char letterGrade;
    printf("Enter the letter grade you hope to get in this class -- ");
    scanf("%s", &letterGrade);
    switch( letterGrade )
    {
        case 'A' : printf("A's are great for the GPA - good luck!\n");
                 break;
        case 'B' : printf("B's are ok. \n");
                 break;
        case 'C' : printf("Got a C, I passed!\n");
                 break;
        case 'D' :
        case 'F' : printf("Oh no, do I have to do this again?\n");
                 break;
        default  : printf("Valid grades are A, B, C ,D and F.\n");
    }
    return 0;
}