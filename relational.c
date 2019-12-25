#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter any number :");
    scanf("%d%d",&a,&b);

    c=a>b;
    printf("\n%d > %d =%d",a,b,c);

    c=a>=b;
    printf("\n%d >= %d =%d",a,b,c);

    c=a<=b;
    printf("\n%d <= %d =%d",a,b,c);

    c=a!=b;
    printf("\n%d != %d =%d",a,b,c);

    c=a==b;
    printf("\n%d == %d =%d",a,b,c);

    getch();
}
