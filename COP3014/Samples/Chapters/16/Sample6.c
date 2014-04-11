/*
 * Sample6.c
 * Using files and Streams
 * Jim Lewis
 * Cop 3014
 */

#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 80

int main()
{
    FILE *in, *out;
    char buffer[LINE_LENGTH+1];
    char infilename[40];
    char outfilename[40];

    printf("Please enter an input file name -- ");
    scanf("%s", infilename);
    printf("Please enter an output file name -- ");
    scanf("%s", outfilename);
   
    if((in = fopen(infilename, "r")) == NULL)
    {
        // NOTICE use of stderr for the FILE *
        fprintf(stderr, "Cannot open input file - exiting!\n");
        exit(1);
    }
   
    if((out = fopen(outfilename, "w")) == NULL)
    {
        fprintf(stderr, "Cannot open output file - exiting!\n");
        exit(1);
    }

    // NOTICE: this uses the function feof()
    // NOTICE: first read occurs before the loop. Why?
    fgets(buffer, LINE_LENGTH, in);
    int i=1;
    while( ! feof(in) )
    { 
        printf(" - %s", buffer);
        fputs(buffer, out);
        fgets(buffer, LINE_LENGTH, in);
    }
   
    fclose(in);
    fclose(out);

    return 0;
}
