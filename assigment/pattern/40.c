#include<stdio.h>
int main()
{
    int r=5;
    for(int i=r;i>=1;i--)
    {
        for(int j=i;j<=r;j++)
            printf("%d",i);
        printf("\n");
    }
}

