#include <stdio.h>
void main(){
    int m,n,bigger,a,b;
    scanf("%d %d",&m,&n);
    if(m>n){bigger=m;}else{bigger=n;}
    for(int i=bigger;i>0;i--){if(m%i==0 && n%i==0){a=i;break;}}
    for(int j=1;j<m*n;j++){if(j%m==0 && j%n==0){b=j;break;}}
    printf("%d %d",a,b);
    return;
}