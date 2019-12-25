#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    float d,r1,i,r2;

    printf("enter value of quadratic equation");
    scanf("%f%f%f",&a,&b,&c);

    d=(b*b)-(4*a*c);

    switch (d>0)
    {
    case 1:
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("%f and %f is root",r1,r2);
        break;
    case 0:
   switch (d<0)

     {


        case 1:
        r1=r2=-b/(2*a);
        i=sqrt(-d)/(2*a);
        printf("%f+i%f and %f-i%f is root",r1,i,r2,i);
        break;

        case 0:
        r1=r2=-b/(2*a);
        printf("%f and %f is root",r1,r2);
        break;

     }

    }
}
