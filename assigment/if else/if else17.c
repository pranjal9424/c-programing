#include<stdio.h>
#include<conio.h>
int main ()

{
    float a,b,c;
    float r1,r2,i;
    float d;

    printf("enter value of quadratic equ. :");
    scanf("%f%f%f",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if (d>0)
       {
           r1=(-b+ sqrt(d))/(2*a);
           r2=(-b - sqrt(d))/(2*a);

           printf("root of quadratic equ. :%f and  %f",r1,r2);
       }

       else
           if (d<0)
       {
           r1=r2=-b/(2*a);
           i=sqrt(-d)/(2*a);

           printf("root of quadratic equ. :%f+i%f and %f-i%f",r1,i,r2,i);
       }

      else
           if (d==0)
       {
           r2=r1=-b/(2*a);
           printf("root of quadratic equ. :%f and %f",r1,r2);
       }
}

