#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int max=0;
    while(n>0)
    {
        i=n%10;
        if(i>max)
        {
            max=i;
        }
        n=n/10;
    }
    printf("%d",max);
}