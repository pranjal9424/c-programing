#include<stdio.h>
int main()
{
  int r,c,i,j,k;
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
  {
      for(k=0;k<i;k++)
        printf(" ");
      for(j=0;j<c;j++)
        printf("*");
      printf("\n");
  }
}
