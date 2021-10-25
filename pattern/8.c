#include<stdio.h>
int main()
{
    int r=5,c,z=1;
    for(int i=0;i<r;i++)
    {
        for(int j=r-1;j>i;j--)
               printf(" ");
               c=z;
        for(int j=0;j<=i;j++)
            printf("%d ",c++);
        z++;
        printf("\n");
    }
    return 0;
}






