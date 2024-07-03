#include <stdio.h>
void main(){
    int x,y;
    scanf("%d",&x);
    if(x<5){y=x;}
    else if(5<=x && x<15){y=x+6;}
    else{y=x-6;}
    printf("%d",y);
    return;
}