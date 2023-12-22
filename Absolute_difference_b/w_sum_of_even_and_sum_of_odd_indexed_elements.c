#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=0,s1=0,avg;
    for(j=0;j<n;j++)
    {
        if(j%2==0)
        {
            s+=a[j];
        }
        else if(j%2==1)
        {
            s1+=a[j];
        }
    }
    avg=abs(s1-s);
    printf("%d",avg);
    
}