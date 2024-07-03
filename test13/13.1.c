#include <stdio.h>
void main(){
    int arr1[5] = {1,2,3,4,5};
    int *p1 = arr1;
    int *p2 = arr1 + sizeof(arr1)/sizeof(int) - 1;
    int tmp;
    while(p1<p2){
        tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        *(p1++);*(p2--);
        for(int i=0;i<5;i++){printf("%d ",arr1[i]);}printf("\n");
    }
    for(int i=0;i<5;i++){printf("%d ",arr1[i]);}printf("\n");
    return;
}