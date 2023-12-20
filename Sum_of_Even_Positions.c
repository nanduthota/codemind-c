#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    if(i%2==0)
    {
        sum=sum+arr[i];
        
    }
    printf("%d",sum);
}