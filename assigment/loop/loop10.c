#include<stdio.h>
#include<conio.h>
int main()

{
    int n,f,l;

    printf("enter any no. :");
    scanf("%d",&n);

     f=n;
    l=n%10;


    while(f>=10)
    {

      f=f/10;
    }

      printf("first digit no :%d\n",f);
      printf("last digit no :%d",l);
}
