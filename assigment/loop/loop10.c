#include<stdio.h>
int main(){
   int n,i=1,sum=0,l;
   scanf("%d",&l);
   n=l;
   while(n!=0){
            i=n%10;
    n/=10;
   }
   printf("first digit=%d\n",i);
   printf("last digit=%d\n",l%10);


   return 0;
}



