#include<stdio.h>
#include<math.h>
int rev(int n)
{
    if(n==1)
        return 1;
    return n*rev(n-1);
}
int main(){
     int n;
     scanf("%d",&n);

     printf("factorial of %d no. is %d",n,rev(n));

}



