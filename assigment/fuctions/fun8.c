#include<stdio.h>
int arm(int num)
{
    int org=num,sum=0,rem;
    while(org!=0){
        rem=org%10;
        sum+=rem*rem*rem;
        org/=10;
    }
        return sum;

}
int main() {
    int num,i;
    scanf("%d", &num);
    for(i=1;i<=num;i++){
       if(i==arm(i))
          printf("%d strong\n",i);
    }

    return 0;
}
