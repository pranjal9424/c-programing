#include<stdio.h>
#include<conio.h>
void main ()
{
    int u;
    float b,t;

    printf("enter monthly unit :");
    scanf("%d",&u);





        if (u<=50)
    {
        b=u*0.50;
    }


    else
        if (u<=150)
    {
        b=25+((u-50)*0.75);
    }


    else
        if (u<=250)
    {
        b=100+((u-150)*1.20);
    }
    else
    {
        b=220+((u-250)*1.5);
    }




    t=b+(b*20/100);

    printf("total bill :Rs. %f",t);


}


