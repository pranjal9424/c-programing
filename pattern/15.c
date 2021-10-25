#include<stdio.h>
int main()
{
    int r=5,c;
    for(int i=1;i<=r;i++)
    {
        c=i;
        for(int j=0;j<r;j++)
            printf("%d",c++);
        printf("\n");
    }

}
