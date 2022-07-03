#include <stdio.h>
int main(){
    char inputChar;
    int inputNum;
    printf("Enter a Character to get its ASCII Value: ");
    scanf("%c",&inputChar);
    printf("\nThe ASCII value of %c is %d\n",inputChar,inputChar);
    printf("\\*******************\\ \n");
    printf("Enter the Decimal to get its Charater in ASCII: ");
    scanf("%d",&inputNum);
    printf("\nThe ASCII value of %d is %c\n",inputNum,inputNum);
}