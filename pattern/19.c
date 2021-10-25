#include<stdio.h>
int main()
{
    int r=5,c,z=r;
    for(int i=r;i>=1;i--)
    {
        c=z;
        for(int j=r;j>i;j--)
            printf("%d",c++);
        for(int j=i;j>=1;j--)
            printf("%d",r);
        printf("\n");
        z--;
    }
}


