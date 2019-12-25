#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch;
    float d;

    printf("enter any two no. :");
    scanf("%d%d",&a,&b);

    printf("1.add \n2.sub \n3.multi \n4.div \nenter your choice :");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
        d=a+b;
        printf("%d + %d =%f",a,b,d);
        break;

        case 2:
        d=a-b;
        printf("%d - %d =%f",a,b,d);
        break;

        case 3:
        d=a*b;
        printf("%d * %d =%f",a,b,d);
        break;

        case 4:
        d=a/b;
        printf("%d / %d =%f",a,b,d);
        break;
    }


}
