// LOGIC : The Lines are parallel when the slope are same
// Take the coordinate points input (x1,y1),(x2,y2),(x3,y3),(x4,y4)
// Apply the formula of slope Line 1 : m1 = (y2 - y1) / (x2 - x1), Line 2 : m2 = (y4 - y3) / (x4 - x3)
#include <stdio.h>
#include <time.h>

// delay helps in pausing the execution for a limited amount of time
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float m1, m2;
    printf("Please enter the Coordinate x1 and y1: ");
    scanf("%d,%d", &x1, &y1);
    printf("Please enter the Coordinate x2 and y2: ");
    scanf("%d,%d", &x2, &y2);
    printf("The First Line is drawn with coordinates ==> (%d,%d) and (%d,%d)\n", x1, y1, x2, y2);
    printf("Please enter the Coordinate x3 and y3: ");
    scanf("%d,%d", &x3, &y3);
    printf("Please enter the Coordinate x4 and y4: ");
    scanf("%d,%d", &x4, &y4);
    printf("The Second Line is drawn with coordinates ==> (%d,%d) and (%d,%d)\n", x2, y2, x3, y3);
    printf("Please wait Calculating the Slopes ....\n");
    delay(5000);
    m1 = (y2 - y1) * 1.0 / (x2 - x1);
    m2 = (y4 - y3) * 1.0 / (x4 - x3);
    printf(m1 == m2 ? "The Lines are Parallel\n" : "The lines are NOT parallel\n");
}