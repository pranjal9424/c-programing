#include<stdio.h>
#include<conio.h>
void main ()
{
    int b;
    float h,d,g;

    printf("enter basic salary :");
    scanf("%d",&b);




    if (b>=10000)
    {
        h=b*20/100;
        d=b*80/100;
    }
    else
        if (b>=20000)
    {
        h=b*25/100;
        d=b*90/100;
    }
    else
        if (b>=30000)
    {
        h=b*30/100;
        d=b*95/100;
    }

    g=b+h+d;

    printf("gross salary :%f",g);


}

