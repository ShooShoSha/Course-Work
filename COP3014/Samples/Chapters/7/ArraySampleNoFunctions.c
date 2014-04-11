/*
 *  ArraySample.c
 *  
 *  Class sample for cop 3014
 *  
 *  This program does several operations using parallel arrays.
 *    - It fills two arrays with student ID's and test scores.
 *    - It finds the high score and students with that score.
 *    - It calculates the average score for all students.
 *    - It searches for one specific student based on ID.
 *
 *    Notice, the search assumes the id is valid.
 *
 */
#include <stdio.h>

#define SIZE 4

int main()
{
    int ids[SIZE], i, id;
    double scores[SIZE], high = 0.0;

    // fill both arrays and find high score
    // ------------------------------------
    for( i=0; i<SIZE; i++ )
    {
        printf("Enter student's id --> \n");
        scanf("%d", &ids[i]);
        printf("Enter student's score --> \n");
        scanf("%lf", &scores[i]);
        if( scores[i] > high ) high = scores[i];
    }

    // find students with high score
    // -----------------------------
    printf("High score was %5.1lf by ID : ", high);
    for( i=0; i<SIZE; i++ )
    {
        if( scores[i] == high ) 
            printf("\t %d\n", ids[i]);
    }

    // calc and print the average score
    // --------------------------------
    double total = 0.0;
    for( i=0; i<SIZE; i++ )
    {
        total += scores[i];
    }
    printf("Average test score = %5.1lf\n", total/SIZE);

    // find and display score for one specific student
    // -----------------------------------------------
    printf("Enter id of desired student --> ");
    scanf("%d", &id);
    i = 0;
    int found = 0;
    while( !found )
    {
        if( ids[i] == id ) found = 1;
        else i++;
    }
    printf("Score for student # %d is %5.1lf\n", id, scores[i]);

    return 0;
}





