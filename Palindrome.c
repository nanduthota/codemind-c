#include<stdio.h>
int main()
{
    int rem,rev=0,n,rap;
    scanf("%d",&n);
    rap=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    
     if(rev==rap)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
    

}