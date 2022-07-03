#include <stdio.h>

int main(){
    char input;
    printf("Please Enter a character:\t");
    scanf("%c",&input);
    if (input=='W'| input=='A' | input=='B'){
        if(input=='W'){
            printf("\nYou have a very Low Attendence\n");
        }
        if(input=='A'){
            printf("\nYou scored between 90 - 100 %% !!!\n");
        }
        if(input=='B'){
            printf("\nYou score between 80-90 %% !!!\n");
        }
    }
    else {
        printf("\nInvalid Character. Enter W or A or B\n");
    }
}