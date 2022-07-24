#include <stdio.h>
int main()
{
    int num;
    int integer = 1;
    int check = 1;
    printf("\nPlease Enter the number: ");
    scanf("%d", &num);
    while (1)
    {
        integer++;
        check = check + integer;
        if (check == num)
        {
            printf("\nThe Number is Perfect!!\n");
            break;
        }
        else if (check > num)
        {
            printf("\nThe Number is Not Perfect!!\n");
            break;
        }
    }
    // 1+2 = 3
    // 1+2+3 = 6
    // 1+2+3+4 = 10
    // 1+2+3+4+5 = 15
    // 1+2+3+4+5+6 = 21
    // 1+2+3+4+5+6+7 = 28
    // 1+2+3+4+5+6+7+8= 36
}