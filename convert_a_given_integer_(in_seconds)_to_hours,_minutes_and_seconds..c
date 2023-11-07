#include<stdio.h>
int main()
{
    int d,H,M,S;
    scanf("%d",&d);
    H=(d/3600);
    M=(d-(3600*H))/60;
    S=(d-(3600*H)-(M*60));
    printf("H:M:S-%d:%d:%d",H,M,S);
}