#include<stdio.h>

//using formulla
int charity(int n)
{
    int sum;
    sum=(n*(n+1)*(2*n+1))/6;
    return sum;
}
/* brute force
{
    int n;
    scanf("%d",&n);
    int sum=0,i;
    for(i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("%d",sum);
}
*/

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",charity(n));
}
