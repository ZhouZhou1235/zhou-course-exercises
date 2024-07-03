#include <stdio.h>
void Susu(int num){
    int susu = 1;
    for(int i=2;i<num;i++){if(num%i==0){printf("%d no example %d %d\n",num,num,i);susu=0;break;}}
    if(susu==1){printf("%d yes\n",num);}
    return;
}
void main(){
    for(int i=1;i<100;i++){Susu(i);}
    return;
}