#include<stdio.h>
int main(){
   int b,e,pow=1;
   scanf("%d",&b);
   scanf("%d",&e);

   while(e--){
            pow*=b;
   }
   printf("power=%d\n",pow);

   return 0;
}







