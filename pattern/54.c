#include<stdio.h>
int main()
{
    int r=5,y;
    for(int i=r;i>=1;i--)
    {
        y=5;
        for(int j=1;j<i;j++)
            printf(" ");
        for(int j=i;j<=r;j++)
            printf("%d ",y--);
        printf("\n");
    }
}
