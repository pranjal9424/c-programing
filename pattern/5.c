#include<stdio.h>
int main()
{
    int r=5,c;
    for(int i=r;i>0;i--)
    {
        c=i;
        for(int j=0;j<r;j++)
            if(j==0 || j==r-1 || i==1 || i==r)
               printf("1");
            else
                printf("0");
        printf("\n");
    }
    return 0;
}



