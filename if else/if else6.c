#include<stdio.h>
#include<conio.h>
int main ()

{
    int a;

    printf("enter any no. :");
    scanf("%d",&a);

    if (a%5==0)
    printf("%d is div by 5",a);

    else
     if (a%11==0)
    printf("%d is div by 11",a);

    else


    printf("%d is not div by 5 and 11",a);

}

