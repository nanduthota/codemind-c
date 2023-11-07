#include<stdio.h>
int main()
{
    int x,y;
    float p,pp;
    scanf("%d%d",&x,&y);
    p=y-x;
    pp=(p*100)/x;
    printf("%.2f",pp);
}