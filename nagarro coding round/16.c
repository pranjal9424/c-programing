#include<stdio.h>
int main()
{
    int m,n,i,min=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
        if((m%i)>min)
            min=i;
    printf("%d",min);
}
