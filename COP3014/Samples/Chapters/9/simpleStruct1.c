/*
 * simpleStruct1.c
 * Jim Lewis
 * cop 3014 Sample
*/

#include <stdio.h>

int main(void)
{
    // Notice the semi-colon after this definition!
    struct Scores
    {
        int id;
        double exam1;
        double exam2;
        double exam3;
    };

    struct Scores scores1;
    printf("enter id - ");
    scanf("%i", &scores1.id);
    scores1.exam1 = 100.0;
    scores1.exam2 = 88.0;
    scores1.exam3 = 92.0;
    printf("id = %i, exam1 = %5.1lf,", scores1.id, scores1.exam1);
    printf(" exam2 = %5.1lf, exam3 = %5.1lf\n",scores1.exam2, scores1.exam3);
    return 0;
}

