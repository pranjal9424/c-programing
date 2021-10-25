#include<stdio.h>
int main()
{
    int r=5,c,y;
    for(int i=r;i>=1;i--)
    {
        c=i;
        for(int j=i;j>=1;j--)
            printf("%d",c--);
        for(int j=r;j>i;j--)
            printf("%d",y++);
        y=2;
        printf("\n");
    }
}





