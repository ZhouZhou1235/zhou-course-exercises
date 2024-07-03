#include <stdio.h>
int fac(int num){
    if(num>1){return num*fac(num-1);}
    else{return num;}
}
void main(){
    int x,result;
    scanf("%d",&x);
    x = fac(x);
    printf("%d",x);
    return;
}