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
    int x;scanf("%d",&x);
    int arr1[5] = {1,2,3,5,x};
    maopaoSort(arr1,5);
    for(int i=0;i<5;i++){printf("%d ",arr1[i]);}
    return;
}