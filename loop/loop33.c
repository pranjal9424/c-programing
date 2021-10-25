#include<stdio.h>
int main()
{
    int n,flag,sum=0;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
            flag=1;
    for(int i=2;i<=j/2;i++){
        if(j%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1)
        sum+=j;
    }

    printf("%d\n",sum);

    return 0;
}


