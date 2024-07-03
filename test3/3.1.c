#include <stdio.h>
#include <math.h>
void main(){
    float r,h;
    float l,s,ss,v,vv;
    const float PI = 3.1415926;
    scanf("%f %f",&r,&h);
    l = 2*PI*r;
    s = PI*pow(r,2);
    ss = 3*PI*pow(r,2);
    v = 3*PI*pow(r,3)/4;
    vv = s*h;
    printf("%f %f %f %f %f",l,s,ss,v,vv);
    return;
}