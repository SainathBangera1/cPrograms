#include <stdio.h>
int main(){
    long int INTEGER=sizeof(int);
    long int LONG_INTEGER = sizeof(long int);
    long int UNSIGNED_LONG_INTEGER = sizeof(unsigned long int);
    printf("MAX Size of int is %ld bytes\n",sizeof(int));
    printf("MAX Size of long int is %ld bytes\n",sizeof(long int));
    printf("MAX Size of unsigned long int is %ld bytes\n",sizeof(unsigned long int));
}