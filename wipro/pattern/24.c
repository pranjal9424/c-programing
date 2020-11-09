#include<stdio.h>
int main()
{
    int i,j,k=2,r;
    scanf("%d",&r);

    for(i=0;i<r;i++)
    {
        if(i<=r/2){
                k++;
            for(j=0;j<=i;j++)
               printf("%d",k);
        }
        else{
                --k;
            for(j=i;j<r;j++)
                printf("%d",k);
        }
        printf("\n");
    }
}
