#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;

    printf("enter angle of one side of triangle :");
    scanf("%f",&a);

     printf("enter angle of another side of triangle :");
    scanf("%f",&b);

    c=360-(a+b);
    printf("angle of third side of triange : %f",c);

}

