#include <stdio.h>
void get4JuzhenSum(int arr[4][4]){
    int aSum=0,bSum=0,i;
    i=0;while(i<4){aSum+=arr[i][i];i++;}
    i=0;while(i<4){for(int j=3;j>=i;j--){bSum+=arr[i][j];}i++;}
    for(int i=0;i<4;i++){for(int j=0;j<4;j++){printf("%d ",arr[i][j]);}printf("\n");}
    printf("%d %d\n",aSum,bSum);
    return;
}
void main(){
    int arr1[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    get4JuzhenSum(arr1);
    return;
}