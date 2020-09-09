#include<stdio.h>
int prime(int i)
{
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num,k;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        k=prime(i);
        if(k==1){
            printf("%d\n",i);
        }
    }
    return 0;
}
