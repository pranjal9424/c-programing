#include<stdio.h>
int main()
{
    int n=5,p,k;
    for(int i=1;i<=n;i+=2)
    {
        k=(i-1)*n+1;
        for(int j=0;j<n-1;j++)
            printf("%d*",k++);
        printf("%d",k);
        printf("\n");
    }
    if(n%2!=0)
    {
        p=n-1;
    }
    for(int i=p;i>0;i-=2)
    {
        k=(i-1)*n+1;
        for(int j=0;j<n-1;j++)
            printf("%d*",k++);
        printf("%d",k);
        printf("\n");
    }
    return 0;
}
