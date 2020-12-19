#include<stdio.h>
int main()
{
    int r=6,c,y=7;
    for(int i=r;i>=1;i--)
    {
        c=y;
        for(int j=i;j>=1;j--)
            printf("%d",i);
        for(int j=r;j>i;j--)
            printf("%d",c++);
        y--;
        printf("\n");
    }
}
