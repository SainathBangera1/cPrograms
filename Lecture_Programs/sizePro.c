#include <stdio.h>

int main(){
    char myChar;
    int num;
    short int small;
    long int Long;
    printf("size of start here..\n");
    printf("Size of Char : %ld bytes\n",sizeof (myChar));
    printf("Size of Integer : %ld bytes\n",sizeof (num));
    printf("Size of SHORT-Integer: %ld bytes\n",sizeof (small));
    printf("Size of LONG-Integer: %ld bytes\n",sizeof (Long));
    printf("Size of Float: %ld bytes\n",sizeof(float));
}