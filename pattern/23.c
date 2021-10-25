#include<stdio.h>
int main()
{
    int r=5,c,y;
    for(int i=1;i<=r;i++)
    {
        c=i;
        for(int j=i;j<=r;j++)
            printf("%d",c++);
        printf("\n");
    }
}






