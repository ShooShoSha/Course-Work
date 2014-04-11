/*
 * Sample5.c
 * Using files and Streams
 * Jim Lewis
 * Cop 3014
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *inFile, *outFile;
    int c;
	
// run this program from the command line like this,
// where fromfile is the name of the file to be copied
// and tofile is the name of the new file to be created.

//  $ ./a.out  fromfile  tofile

// NOTE: name of program will be the first argument
// the name of the fromfile will be the second argument
// and the name of the tofile will be the third argument.

    if( argc !=  3 )
    {
        printf("Incorrect number of arguments - exiting!\n");
        exit(1);
    }

    // JUST SO WE CAN SEE WHAT STRINGS WERE PASSED BY THE 
    // OPERATING SYSTEM TO OUR PROGRAM
    printf("first argument was  %s\n", argv[0]);
    printf("second argument was %s\n", argv[1]);
    printf("third argument was  %s\n", argv[2]);

    // open and error test the input file
    if((inFile = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open input file - exiting!\n");
        exit(1);
    }
    // Open and error test output file.
    if((outFile = fopen(argv[2], "w")) == NULL)
    {
        printf("Cannot open output file - exiting!\n");
        exit(1);
    }


    // Copying one byte at a time.
    while((c=getc(inFile)) != EOF) 
        putc(c, outFile);
	
    fclose(inFile);
    fclose(outFile);

    return 0;
}
