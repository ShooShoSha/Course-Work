/*
 *  2DSampleNoFunctions.c
 *  
 *  Class sample for cop 3014
 *  
 *  This program uses a two dimensional array
 *  to store exam scores for four students, each 
 *  taking three exams.
 */
#include <stdio.h>

#define SIZE 4
#define STUDENT_COUNT 4
#define EXAM_COUNT 3

int main()
{
    double scores[STUDENT_COUNT][EXAM_COUNT];
    double total; 
    int student, exam;
    
    // get scores for all students, all exams
    for( student = 0; student < STUDENT_COUNT; student++ )
    {
        printf("\nProcessing student # %d\n", student + 1);;
        for( exam = 0; exam < EXAM_COUNT; exam++ )
        {
            printf("   - Enter score for exam # %d -- ", exam + 1);
            scanf("%lf", &scores[student][exam]);
        }
    }
    
    // display scores for all students, all exams
    printf("\n-----------------------------------\n");
    printf("Scores for all students, all exams.\n");
    printf("-----------------------------------");
    for( student = 0; student < STUDENT_COUNT; student++ )
    {
        printf("\nStudent number # %d - \t", student );
        for( exam = 0; exam < EXAM_COUNT; exam++ )
            printf("%5.2lf\t", scores[student][exam]);
    }
    
    // display averages for all exams
    printf("\n\n-----------------------\n");
    printf("Averages for all exams.\n");
    printf("-----------------------\n");
    for( exam = 0; exam < EXAM_COUNT; exam++ )
    {
        total = 0;
        for( student = 0; student < STUDENT_COUNT; student++ )
            total = total + scores[student][exam];
        printf("Average for exam %d = ", exam);
        printf("%5.2lf\n", total / (double)STUDENT_COUNT);
    }

    // display averages for all students
    printf("\n--------------------------\n");
    printf("Averages for all students.\n");
    printf("--------------------------\n");
    for( student = 0; student < STUDENT_COUNT; student++ )
    {
        total = 0;
        for( exam = 0; exam < EXAM_COUNT; exam++ )
            total = total + scores[student][exam];
        printf("Average for student %d = ", student);
        printf("%5.2lf\n", total / (double)EXAM_COUNT);
    }   
    
    return 0;
}


