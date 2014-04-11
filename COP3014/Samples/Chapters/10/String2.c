/*
   String2.c
   Jim Lewis
   Cop 3014
*/
#include <stdio.h>

int main()
{
    char name[8] = "Julie"; 
    printf("name is %s.\n", name);
    int i;
    for(i=0; i<8; i++)
    {
        printf("[%i] %c - %d\n", i, name[i], name[i]);
    }
    name[3] = '\0';
    printf("name is %s.\n", name);
    for(i=0; i<8; i++)
    {
        printf("[%i] %c - %d\n", i, name[i], name[i]);
    }

    return 0;
}

/* OUTPUT
name is Julie.
[0] J - 74
[1] u - 117
[2] l - 108
[3] i - 105
[4] e - 101
[5]  - 0
[6]  - 0
[7]  - 0
name is Jul.
[0] J - 74
[1] u - 117
[2] l - 108
[3]  - 0
[4] e - 101
[5]  - 0
[6]  - 0
[7]  - 0
*/
