#include<stdio.h>
int main()
{
int i,j,r;
printf("Enter the number of rows :\n");
scanf("%d",&r);
for(i=0;i<r;i++)
   {
       if(i==0 || i==r-1)
        for(j=0;j<3;j++)
            printf("3");
       else
           for(j=0;j<3;j++)
                if(j==0 || j==2)
                    printf("3");
                else
                    printf("%d",i);
        printf("\n");
   }
}
