#include <stdio.h>
void main(){
    float arr1[10];
    float num=0.1;
    for(int i=0;i<10;i++){arr1[i] = num;num += 0.1;}
    float *p1 = arr1;
    float *p2 = arr1 + sizeof(arr1)/sizeof(int) - 1;
    float sum=0;
    while(p1<=p2){printf("%.1f ",*p1);sum+=*p1;*(p1++);}
    printf("%.2f",sum);
    return;
}