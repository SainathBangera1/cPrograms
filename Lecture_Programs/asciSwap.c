#include <stdio.h>

int main(){
    char x = 'x', y = 'y';
    printf("ascii code for x = %d\n",x);
    printf("ascii code for y = %d\n",y);

    x = x+y; //141
    y = x-y; //120
    x=x-y; //121

    printf("variable x contains = %c\n",x);
    printf("variable y contains = %c\n",y);
}