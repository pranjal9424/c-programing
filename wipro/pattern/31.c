#include<stdio.h>
int main()
{
    int n=4,k=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<n-1;j++)
        k++;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            k++;
            printf("%d*",k);
        }
        printf("%d\n",++k);
        k=k-2*n;
    }
}
