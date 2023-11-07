#include<stdio.h>
int main()
{
    int d,w,y;
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    printf("%d",y);
    printf("
%d",w);
}