#include <stdio.h>
int main() {
    char input;
    printf("Please Enter a character:\t");
    scanf("%c",&input);

    switch(input){
        case 'W':
        printf("The Attendance is below 85 %%\n");
        break;
        case 'A':
        printf("The score is between 90 - 100 %%\n");
        break;
        case 'B':
        printf("The score is between 80 - 90 %%\n");
        break;
        default: printf("PLEASE ENTER A VALID CHARACTER W , A , B\n");
    }
}