#include<stdio.h>
int main()
{
    int n,arm=0,k,m;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        arm=0;
        m=j;
        while(m!=0){
            k=m%10;
            arm+=k*k*k;
            m/=10;
        }
        if(arm==j)
           printf("%d \n",j);
    }
    return 0;
}


