#include<stdio.h>
#include<conio.h>
int main()

{
    int n,f,l,a;

    printf("enter any no. :");
    scanf("%d",&n);
    f=n;
    l=n%10;

    while(f>=10)
    {

      f=f/10;


    }
        a=f+l;
      printf("sum of first & last digit no =%d\n",a);
}

