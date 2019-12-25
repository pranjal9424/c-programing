#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;

    printf("enter any no. to find its factor :");
    scanf("%d",&n);
    printf("all factor of no. are :");

    for(i=1;i<=n;i++)
    {
        if (n%i ==0)
        {
            printf(" %d, ",i);
        }
    }
}
