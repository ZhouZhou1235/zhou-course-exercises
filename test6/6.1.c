#include <stdio.h>
void main(){
    for(int i=1;i<10;i++){
        for(int j=1;j<i+1;j++){
            printf("%d x %d = %d ",j,i,j*i);
        }
        printf("\n");
    }
    return;
}