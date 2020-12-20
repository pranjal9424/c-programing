#include<stdio.h>
int main()
{
    int r=5,y;
    for(int i=r;i>=1;i--)
    {
        y=i;
        for(int j=i;j<=r;j++)
            printf("%d ",y++);
        printf("\n");
    }
}



