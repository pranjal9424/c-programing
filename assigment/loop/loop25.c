#include<stdio.h>
#include<conio.h>

int main()
{
    int on,n,ld,d,sum;

    printf("enter any no. to check armstrong no. :");
    scanf("%d",&n);

    sum=0;
    on=n;
    d =(int) log10(n)+1;

    while (n>0)
    {
        ld=n%10;

        sum=sum+round(pow(ld,d));

        n=n/10;
    }

    if (on==sum)
    {
        printf("%d is AENSTRONG NO.",on);
    }
    else
    {
        printf("%d is not AENSTRONG NO.",on);
    }
}
