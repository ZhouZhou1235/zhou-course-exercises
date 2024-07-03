#include <stdio.h>
int main(){
    int *p1,*p2;
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    int arr1[] = {num1,num2,num3};
    p1 = &num1;
    for(int i=0;i<3;i++){if(*p1>arr1[i]){p1=&arr1[i];}}
    p2 = &num1;
    for(int i=0;i<3;i++){if(*p2<arr1[i]){p2=&arr1[i];}}
    int medium;
    for(int i=0;i<3;i++){if(*p1<arr1[i] && arr1[i]<*p2){medium=arr1[i];}}
    printf("%d %d %d",*p1,medium,*p2);
    return 0;
}