#include <stdio.h>
int myfunc1(int num){
    if(num<1){return num;}
    else{return num+myfunc1(num-1);}
}
void main(){
    int result;
    result = myfunc1(4);
    printf("%d",result);
    return;
}