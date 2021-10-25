#include<stdio.h>
int main()
{
    int r=5;
    for(int i=1;i<=r;i++)
    {
        for(int j=i;j<r;j++)
            printf(" ");
        for(int j=i;j>=1;j--)
            printf("%d ",i);
        printf("\n");
    }
}
