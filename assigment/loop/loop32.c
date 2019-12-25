#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,prime;

    printf("to find prime factor 1 to :");
    scanf("%d",&n);

    printf("prime factor from 1 to %d :",n);
    for(i=2;i<=n;i++)
    {
        if (n%i==0)
        {
            prime=1;
            for (j=2;j<=i/2;j++)
            {
                if (i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1)
            {

                printf("%d, ",i);
            }
        }
    }
}
