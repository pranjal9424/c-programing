#include<stdio.h>
int main()
{
    int r=5;
    for(int i=r-1;i>=0;i--)
    {
        for(int j=0;j<r;j++)
            if(i==r/2 || j==r/2)
               printf("0");
            else
                printf("1");
        printf("\n");
    }
    return 0;
}
