#include <stdio.h>

int main(void)
{
    double accumulator = 0; //Set to zero to eliminate garbage
    float operand;
    char operator;
    
    printf("Begin calculations\n");
    do
    {
        scanf("%f %c", &operand, &operator);
        
        switch(operator)
        {
            case '+':
                accumulator += operand;
                break;
            case '-':
                accumulator -= operand;
                break;
            case '*':
                accumulator *= operand;
                break;
            case '/':
                if(operand)
                    accumulator /= operand;
                else
                    printf("Division by zero.\n");
                break;
            case 'S':
                accumulator = operand;
                break;
            case 'E':
                break;
            default:
                printf("Unknown operator.\n");
                break;
        }
        
        printf("= %.3f\n", accumulator);
    } while('E' != operator);
    
    printf("End calculations\n");
    
    return 0;
}
