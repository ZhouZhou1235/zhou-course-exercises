#include <stdio.h>
int findMax(int a,int b){
    int max;
    if(a>=b){max=a;}
    else{max=b;}
    return max;
}
void main(){
    int *p1,out;
    out = findMax(4,5);
    p1 = &out;
    printf("%d %p",*p1,p1);
    return;
}