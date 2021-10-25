#include<stdio.h>
int main()
{
    int r=5,c=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
               printf("%d",c);
        c++;
        printf("\n");
    }
    return 0;
}


