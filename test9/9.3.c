#include <stdio.h>
#include <string.h>
void main(){
    char str1[100];
    int word=1;
    gets(str1);
    for(int i=0;i<100;i++){
        if(str1[i]==' ' && str1[i-1]!=' '){word++;}
    }
    printf("%d",word);
    return;
}