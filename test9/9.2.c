#include <stdio.h>
#include <string.h>
void main(){
    char str1[20],minstr1[20];
    scanf("%s",str1);
    strcpy(minstr1,str1);
    for(int i=0;i<2;i++){
        scanf("%s",str1);
        if(strcmp(minstr1,str1)>0){
            strcpy(minstr1,str1);
        }
    }
    printf("min %s",minstr1);
    return;
}