#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;

    printf("enter any no. :");
    scanf("%d",&n);

   while (n != 0)

   {
       sum += (n % 10);

       n = n/10;
   }
     printf("product of digit no. are :%d",sum);
}

