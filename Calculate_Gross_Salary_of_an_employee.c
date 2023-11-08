#include<stdio.h>
int main()
{
    float sal,hra,da,pf,gs;
    scanf("%f%f%f",&sal,&hra,&da);
    pf = ((12*sal)/100);
    gs = (sal+hra+da+pf);
    printf("%.2f
%.2f",pf,gs);
}
