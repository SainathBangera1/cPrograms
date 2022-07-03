#include <stdio.h>
int main(){
    float q=0.0000000000000000016;
    double m=0.00000000000000000000000000167;
    float r=0.65;
    double f=12*1000000;
    double k;

    //kE= 0.5*q*q*B*B*r*r/m
    
    //kE = 0.5*m*(2*3.142*r*f)*(2*3.142*r*f)
    k = 0.5*m*(2*3.142*r*f)*(2*3.142*r*f)/0.00000000000000000016;
    printf("mass of proton : %.20f kg",k);
}
