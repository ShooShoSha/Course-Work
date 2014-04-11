/*
    Pointer5.c
    Jim Lewis
    Cop 3014
*/
#include <stdio.h>

void getNums(int numbers[]);
void displayNums(const int numbers[]);
void displayNums2(const int *numbers);

int main()
{
    int i, nums[4];
    int *ptr;
    ptr = nums;
	
    getNums(ptr);
    displayNums(nums);
    displayNums2(nums);    	
    return 0;
}

void getNums(int numbers[])
{
    int i;
    for(i=0; i<4; i++)
        numbers[i] = i*2;
}

void displayNums(const int numbers[])
{
    int i;
    //numbers[0] = 27; // illegal - const
    for(i=0; i<4; i++)
    {
        printf("Nums[%i] = %i\n", i, numbers[i]);
    }
}

void displayNums2(const int *numbers)
{
    int i;
    //*numbers = 27; // illegal - const
    for(i=0; i<4; i++, numbers++)
    {
        printf("Nums[%i] = %i\n", i, *numbers);
    }
    
}

/* OUTPUT
Nums[0] = 0
Nums[1] = 2
Nums[2] = 4
Nums[3] = 6
Nums[0] = 0
Nums[1] = 2
Nums[2] = 4
Nums[3] = 6
*/
