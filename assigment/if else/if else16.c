 #include<stdio.h>
#include<conio.h>
void main ()

{
    int a,b,c;

    printf("enter side of tringle :");
    scanf("%d%d%d",&a,&b,&c);

    if (a==b && b==c)

    printf("input are equiletral triangle");
    else

        if (a==b || b==c || a==c )

    printf("input are isosceles triangle");

    else
    printf("input are scalene triangle");




}

