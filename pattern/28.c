#include<stdio.h>
int main()
{
    int r=5,y;
    for(int i=1;i<=r;i++)
    {
        y=6-i;
        for(int j=r;j>i;j--)
            printf(" ");
        for(int j=i;j>=1;j--)
            printf("%d ",y++);
        printf("\n");
    }
}

