#include <stdio.h>
int maopaoSort(int arr[],int length){
    int temp;
    for(int i;i<length;i++){
        for(int j=i;j>=0;j--){
            if(arr[j-1]>arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void main(){
    int arr1[] = {1,3,2,4};
    maopaoSort(arr1,4);
    for(int i;i<4;i++){printf("%d ",arr1[i]);}
    return;
}