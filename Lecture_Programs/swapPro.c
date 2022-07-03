#include <stdio.h>

int main(){
    int x,y;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("Enter y:\n");
    scanf("%d",&y);
    
    /*CODE IN BETWEEN TO SWAP */
    int a;
    a=x;
    x=y;
    y=a;
    
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}