#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;

    printf("enter any no. to check perfect no. :");
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
    }
    if (n==sum)
    {
        printf("%d are perfect no.",n);
    }
    else
    {
        printf("%d are not perfect no.",n);
    }
}
