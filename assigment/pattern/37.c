#include<stdio.h>
int main()
{
    int r=5;
    for(int i=1;i<=r;i++)
    {
        for(int j=r;j>=i;j--)
            printf("%d ",i);
        printf("\n");
    }
}


