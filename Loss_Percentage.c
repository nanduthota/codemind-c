#include<stdio.h>
int main()
{
    float x,y,z,p;
    scanf("%f %f",&x,&y);
    z=x-y;
    p=z*100/x;
    printf("%.2f",p);
    
}