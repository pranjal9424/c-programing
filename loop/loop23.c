#include<stdio.h>
int main()
{
    int n1,n2,lcm,i,max;
    printf("first no.:-");
    scanf("%d",&n1);
    printf("Second no.:-");
    scanf("%d",&n2);

    max=(n1>n2)? n1:n2;
    i=max;
    while(1){
        if(i%n1==0 && i%n2==0){
            lcm=i;
            break;
        }
        i+=max;
    }
    printf("lcm of %d and %d is %d",n1,n2,lcm);
}
