#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,sum;

    printf("check perfect no. from 1 to :");
    scanf("%d",&n);

    printf("perfect no. from 1 to %d are :",n);

    for (i=1;i<=n;i++)
    {
        sum=0;
        for (j=1;j<i;j++)
        {
            if (i %j==0)
            {
                sum +=j;
            }
        }
        if (sum==i)
        {
            printf("%d, ",i);
        }
    }
}

