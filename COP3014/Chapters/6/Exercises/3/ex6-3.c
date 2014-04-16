#include <stdio.h>

int main(void)
{
    int value1, value2;
    
    printf("Enter two numbers: ");
    scanf("%i%i", &value1, &value2);
    
    if(value2)
        printf("%i / %i = %.3f\n", value1, value2, (float) value1 / value2);
    else
        printf("Division by zero.\n");
    
    return 0;
}
