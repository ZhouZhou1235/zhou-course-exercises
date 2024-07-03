#include <stdio.h>
#include <math.h>
void main(){
    float a=3,n1,n2;
    n1 = a/2;
    n2=(n1+(a/n1))/2;
    while(fabsf(n1-n2)>1e-5){n2=(n1+(a/n1))/2;n1=n2;}
    printf("%f %f %f",a,n1,n2);
}