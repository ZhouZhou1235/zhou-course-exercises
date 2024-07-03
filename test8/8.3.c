#include <stdio.h>
#include <string.h>
void printYanghuiTriangle(int row){
    int length = 10000;
    if(row==1){printf("1\n");return;}
    else if(row==2){printf("1\n");printf("1 1\n");return;}
    else if(row<=10000){
        int line[length],lastLine[length];
        line[0]=1;line[1]=1;
        printf("1\n");printf("1 1\n");
        int i=3;
        while(i<=row){
            memcpy(lastLine,line,sizeof(line)/sizeof(int));
            line[0]=1;line[i-1]=1;
            for(int j=0;j<i;j++){line[j+1]=lastLine[j]+lastLine[j+1];}
            for(int k=0;k<i;k++){printf("%d ",line[k]);}
            printf("\n");
            i++;
        }
    }
    return;
}
void main(){
    printYanghuiTriangle(10);
    return;
}