#include <stdio.h>
#include <string.h>
int main(){
    char arr1[] = "PinkCandyZhou";
    for(int j=0;j<strlen(arr1);j++){printf("%c",arr1[j]);}
    printf("\n");
    int num,mun;
    for(int i=0;i<strlen(arr1);i++){
        num = (int)arr1[i];
        if(65<=num && num<=90){
            mun = 65 + 90-num;
            arr1[i] = mun;
        }
        else{
            mun = 97 + 122-num;
            arr1[i] = mun;
        }
    }
    for(int j=0;j<strlen(arr1);j++){printf("%c",arr1[j]);}
    printf("\n");
    for(int i=0;i<strlen(arr1);i++){
        mun = (int)arr1[i];
        if(65<=mun && mun<=90){
            num = 65 + 90-mun;
            arr1[i] = num;
        }
        else{
            num = 97 + 122-mun;
            arr1[i] = num;
        }
    }
    for(int j=0;j<strlen(arr1);j++){printf("%c",arr1[j]);}
    printf("\n");
    return 0;
}