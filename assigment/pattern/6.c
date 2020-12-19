#include<stdio.h>
int main()
{
    int r=5,c;
    for(int i=r;i>0;i--)
    {
        c=i;
        for(int j=0;j<r;j++)
            if(j==0 || j==r-2 || i==1 || i==r)
               printf("1");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}




