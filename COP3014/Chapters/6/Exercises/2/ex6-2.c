#include <stdio.h>

int main(void)
{
    int value1, value2;
    
    printf("Enter two numbers: ");
    scanf("%i%i", &value1, &value2);
    
    if(value1 % value2)
        printf("%i is not evenly divisible by %i\n", value1, value2);
    else
        printf("%i is evenly divisible by %i\n", value1, value2);
    
    return 0;
}
