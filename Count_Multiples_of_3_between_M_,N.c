#include<stdio.h>
int main()
{
    int n,m,count=0,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%3==0)
        count=count+1;
    }
    printf("%d",count);
}