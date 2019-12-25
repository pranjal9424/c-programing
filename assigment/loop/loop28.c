#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,prime;

    printf("enter any n0. to check prime no from 1 to :");
    scanf("%d",&n);

    printf("all prime no are :");

    for(i=2;i<=n;i++)
    {
        prime=1;
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                prime =0;
                break;
            }
        }
        if (prime==1)
    {
        printf("%d ",i);
    }
    }

}
