#include<stdio.h>
int main()
{
    int i,j,sum=0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    if(j%2==1)
    {
        sum+=arr[j];
        
    }
    printf("%d",sum);
}