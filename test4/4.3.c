#include <stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(90<=num){printf("优");}
    else if(80<=num){printf("良");}
    else if(70<=num){printf("中");}
    else if(60<=num){printf("合格");}
    else{printf("不合格");}
    return;
}