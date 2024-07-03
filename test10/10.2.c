#include <stdio.h>
int swap2(int x,int y,int n1,int n2){
    x = n2;
    y = n1;
    printf("%d %d",x,y);
    return 0;
}
int swap1(int x,int y){
    int n1,n2;
    n1=x,n2=y;
    swap2(x,y,n1,n2);
}
void main(){
    int x=1,y=2;
    swap1(x,y);
    return;
}