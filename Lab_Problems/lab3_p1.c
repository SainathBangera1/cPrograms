#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    double s = (s1 + s2 + s3) * 1.0 / 2;             // s is the perimeter of the triangle
    double val = s * (s - s1) * (s - s2) * (s - s3); // val is the calcuation before square root
    double area = sqrt(val);                         // area of the triangle
    printf("The Perimeter of triangle is %f\n", s);
    printf("The Area of Triangle is %0.4f\n", area);

    // for output you must link the file with math library
    // gcc lab3_p1_Out -o lab3_p1.c -lm
}