#include <stdio.h>
int derangements(int N){
   if (N == 0)
      return 1;
   if (N == 1)
      return 0;
   if (N == 2)
      return 1;
   return (N - 1) * (derangements(N - 1) + derangements(N - 2));
}
int main(){
   int Numbers;
   scanf("%d",&Numbers);
   printf("%d",derangements(Numbers));
}

