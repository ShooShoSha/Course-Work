/*
    Pointer3.c
    Jim Lewis
    Cop 3014
*/
#include <stdio.h>

int main()
{
    int i, nums[4] = { 8, 11, 3, 9 };
    int *ptr;
    ptr = nums;
	
    for(i=0; i<4; i++)
        printf("Nums[%i] = %i\n", i, nums[i]);
	
    for(i=0; i<4; i++)
    {
        printf("Nums[%i] = %i\n", i, *ptr);
        ptr++;
    }
	
    return 0;
}

/* OUTPUT
Nums[0] = 8
Nums[1] = 11
Nums[2] = 3
Nums[3] = 9
Nums[0] = 8
Nums[1] = 11
Nums[2] = 3
Nums[3] = 9
*/