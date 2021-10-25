#include<stdio.h>
int main(){
   int n,f,rev=0,l;
   scanf("%d",&n);
    for(l=1;l<n;l++)
        if(n%l==0)
          printf("%d  ",l);

   return 0;
}

