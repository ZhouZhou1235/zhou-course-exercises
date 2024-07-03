#include <stdio.h>
int main(){
    float *p1,*p2;
    float n1,n2;
    scanf("%f %f",&n1,&n2);
    p1=&n1;p2=&n2;
    if(*p1>*p2){printf("%f %f",*p1,*p2);}
    else{printf("%f %f",*p2,*p1);}
    return 0;
}