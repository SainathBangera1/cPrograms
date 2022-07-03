#include <stdio.h>

int main(){
    int num1, num2, num3, min;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("\nEnter num2:");
    scanf("%d",&num2);
    printf("\nEnter num3:");
    scanf("%d",&num3);
    min = num1;
    if(num2<min){
        min=num2;
    }
    if(num3<min){
        min=num3;
    }

    // if(num1<num2 && num1<num3){
    //     min=num1;
    // }
    // if(num2<num1 && num2<num3){
    //     min=num2;
    // }
    // if(num3<num1 && num3<num2){
    //     min=num3;
    // }
    // if(num1==num2==num3){
    //     min=num1;
    // }

    printf("Minimum value is : %d",min);

}