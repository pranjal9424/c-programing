#include<stdio.h>
int main()
{
    int r=5,c;
    for(int i=r;i>=0;i--)
    {
        c=i;
        for(int j=0;j<i;j++)
            printf("%d",c++);
        printf("\n");
    }
    return 0;
}

