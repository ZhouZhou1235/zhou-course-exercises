#include <stdio.h>
int fac(int num){
    if(num>1){return num*fac(num-1);}
    else{return num;}
}
float myfunc1(int i,int n,float num){
    if(i>n){return num;}
    else{
        float j=fac(i);
        num = num+(1/j);i++;
        return myfunc1(i,n,num);
    }
}
void main(){
    int n1,n2,n3,result;
    n1 = myfunc1(1,3,0);
    n2 = myfunc1(6,9,0);
    n3 = myfunc1(12,15,0);
    result = n1+n2+n3;
    printf("%d\n",result);
}