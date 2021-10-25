#include<stdio.h>
int square(int a)
{
    return a*a*a;
}
int main(){
   int a;
   scanf("%d",&a);

   printf("%d",square(a));
   return 0;
}
