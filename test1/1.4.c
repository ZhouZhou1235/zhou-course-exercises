#include <stdio.h>
void main(){
    char c1='C',c2='h',c3='i',c4='n',c5='a';
    int n1,n2,n3,n4,n5;
    n1=(int)c1;n2=(int)c2;n3=(int)c3;n4=(int)c4;n5=(int)c5;
    n1+=4;n2+=4;n3+=4;n4+=4;n5+=4;
    c1=(char)n1;c2=(char)n2;c3=(char)n3;c4=(char)n4;c5=(char)n5;
    printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
    return;
}