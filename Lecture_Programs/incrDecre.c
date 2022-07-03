#include <stdio.h>

int main(){
    int x, y;
    int n=10;
     x = n++;
     y = ++n;

     printf("x : %d\n",x);
     printf("y: %d\n",y);
     printf("n : %d\n",n);
}