#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    for(int j=1;j<=n;j++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}




