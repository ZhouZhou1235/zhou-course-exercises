#include <stdio.h>
float get4numAverage(){
    float n1,n2,n3,n4,result;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    result = (n1+n2+n3+n4)/4;
    return result;
}
void main(){
    float result;
    result = get4numAverage();
    printf("%.2f",result);
    return;
}