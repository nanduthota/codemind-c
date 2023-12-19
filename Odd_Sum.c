#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    if(arr[i]%2==1)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}