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

   while(rev!=0){
            i=rev%10;

            if(i==0)
                printf("zero ");
            if(i==1)
                printf("one ");
            if(i==2)
                printf("two ");
            if(i==3)
                printf("three ");
            if(i==4)
                printf("four ");
            if(i==5)
                printf("five ");
            if(i==6)
                printf("six ");
            if(i==7)
                printf("seven ");
            if(i==8)
                printf("eight ");
            if(i==9)
                printf("nine ");

    rev/=10;
   }

}








