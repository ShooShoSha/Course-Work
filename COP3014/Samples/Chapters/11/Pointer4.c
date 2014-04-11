/*
    Pointer4.c
    Jim Lewis
    Cop 3014
*/
#include <stdio.h>

void getNums(int numbers[]);
void getNums2(int *numbers);

int main()
{
    int i, nums[4];
    int *ptr;
    ptr = nums;
	
    getNums(ptr);
    for(i=0; i<4; i++)
        printf("Nums[%i] = %i\n", i, nums[i]);
		
    getNums2(nums);
    for(i=0; i<4; i++)
    {
        printf("Nums[%i] = %i\n", i, *ptr);
        ptr++;
    }		
    return 0;
}

void getNums(int numbers[])
{
    int i;
    for(i=0; i<4; i++)
        numbers[i] = i*2;
}

void getNums2(int *numbers)
{
    int i;
    for(i=0; i<4; i++)
    {
        *numbers = i*3;
        numbers++;
    }
}

/* OUTPUT
Nums[0] = 0
Nums[1] = 2
Nums[2] = 4
Nums[3] = 6
Nums[0] = 0
Nums[1] = 3
Nums[2] = 6
Nums[3] = 9
*/
