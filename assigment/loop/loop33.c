#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,prime,sum=0;
    printf("find sum of prime no. from 1 to :");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
      prime=1;
        for(j=2;j<=i/2;j++)
       {
            if (i%j==0)
            {
                prime=0;
                break;
            }
        }
       if (prime==1)
        {
            sum+= i;
        }
    }
    printf("sum o prime no. are :%d",sum);
}
