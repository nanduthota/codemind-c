#include<stdio.h>
#include <math.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=0,s1=0,avg;
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            s+=arr[j];
        }
        else if(arr[j]%2==1)
        {
            s1+=arr[j];
        }
    }
    avg=abs(s1-s);
    printf("%d",avg);
    
}