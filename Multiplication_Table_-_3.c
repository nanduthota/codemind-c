#include<stdio.h>
int main()
{
    int n,m,o,i;
    scanf("%d%d%d",&n,&m,&o);
    for(i=m;i<=o;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}