#include <stdio.h>
void main(){
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
    scanf("%d %d %d %d %d %d %d %d %d %d",&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&p9,&p10);
    int arr1[] = {p1,p2,p3,p4,p5,p6,p7,p8,p9,p10};
    float small=arr1[0],big=arr1[0],average=0;
    for(int i=0;i<10;i++){
        if(small>arr1[i]){small=arr1[i];}
        if(big<arr1[i]){big=arr1[i];}
        average += arr1[i];
    }
    average /= 10;
    int number=0;
    for(int j=0;j<10;j++){if(arr1[j]>average){number++;}}
    printf("min %.2f max %.2f average %.2f number %d\n",small,big,average,number);
    return;
}
