#include<stdio.h>
int main()
{
    int r=5,y=1;
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<i;j++)
            printf(" ");
        for(int j=i;j<=r;j++)
            printf("%d ",y++);
        y=1;
        printf("\n");
    }
}
