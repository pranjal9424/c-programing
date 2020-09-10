#include<stdio.h>
int main(){
   int n,i,pro=1;
   scanf("%d",&n);
   while(n!=0){
            i=n%10;
            pro*=i;
    n/=10;
   }
   printf("product=%d\n",pro);

   return 0;
}





