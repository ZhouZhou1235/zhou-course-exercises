#include <stdio.h>
void getListLimit(int arr[],int length){
    int small,s_index=0,big,b_index=0;
    small=arr[0];big=arr[0];
    for(int i=0;i<length;i++){
        if(small>arr[i]){small=arr[i];s_index=i;}
        if(big<arr[i]){big=arr[i];b_index=i;}
    }
    printf("%d %d %d %d\n",small,s_index,big,b_index);
    return;
}
void main(){
    int arr[] = {5,8,7,3,9};
    getListLimit(arr,5);
    return;
}