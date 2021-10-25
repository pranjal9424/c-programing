#include<stdio.h>
int main(){
   int n,f,fac=1,l;
   scanf("%d",&n);
    for(l=n;l>0;l--)
        fac*=l;

   printf("factorial:- %d",fac);
   return 0;
}

