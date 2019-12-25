#include<stdio.h>
#include<conio.h>
int main()
{
    int  i,n,f=1;
    printf("enter any no. to find its factorial :");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial of thic no. %d =%d",n,f);
}
