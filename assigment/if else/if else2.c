#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,c;

    printf("enter any three no.");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b&&a>c)

        printf("largest no. is :%d",a);

    else

        if (b>c)
                printf("largest no. is :%d",b);

    else
     printf("largest no. is :%d",c);

}
