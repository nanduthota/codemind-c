#include<stdio.h>
int main()
{
    int t,n,m,k;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d%d",&n,&m,&k);
        if(m-k>=n)
        {
            printf("YES
");
            
        }
        else
        {
            printf("NO
");
        }
        t--;
    
    }
}