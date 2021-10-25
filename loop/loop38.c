#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,base=2,bin=0,num;
    scanf("%d",&num);
    while(num!=0){

        if(num%10==1){
            bin+=pow(base,n);
        }
        n++;
        num/=10;
    }
    printf("%d\n",bin);

}
