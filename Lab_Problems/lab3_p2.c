#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(double a, double b)
{
    if (abs(a - b) <= 0.00001)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("Calculating the Area of triangle\n");
    int s1, s2, s3; // s1,s2,s3 are the sides of the triangle

    printf("Enter the Side 1: ");
    scanf("%d", &s1);
    printf("\nEnter the Side 2: ");
    scanf("%d", &s2);
    printf("\nEnter the Side 3: ");
    scanf("%d", &s3);
    int hypo, opp, adj;
    if (s1 > s2 & s1 > s3)
    {
        hypo = s1;
        opp = s2;
        adj = s3;
    }
    else if (s2 > s1 & s2 > s3)
    {
        hypo = s2;
        opp = s1;
        adj = s3;
    }
    else if (s3 > s1 & s3 > s2)
    {
        hypo = s3;
        opp = s1;
        adj = s2;
    }
    // comparing to check is Two sides are equal
    if (compare(s1, s2) | compare(s1, s3) | compare(s2, s3))
    {
        printf("Here Two sides are same\n");
    }
    // Checking by pythogores formula that weather Hypotenuse^2  = opp^2 + adj^2 for proving to be Right angled triangle
    if (hypo * hypo == opp * opp + adj * adj)
    {
        printf("Yes its a Right angled triangle\n");
    }
    else
    {
        printf("It NOT a right angled Triangle\n");
    }
}