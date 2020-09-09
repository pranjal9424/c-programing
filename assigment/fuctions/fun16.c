#include<stdio.h>
#include<math.h>
int pali(int n)
{
    int digit=(int)log10(n);

    if(n==0)
        return 0;
    return ((n%10*pow(10,digit))+pali(n/10));
}
int main(){
     int n;
     scanf("%d",&n);
     if(pali(n)==n)
     printf("%d IS PALINDROME",n);
     else
     printf("%d IS NOT PALINDROME",n);

}

