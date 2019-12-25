#include<stdio.h>
#include<conio.h>

void main ()
{
    int a,n, bitstatus;

    printf("enter any no. :");
    scanf("%d",&a);

    printf("enter bit no. b/w (0-31) :");
    scanf("%d",&n);

    bitstatus=(a>>n) & 1;

    printf("the %d bit is set to %d",n,bitstatus);

}

