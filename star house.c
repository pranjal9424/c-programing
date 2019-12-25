#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;


     for (i=1;i<=10;i++)
    {
        for (j=i;j<10;j++)
           {
                printf(" ");
           }
               for (j=1;j<=(2*i-1);j++)
               {
                   printf("*");
            }
        printf("\n");
    }

    for (i=1;i<=10;i++)
    {
        for (j=1;j<=20;j++)
        {
             if ((i>=2 && i<=4 && j>=5 && j<=8) || (i>=7 && j>=8 && j<=13) || (i>=2 && i<=4 && j>=13 && j<=16)  )
                  {
                       printf(" ");
                  }
             else
                    {
                         printf("*");
                    }
       }
         printf("\n");
    }

}

