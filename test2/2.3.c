#include <stdio.h>
#include <math.h>
void main(){
    int n1,n2=0,num,i;
    scanf("%d",&n1);
    i = sizeof(n1)/sizeof(int);
    i = pow(10,i+1);
    while(n1>0){
        num = n1 % 10;
        n2 += num*i;
        n1 /= 10;
        i /= 10;
    }
    printf("%d\n",n2);
    return;
}