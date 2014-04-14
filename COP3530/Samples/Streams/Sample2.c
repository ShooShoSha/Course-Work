/*
 * Sample2.c
 * Using files and Streams
 * Jim Lewis
 * Cop 3014
 */

#include <stdio.h>

int main()
{
    FILE *myFile;
    myFile = fopen("junk", "w");
    fprintf(myFile, "Hello world\n");
    fprintf(myFile, "All done ... goodbye.\n");
    fclose(myFile);

    return 0;
}
