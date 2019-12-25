#include<stdio.h>
#include<conio.h>
int main()
{
    int  i,n,isprime;

    isprime=1;

    printf("enter any no. to find pn or cn :");
    scanf("%d",&n);



    for (i=2; i<=n/2; i++)
    {
        if (n%i==0)
       {
           isprime=0;

           break;
       }
    }
       if (isprime==1)
       {
           printf("%d are pn",n);
       }
       else
       {
           printf("%d are cn",n);
       }


}
