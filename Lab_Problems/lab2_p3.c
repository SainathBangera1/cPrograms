#include <stdio.h>
int main(){
    int input;
    printf("Please Enter the number: ");
    scanf("%d",&input);
    printf(input%2==0 ? "its EVEN\n":"its ODD\n");
}