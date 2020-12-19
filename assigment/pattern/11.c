#include<stdio.h>
int main()
{
    int r=5,c=r-1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
            if(j==c){
               printf("1");
               c--;
            }
            else if(j==i){
               printf("1");
            }
            else
                printf("0");
        printf("\n");
    }
    return 0;
}

