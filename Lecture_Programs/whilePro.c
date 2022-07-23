#include <stdio.h>

int main()
{
    int x, y;
    char op;
    printf("Please Enter the Operator : ");
    scanf("%c", &op);

    while ((op != 'q') && (op != 'Q'))
    {
        printf("Please Enter the 1st Operand: ");
        scanf("%d", &x);
        printf("Please Enter the 2nd Operand: ");
        scanf("%d", &y);

        switch (op)
        {
        case '+':
            printf("Addition of %d and %d is  %d", x, y, x + y);
            break;
        case '-':
            printf("Substraction of %d and %d is  %d", x, y, x - y);
            break;
        case '/':
            printf("Division of %d and %d is  %.2f", x, y, x * (1.0) / y);
            break;
        case 'x':
            printf("Multiplication of %d and %d is  %d", x, y, x * y);
            break;
        case '%':
            printf("Modules of %d and %d is  %d", x, y, x % y);
            break;
        default:
            printf("Please Enter a Valid Operator + , x , - , / , %%  OR Quit (q)");
            break;
        }
        getchar();
        printf("\nPlease Enter the Operator: ");
        scanf("%c", &op);
    }
}