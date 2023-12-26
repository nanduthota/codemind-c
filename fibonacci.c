#include<stdio.h>
int main()
{
    int i,j,n,t1=0,t2=1,t3;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=2;i<n;i++)
    {
        t3=t2+t1;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        
    }
    
}