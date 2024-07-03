#include <stdio.h>
void main(){
    int chicken=0,rabbit=0,head,claw;
    scanf("%d %d",&head,&claw);
    int range = 10000;
    for(int i=0;i<range;i++){
        for(int j=0;j<range;j++){
            if(
                head == i+j
                &&
                claw == i*2+j*4
            ){chicken=i;rabbit=j;break;}
        }
    }
    printf("%d %d",chicken,rabbit);
    return;
}