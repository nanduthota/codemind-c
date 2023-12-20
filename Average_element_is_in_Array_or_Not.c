#include<stdio.h>
int main()
{
    int i,j,n,sum=0,flag=0,avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    for(j=0;j<n;j++)
    if(avg==arr[j])
    {
        printf("True");
        flag=1;
        break;
    }
    if(flag==0)
    {
        printf("False");
    }
}