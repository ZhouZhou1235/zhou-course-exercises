#include <stdio.h>
#include <string.h>
void main(){
    struct eeveelution{
        char name[20];
        int voteNum;
    };
    struct eeveelution eeveeA;strcpy(eeveeA.name,"水伊布");eeveeA.voteNum=0;
    struct eeveelution eeveeB;strcpy(eeveeB.name,"雷伊布");eeveeB.voteNum=0;
    struct eeveelution eeveeC;strcpy(eeveeC.name,"火伊布");eeveeC.voteNum=0;
    for(int i=0;i<10;i++){
        char tmp[20];gets(tmp);
        if(strcmp(tmp,eeveeA.name)==0){eeveeA.voteNum++;}
        else if(strcmp(tmp,eeveeB.name)==0){eeveeB.voteNum++;}
        else if(strcmp(tmp,eeveeC.name)==0){eeveeC.voteNum++;}
        else{printf("miss\n");}
    }
    char leader[20];int max;
    max = eeveeA.voteNum;strcpy(leader,eeveeA.name);
    if(eeveeB.voteNum>max){strcpy(leader,eeveeB.name);max=eeveeB.voteNum;}
    if(eeveeC.voteNum>max){strcpy(leader,eeveeC.name);max=eeveeC.voteNum;}
    printf("eeveeA %s 得分%d\neeveeB %s 得分%d\neeveeC %s 得分%d\n%s是领队",
    eeveeA.name,eeveeA.voteNum,eeveeB.name,eeveeB.voteNum,eeveeC.name,eeveeC.voteNum,leader);
    return;
}