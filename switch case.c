#include<stdio.h>
#include<conio.h>
void main()
{
    double a,b,c;
    int ch;

    printf("enter any tow values : ");
    scanf("%lf%lf",&a,&b);

    printf("\n1.add \n2.sub \n3.mult \n4.div \nenter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        c=a+b;
        printf("\n %lf + %lf=%lf",a,b,c);
        break;

        case 2:
        c=a-b;
        printf("\n %2lf - %2lf=%lf",a,b,c);
        break;

        case 3:
        c=a*b;
        printf("\n %2lf * %2lf=%lf",a,b,c);
        break;

        case 4:
        c=a/b;
        printf("\n %2lf / %2lf=%lf",a,b,c);
        break;

        default:

            printf("\n fail");
            break;
            getch();
    }
}
