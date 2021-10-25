#include<stdio.h>
int main()
{
    int r=5,y=1;
    for(int i=0;i<r;i++)
    {
        y=1;
        for(int j=0;j<=i*2;j++)
            printf("%d",y++);
        printf("\n");
    }
}
