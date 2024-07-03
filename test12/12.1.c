#include <stdio.h>
int main(){
    int *pn,n=10,m=20;
    float *pf,px=3.14159,py=2.71828;
    pn = &n;
    *pn += m;
    printf("%d\n",*pn);
    pf = &px;
    py += 5*(*pf);
    printf("%f\n",py);
    return 0;
}