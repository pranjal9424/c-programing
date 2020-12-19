#include<stdio.h>
int main()
{
    int r=5,c,y=1;
    for(int i=1;i<=r;i++)
    {
        c=i;
        for(int j=1;j<i;j++)
            printf("%d",c--);
        for(int j=r;j>=i;j--)
            printf("%d",y++);

        y=1;
        printf("\n");
    }
}




