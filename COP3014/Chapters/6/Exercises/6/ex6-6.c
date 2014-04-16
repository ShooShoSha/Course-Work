#include <stdio.h>

int main(void)
{
    int number, digit, rebmun = 0;
    
    printf("Enter your number to reverse: ");
    scanf("%i", &number);   
    
    if(0 > number)
    {
        printf("negative ");
        number *= -1;
    }
    
    do
    {
        rebmun += number % 10;
        rebmun *= 10;
        number /= 10;
    } while(number);
    rebmun /= 10;
    
    do
    {
        digit = rebmun % 10;
        rebmun /= 10;
    
        switch(digit)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                break;
        }
    } while(rebmun);
    printf("\n");
        
    return 0;
}
