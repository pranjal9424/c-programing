#include<stdio.h>
#include<conio.h>
int main()
{
    int  i,n1,n2,m,hcf=1;
    printf("enter any two no. to find HCF :");
    scanf("%d%d",&n1,&n2);

    m=(n1<n2)?  n1: n2;
    for (i=1;i<=n1;i++)
    {
       if (n1%i==0 && n2%i==0)
       {
           hcf=i;
       }
    }
    printf("HCF of no. %d & %d = %d",n1,n2,hcf);
}

