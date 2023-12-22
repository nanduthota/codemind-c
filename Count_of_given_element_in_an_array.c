#include<stdio.h>
int main()
{
    int i,n,x,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int c=0;
    for(j=0;j<n;j++)
    {
        if(x==arr[j])
        {
            c++;

        }
    }
   printf("%d",c);
}