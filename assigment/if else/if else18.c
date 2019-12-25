#include<stdio.h>
#include<conio.h>
int main ()

{
    int s,c,l;


    printf("enter cost price:");
    scanf("%d",&c);

    printf("enter selling price:");
    scanf("%d",&s);

    if (c>s)
       {
           l=s-c;
           printf("loss :%d",l);
       }

       else

    if (c<s)
       {
           l=s-c;
           printf("profit :%d",l);
       }

}
