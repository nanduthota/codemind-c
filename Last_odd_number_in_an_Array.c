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
    int last=0;
    for(j=0;j<n;j++)
    {
      if(arr[j]%2==1)
      {
        if(arr[j]<last);
        {
            last=arr[j];
            
        }
      }
    }
    printf("%d",last);
}