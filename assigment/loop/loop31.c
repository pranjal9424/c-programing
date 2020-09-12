#include <stdio.h>

int main()
{
    int n,l,sum,k,fact;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=0;
        l=i;
        while(l!=0){
            k=l%10;
            fact=1;
            for(int j=1;j<=k;j++){
                fact*=j;
            }
            sum+=fact;
            l/=10;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}
