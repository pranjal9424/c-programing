#include<stdio.h>
int facto(int k)
{
    int fact = 1,i;
        for(i=1; i<=k; i++)
        {
            fact = fact * i;
        }
        return fact;
}
int main(){
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
   int temp=i,sum=0,k;
   while(temp!=0){
    k=temp%10;
    sum=sum+facto(k);
    temp=temp/10;
   }
   if(i==sum)
      printf("%d strong\n",sum);
   }
   return 0;
}

