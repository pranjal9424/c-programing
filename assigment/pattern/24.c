#include<stdio.h>
int main()
{
    int r=5,y;
    for(int i=r;i>=1;i--)
    {
        for(int j=r;j>i;j--)
            printf("%d",y--);
        for(int j=i;j>=1;j--)
            printf("%d",i);

        y=5;
        printf("\n");
    }
}






