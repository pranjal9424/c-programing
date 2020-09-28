#include<stdio.h>
int pri(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(pri(i)==1){
            printf("%d ",i);
        }
    }
    return 0;
}
int pri(int n)
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
