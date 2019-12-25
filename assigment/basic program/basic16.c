
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,si,c;

    printf("enter pricipal value :");
    scanf("%f",&a);

    printf("enter rate per year :");
    scanf("%f",&b);

     printf("enter time period :");
    scanf("%f",&c);

    si=a*b*c/100;
    printf("simple interest : %f",si);

    getch();

}
