#include<stdio.h>
int prime(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(prime(i)==1){
            printf("%d ",i);
        }
    }
    return 0;
}
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
