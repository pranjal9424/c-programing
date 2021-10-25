#include<stdio.h>
#include<math.h>
int rev(int n)
{
    int digit=(int)log10(n);

    if(n==0)
        return 0;
    return ((n%10*pow(10,digit))+rev(n/10));
}
int main(){
     int n;
     scanf("%d",&n);

     printf("%d",rev(n));
}
