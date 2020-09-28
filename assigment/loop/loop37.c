#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,base=2,bin=0,num,place=1;
    scanf("%d",&num);
    long int octal=0,tempDecimal,rem;
    while(num!=0){

        if(num%10==1){
            bin+=pow(base,n);
        }
        n++;
        num/=10;
    }
    tempDecimal=bin;
    while(tempDecimal > 0)
    {
        rem = tempDecimal % 8;

        octal = (rem * place) + octal;

        tempDecimal /= 8;

        place *= 10;
    }
    printf("%d\n",bin);
    printf("%d",octal);

}
