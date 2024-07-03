#include <stdio.h>
void main(){
    int num=0,n1;
    int running=1;
    while(running==1){
        printf("input number");
        scanf("%d",&n1);
        if(n1%3==0 && n1%7!=0){num++;}
        printf("again?1/0");
        scanf("%d",&running);
    }
    printf("%d",num);
}