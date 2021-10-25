#include<stdio.h>
#include<conio.h>
void main ()

{
    int a;

    printf("enter any year :");
    scanf("%d",&a);

    if (a%4==0)
    printf("%d is leap year",a);

    else

    printf("%d is not leap year",a);

}

