#include<stdio.h>
int main()
{
    int r=5,y;
    for(int i=1;i<=r;i++)
    {
        y=i;
        for(int j=1;j<i;j++)
            printf("%d",i);
        for(int j=r;j>=i;j--)
            printf("%d",y++);
        printf("\n");
    }
}

