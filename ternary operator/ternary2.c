#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;

    printf("enter three two no. :");
    scanf("%d%d%d",&a,&b,&c);

    (a>b && a>c) ?

    printf("%d is greater than %d and %d",a,b,c):

        (b>c) ?

        printf("%d is greater than %d and %d",b,a,c):

            printf("%d is grater than %d and %d",c,a,b);
}
