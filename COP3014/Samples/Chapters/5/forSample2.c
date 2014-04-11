/*
 * Average of five numbers
 */

#include <stdio.h>

/*
 * Your program always begins executing in "main".
 */
int main()
{
    int count;
    double num, total = 0;
    for( count=0; count<5; count++ )
    {
        printf("Please enter a number -- ");
        scanf("%lf", &num);
        total = total + num;
    }
    printf("The total of the numbers was   %10.2lf\n", total);
    printf("The average of the numbers was %10.2lf\n", (total/5.0));
    return 0;
}
