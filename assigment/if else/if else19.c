#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,c,d,e;
    float p;

    printf("enter five sub marks :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    p=(a+b+c+d+e)*100/500;


        if (p>=90)
    {
        printf("%f grade A",p);
    }


    else
        if (p>=80)
    {
        printf("%f grade B",p);
    }


    else
        if (p>=70)
    {
        printf("%f grade C",p);
    }


    else
        if (p>=60)
    {
        printf("%f grade d",p);
    }


    else
        if (p>=50)
    {
        printf("%f grade E",p);
    }


    else
        if (p>=40)
    {
        printf("%f grade F",p);
    }
    else
        if(p<=39)
    {
        printf("%f fail ",p);
    }

}
