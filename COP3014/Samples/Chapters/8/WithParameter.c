/*
 *  WithParameter.c
 *  Jim Lewis
 *  cop 3014
 *
 *  Sample with three functions besides main.
 *  Try to identify:
 *      an example of a parameter.
 *      an example of a return value.
 *      an example of a local variable.
 */

#include <stdio.h>

/*
 * prototypes -- function declarations
 */ 
void sayHello();
int getAge();
void displayAge(int anAge); //variable name optional

/*
 * Program execution starts at the first line in main
 */
int main()
{
    int age;
    sayHello();  
    age = getAge();  
    displayAge(age);
    return 0;
}

/*
 * Implementation of sayHello
 */ 
void sayHello()
{
    printf("Hello there world.\n");
}

/*
 * Implementation of getAge
 */ 
int getAge()
{
    int yourAge;
    printf("Please enter your age --> ");
    scanf("%i", &yourAge);
    return yourAge; 
}

/*
 * Implementation of displayAge
 */ 
void displayAge(int anAge)
{
    printf("Wow, %i is really old\n", anAge);
}