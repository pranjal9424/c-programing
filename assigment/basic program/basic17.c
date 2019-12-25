#include<stdio.h>
#include<conio.h>
int  main()
{
    float p,r,t,ci;

    printf("enter pricipal value :");
    scanf("%f",&p);

    printf("enter rate per year :");
    scanf("%f",&r);

     printf("enter time period :");
    scanf("%f",&t);


    ci=p*(pow((1+r/100),t));
    printf("compound interest : %f",ci);

    getch();

}

