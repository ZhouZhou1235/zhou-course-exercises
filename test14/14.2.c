#include <stdio.h>
#include <math.h>
float integrator(float a,float b,float n,float (*p)(float)){
    float h,x=a,s=0;
    h = (b-a)/n;
    for(int i=0;i<n;i++){
        x = x+h;
        s = s+(*p)(x)*h;
    }
    return s;
}
float function_sinx(float x){return sin(x);}
float function_cosx(float x){return cos(x);}
void main(){
    float out1,out2;
    float (*p1)(float),(*p2)(float);
    p1 = function_sinx;
    p2 = function_cosx;
    out1 = integrator(0,1,3000,p1);
    out2 = integrator(0,1,3000,p2);
    printf("%f %f",out1,out2);
    return;
}