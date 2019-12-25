#include<stdio.h>
#include<conio.h>
int main ()
{
   int n,rev=0;

   printf("enter any no. to find it's reverse :");
   scanf("%d",&n);

   while (n != 0)
   {
       rev=(rev*10)+ (n%10);

       n /=10;
   }
   printf("reverse is = %d",rev);
}
