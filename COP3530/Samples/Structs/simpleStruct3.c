/*
 * simpleStruct3.c
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
struct Scores readScores();

int main(void)
{
    struct Scores scores1;
    scores1 = readScores();
    printScores(scores1);
    return 0;
}

/*
 * This function reads one set of scores. 
 */
struct Scores readScores()
{
    struct Scores t;
    printf("enter id - ");
    scanf("%i", &t.id);
    printf("enter score exam 1 - ");
    scanf("%lf", &t.exam1);
    printf("enter score exam 2 - ");
    scanf("%lf", &t.exam2);
    printf("enter score exam 3 - ");
    scanf("%lf", &t.exam3);
    return t;
}

/*
 * This function displays one set of scores. 
 */
void printScores(struct Scores s)
{
    printf("id = %i, exam1 = %5.1lf,", s.id, s.exam1);
    printf(" exam2 = %5.1lf, exam3 = %5.1lf\n", s.exam2, s.exam3);
}


