#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number, right_digit;
    bool is_negative;
    
    printf("Enter your number to reverse: ");
    scanf("%i", &number);
    
    is_negative = 0 > number;
    
    do
    {
        right_digit = number % 10;
        
        if(is_negative)
            printf("%i", -right_digit);
        else
            printf("%i", right_digit);
        number /= 10;
    } while (number);
    
    if(is_negative)
        printf("-\n");
    else
        printf("\n");
    
    return 0;
}
