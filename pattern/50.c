#include<stdio.h>
int main()
{
    int r=5,y=1;
    for(int i=r;i>=1;i--)
    {
        y=i;
        for(int j=1;j<=i;j++)
            printf("%d",y--);
        printf("\n");
    }
}
