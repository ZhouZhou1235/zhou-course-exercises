#include <stdio.h>
#include <string.h>
int move(int n,int m){
    int arr1[n];
    for(int i=0;i<n;i++){scanf("%d",&arr1[i]);}
    int j=0;
    while(j<m){
        int *p1 = arr1 + sizeof(arr1)/sizeof(int) - 1;
        int tmp;
        tmp = arr1[0];
        arr1[0] = *p1;
        for(int i=n-1;i>0;i--){arr1[i] = arr1[i-1];}
        arr1[1] = tmp;
        j++;
    }
    for(int k=0;k<n;k++){printf("%d ",arr1[k]);}
    return 0;
}
void main(){
    move(5,2);
}