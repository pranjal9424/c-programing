#include<stdio.h>
int main()
{
    int r=5,c,z=1;
    for(int i=1;i<=r;i++)
    {
        c=z;
        for(int j=r;j>=i;j--){
            printf("%d",c);
            c=c+2;
        }
        z=z+2;
        printf("\n");
    }
    return 0;
}

