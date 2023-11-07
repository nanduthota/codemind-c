#include<stdio.h>
int main()
{
    int T,S,B,O;
    scanf("%d
",&T);
    scanf("%d
",&S);
    scanf("%d",&B);
    O=(2*T*S*B*512)/1024;
    printf("%d KB",O);
    
}