#include<stdio.h>
int main(){
   int n,i,rev=0;
   scanf("%d",&n);
   while(n!=0){
            i=n%10;
            rev=rev*10+i;
    n/=10;
   }
   printf("reverse=%d\n",rev);

   return 0;
}






