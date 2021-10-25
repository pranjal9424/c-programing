#include<stdio.h>
int main()
{
    int r=5,c;
    for(int i=r;i>=0;i--)
    {
        c=i;
        for(int j=0;j<r;j++)
            if(j%2==0)
               printf("0");
            else
                printf("1");
        printf("\n");
    }
    return 0;
}


