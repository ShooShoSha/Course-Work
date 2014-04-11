/*
 * simpleStruct2.c
 * Jim Lewis
 * cop 3014 Sample
*/

#include <stdio.h>

// Notice the semi-colon after this definition!
struct Scores
{
    int id;
    double exam1;
    double exam2;
    double exam3;
};

// Prototype
void printScores(struct Scores s);

int main(void)
{
    struct Scores scores1;
    printf("enter id - ");
    scanf("%i", &scores1.id);
    scores1.exam1 = 100.0;
    scores1.exam2 = 88.0;
    scores1.exam3 = 93.0;
    printScores(scores1);
    return 0;
}

/*
 * This function  displays one set of scores. 
 */
void printScores(struct Scores s)
{
    printf("id = %i, exam1 = %5.1lf,", s.id, s.exam1);
    printf(" exam2 = %5.1lf, exam3 = %5.1lf\n", s.exam2, s.exam3);
}


