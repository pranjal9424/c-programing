#include<stdio.h>
int main()
{
    int i,j,r,k=3;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",k++);
        printf("\n");
    }

}
