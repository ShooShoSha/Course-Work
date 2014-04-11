/*
 * Sample4.c
 * Using files and Streams
 * Jim Lewis
 * Cop 3014
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARE FILE POINTERS
    FILE *inFile, *outFile;
    char infilename[40];
    char outfilename[40];
    int c;

    // GETTING FILE NAMES FROM THE USER
    printf("Please enter an input file name -- ");
    scanf("%s", infilename);
    printf("Please enter an output file name -- ");
    scanf("%s", outfilename);
    
    // OPEN INPUT FILE IN READ MODE
    inFile = fopen(infilename, "r");
    // TEST THAT OPEN SUCCEEDED
    if(inFile == NULL)
    {
        printf("Cannot open input file - exiting!\n");
        exit(1);
    }
    
    // OPEN OUTPUT FILE IN WRITE MODE
    // OPEN AND CHECK FOR FAILURE IN ONE STATEMENT
    if((outFile = fopen(outfilename, "w")) == NULL)
    {
        printf("Cannot open output file - exiting!\n");
        exit(1);
    }


    // NOTICE THAT getc() returns an int
    // EOF is defined in stdio.h
    while((c=fgetc(inFile)) != EOF) 
        fputc(c, outFile);
	
    // CLOSE ALL FILES
    fclose(inFile);
    fclose(outFile);

    return 0;
}
