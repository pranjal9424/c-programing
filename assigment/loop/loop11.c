#include<stdio.h>
int main(){
   int n,i,sum=0;
   scanf("%d",&n);
   while(n!=0){
            i=n%10;
            sum+=i;
    n/=10;
   }
   printf("sum =%d\n",sum);

   return 0;
}




