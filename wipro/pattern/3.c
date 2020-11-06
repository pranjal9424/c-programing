#include<stdio.h>
int main()
{
  int n,k,l,m;
  scanf("%d",&n);
  for(k=0;k<n;k++){
    for(l=0;l<k;l++)
        printf(" ");
    for(m=0;m<n;m++)
            printf("*");
    printf("\n");
  }
}
