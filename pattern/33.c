#include<stdio.h>
int main()
{
    int r=5,c=1,k=1,y;
    for(int i=1;i<=r;i++)
    {
        y=c;
        for(int j=1;j<=i;j++){
            printf("%d",y);
            y=y+2;
        }
        if(k==1){
            c=2;
            printf("\n");
            k=0;
            continue;
        }
        if(k==0){
            c=1;
            printf("\n");
            k=1;
            continue;
        }
        printf("\n");
    }
}


