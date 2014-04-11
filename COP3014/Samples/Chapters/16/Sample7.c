/*
 * Sample7.c
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
    int num, count = 0;

    if((in = fopen("d.txt", "r")) == NULL)
    {
        fprintf(stderr, "Cannot open input file - exiting!\n");
        exit(1);
    }
	
    if((out = fopen("d2.txt", "w")) == NULL)
    {
        fprintf(stderr, "Cannot open output file - exiting!\n");
        exit(1);
    }

    // NOTICE: reading with the scanner!!
    // Keep reading integers until end of file.
    // Write the integers to the out file with a message and count.
    fscanf(in, "%d", &num);
    while( ! feof(in) )
    { 
        fprintf(out, "Num %d = %d\n", ++count, num );
        fscanf(in, "%d", &num);
    }
	
    fclose(in);
    fclose(out);

    return 0;
}

/*
NOTE: Input file contains:

286  53
82  95
14  334
82

Output file contains:

Num 1 = 286
Num 2 = 53
Num 3 = 82
Num 4 = 95
Num 5 = 14
Num 6 = 334
Num 7 = 82

*/
