#include<stdio.h>
int main()
{
    int ld,fd,n,sum;
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    sum=fd+ld;
    printf("%d",sum);
}