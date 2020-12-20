#include<stdio.h>
int main()
{
    int r=5,c;
    for(int i=r;i>=1;i--)
    {
        c=5;
        for(int j=i;j<r;j++)
            printf(" ");
        for(int j=i;j>=1;j--)
            printf("%d ",c--);
        printf("\n");
    }
}
