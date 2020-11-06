#include<stdio.h>
int main()
{
  int n,k,l;
  scanf("%d",&n);
  for(k=1;k<=n;k++){
    for(l=1;l<=n;l++)
        printf("*");
    printf("\n");
  }
}
