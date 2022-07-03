#include <stdio.h>

int main()
{
    char op;
    int x, y;
    printf("Enter the First Number: ");
    scanf("%d", &x);
    printf("\nEnter the Second Number: ");
    scanf("%d", &y);
    getchar(); // eats the buffered character '\n'
    printf("\nEnter the Operator: ");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("\nAddition of %d and %d is : %d\n", x, y, x + y);
        break;
    case '-':
        printf("\nSubtraction of %d and %d is : %d\n", x, y, x - y);
        break;
    case 'x':
        printf("\nMultiplication of %d and %d is : %d\n", x, y, x * y);
        break;
    case '/':
        printf("\nDivision of %d and %d is : %0.2f\n", x, y, x * 1.0 / y);
        break;
    default:
        printf("\nPlease Enter a valid Operator ==> + , / , - , x\n");
    }
}