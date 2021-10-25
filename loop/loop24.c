#include<stdio.h>
int main(){
   int n,flag=1,l;
   scanf("%d",&n);

    for(l=2;l<=n/2;l++)
        if(n%l==0){
          flag=0;
          break;
        }
        if(flag==1){
            printf("%d is prime no.",n);
        }
        else
            printf("%d is not prime no.",n);

   return 0;
}


