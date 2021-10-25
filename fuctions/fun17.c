#include<stdio.h>
#include<math.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return (n%10+sum(n/10));
}
int main(){
     int n;
     scanf("%d",&n);

     printf("sum of this %d no. is %d",n,sum(n));

}


