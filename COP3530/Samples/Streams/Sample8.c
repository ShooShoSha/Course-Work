/*
 * Using files and Streams
 * Jim Lewis
 * Cop 3014
 */

#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 80

FILE *openFile(FILE *fp, char *fname, char *mode);
void readFile(FILE *fp1);
void closeFile(FILE *fp1);


int main()
{
    FILE *fp1;
    fp1 = openFile(fp1, "num.txt", "r");
    readFile(fp1);
    closeFile(fp1);    
    return 0;
}

FILE *openFile(FILE *fp, char *fname, char *mode)
{
    fp = fopen(fname, mode);
    if(fp == NULL)
    {
        fprintf(stderr, "Cannot open file %s for %s.\n", fname, mode);
        exit(1);
    }	
    fprintf(stderr, "opened %s in mode %s.\n", fname, mode);
    return fp;
}

void readFile(FILE *fp1)
{
    int num, count = 0;
    fscanf(fp1, "%d", &num);
    while( ! feof(fp1) )
    { 
        printf("Num %2d = %d\n", ++count, num);
        fscanf(fp1, "%d", &num);
    }	
}

void closeFile(FILE *fp1)
{
    fclose(fp1);

}

/*
 opened num.txt in mode r.
 Num  1 = 10
 Num  2 = 15
 Num  3 = 20
 Num  4 = 25
 Num  5 = 30
 Num  6 = 45
 Num  7 = 55
 Num  8 = 65
 Num  9 = 75
 Num 10 = 85
*/