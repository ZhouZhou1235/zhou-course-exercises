#include <stdio.h>
void main(){
    int arr1[5] = {2,3,1,4,5};
    int small=arr1[0],index=0;
    for(int i=0;i<5;i++){
        if(small>arr1[i]){
            small=arr1[i];
            index=i;
        }
    }
    printf("%d %d\n",small,index);
    for(int i=index;i<5;i++){arr1[i]=arr1[i+1];}
    for(int i=4;i>=0;i--){arr1[i]=arr1[i-1];}
    arr1[0]=small;
    for(int i=0;i<5;i++){printf("%d ",arr1[i]);}printf("\n");
    return;
}