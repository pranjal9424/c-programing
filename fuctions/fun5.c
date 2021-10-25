#include <stdio.h>
char* perfect(int num)
{ int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum+=i;
    }
    if(sum==num)
       return "PERFECT NO.";
    else
        return "NOT PERFECT NO.";
}
char* prim(int num)
{
    for(int i=2;i<=num/2;i++){
        if(num%i==0)
            return "NOT PRIME";
    }
    return "PRIME";
}
char* arm(int num)
{
    int org=num,sum=0,rem;
    while(org!=0){
        rem=org%10;
        sum+=rem*rem*rem;
        org/=10;
    }
    if(sum==num)
        return "ARMSTRONG";
    else
        return "NOT ARMSTRONG";

}
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    printf("%d is %s\n%d is %s\n%d is %s",num,arm(num),num,prim(num),num,perfect(num));

    return 0;
}
