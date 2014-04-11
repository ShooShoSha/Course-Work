/*
 * Pass2Darray.c
 * Jim Lewis
 * Cop 3014
 *
 * Demonstrates syntax for passing a multi-dimension array
 * 
 */
 
#include <stdio.h>

/*
 * Notice: must supply all but first dimension of array.
 * Must declare "c" before using it in dimension.
 */
void display(int, int c, int [][c]);

/*
 * Program execution starts at the first line in main
 */
int main(void)
{
    int matrix1[4][5] = { 0,  1,  2,  3,  4, 
                          5,  6,  7,  8,  9,
                         10, 11, 12, 13, 14,
                         15, 16, 17, 18, 19  };
                         
    printf("\nMatrix contains . . . \n");
    display(4, 5, matrix1);
	 
    return 0;
}

/*
 * Displays the matrix
 * NOTICE: must declare cols before using it for dimension in array "m".
 */
void display(int rows, int cols, int m[][cols])
{
    int r, c;
    for(r=0; r<rows; r++)
    {
        for(c=0; c<cols; c++)
            printf("%4i", m[r][c]);
        printf("\n");
    }
}

/*   OUTPUT

Matrix contains . . . 
   0   1   2   3   4
   5   6   7   8   9
  10  11  12  13  14
  15  16  17  18  19

*/


