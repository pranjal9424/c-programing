#include<stdio.h>
#include<conio.h>
int main()
{
    int i,base,exp,pow=1;

    printf("enter base no. :");
    scanf("%d",&base);

    printf("enter exponent no. :");
    scanf("%d",&exp);

    for (i=0;i<=exp;i++)
    {
        pow=pow*base;
    }
    printf("%d ^ %d =%d",base,exp,pow);
}

