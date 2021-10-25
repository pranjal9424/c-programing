#include<stdio.h>
int main()
{
    int n,sum=0,l,k;
    scanf("%d",&n);
    l=n;
    while(n!=0){
        k=n%10;
            sum+=k*k*k;
        n/=10;
    }
    if(sum==l)
        printf("%d is armstrong no.",l);
    else
        printf("%d is not armstrong no.",l);
    return 0;
}

