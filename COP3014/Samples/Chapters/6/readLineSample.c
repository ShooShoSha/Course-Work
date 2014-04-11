/*
 * readLineSample.c
 * Jim Lewis
 * Cop 3014
 */
#include <stdio.h>

int main()
{
    int num;
    char reply, trash;
	
    do
    {
        printf("Enter a number -- ");
        scanf("%d", &num);
        printf("The number was %d\n", num);
		
        // This loop reads characters until it finds a newline
        // character. The input buffer is then empty!
        do
        {
            trash = getchar();
            //printf("Trash = %d\n", trash);
        }while(trash != '\n');
		
		
        printf("Would you like to enter another number? (y or n) ");
        scanf("%c", &reply);
        //printf("reply = %c\n", reply);
    }while(reply == 'y' || reply == 'Y');
	
    return 0;
}



