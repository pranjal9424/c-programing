#include<stdio.h>
unsigned long long fibo(int num)
{
    if(num == 0)      //Base condition
        return 0;
    else if(num == 1) //Base condition
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("value at %d is %d",n,fibo(n));
}

