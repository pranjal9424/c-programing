#include<stdio.h>
int main(){
   int n,i,rev=0,l;
   scanf("%d",&n);
   l=n;
   while(n!=0){
            i=n%10;
            rev=rev*10+i;
    n/=10;
   }
   if(rev==l)
   printf("palindrome");
   else
    printf("Not palindrome");

   return 0;
}







