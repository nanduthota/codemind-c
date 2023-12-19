#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(j=0;j<n;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
    }
    printf("%d",max);
}