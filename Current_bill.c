#include<stdio.h>
int main()
{
    int units;
    scanf("%d",&units);
    float bill,tbill,unitcost;
    if(units<200)
    {
        unitcost=1.20;
        
    }
    else if(units>200 && units<400)
    {
        unitcost=1.50;
    }
    else if(units>600)
    {
        unitcost=2.00;
    }
    bill=units*unitcost;
    if(bill>400)
    {
        tbill=bill+(bill*0.15);
    }
    else if(bill<400)
    {
        tbill=bill+100.0;
    }
    printf("%.2f",tbill);
}