#include<stdio.h>
int main(){
   int l,n,i,sum=0;
   scanf("%d",&n);
   l=n;
   while(n!=0){
        i=n%10;
        sum+=i*i*i;
        n/=10;
   }
   if(sum==l)
       printf("armstrong");
   else
       printf("not armstrong");

   return 0;
}




