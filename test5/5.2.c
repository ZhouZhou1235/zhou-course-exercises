#include <stdio.h>
void main(){
    int num=1,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){num*=i;}
    printf("%d",num);
    return;
}