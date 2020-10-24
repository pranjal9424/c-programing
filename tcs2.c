#include<stdio.h>
int main()
{
    int i,n=10,k=5;

    scanf("%d",&i);
    if(i==0 || i>10)
    {
        printf("Invalid");
        printf("No. of av %d\n",n);
    }
    else
    {
        printf("No. of sold %d\n",i);
        printf("No. of av %d\n",n-i);
    }
}
