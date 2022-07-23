#include <stdio.h>
int main()
{
    int n, currentInt, min;
    int a = 0;
    printf("Please Enter the number of Integers to find the minimum: ");
    scanf("%d", &n);
    printf("Please Enter the First Integer %d : ", a + 1);
    scanf("%d", &currentInt);
    min = currentInt;
    a++;
    while (a < n)
    {
        printf("Please Enter another Integer %d : ", a + 1);
        scanf("%d", &currentInt);

        if (min > currentInt)
        {
            min = currentInt;
        }
        a++;
    }
    printf("The minimum value from the entered integer was %d\n", min);
}