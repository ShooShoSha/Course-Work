/*
 *  SumTwoInts.c
 *  Jim Lewis
 *  cop 3014 Sample
 *  
 *  This program uses three functions.
 *  Be sure you can trace the flow when the program
 *      is executed.
 *  Also, you must understand how the parameters work
 *      along with the return values.
 */

#include <stdio.h>

/*
 * prototypes -- function declarations
 */ 
int getNumber(void);
int calcSum(int, int); // variable names not required in prototypes
void showResult(int);

/*
 * Program execution starts at the first line in main
 */
int main(void)
{
	int num1, num2, sum;
	num1 = getNumber();
	num2 = getNumber();
	sum = calcSum( num1, num2 );
	showResult( sum );
	// consider this alternative code!!
	// exactly what does it do??
	//showResult(calcSum( getNumber(), getNumber()));
	return 0;
}

/*
 * Implementation of getNumber
 */ 
int getNumber(void)
{
	int num;
	printf("Enter a number --> ");
	scanf("%i", &num);
	return num;
}

/*
 * Implementation of calcSum
 */ 
int calcSum(int x, int y)
{
	return x + y; // does calculation, then returns sum
}

/*
 * Implementation of showResult
 */ 
void showResult(int sum)
{
	printf("The sum is %i\n", sum);
}
