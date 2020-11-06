#include<stdio.h>
int main()
{
int i,j,r,k=0;
printf("Enter the number of rows :\n");
scanf("%d",&r);
for(i=r;i>0;i--)
    k=k+i;


for(i=r-1;i>=0;i--)
   {
           for(j=0;j<=i;j++)
                    printf("%d ",k--);
        printf("\n");
   }
}
