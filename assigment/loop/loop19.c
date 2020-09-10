#include<stdio.h>
int main(){
   int n,f,rev=0,l;
   scanf("%d",&n);
   l=n%10;
   while(n!=0){
            f=n%10;
    n/=10;
   }
    printf("sum=%d",l+f);

   return 0;
}
