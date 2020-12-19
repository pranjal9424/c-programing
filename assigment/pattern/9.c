#include<stdio.h>
int main()
{
    int r=5,c=1;
    for(int i=r-1;i>=0;i--)
    {
        for(int j=0;j<r;j++)
            if(c==1){
               printf("1");
               c=0;
            }
            else{
                printf("0");
                c=1;
            }
        printf("\n");
    }
    return 0;
}






