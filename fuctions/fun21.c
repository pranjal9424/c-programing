#include<stdio.h>
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
        return multiple;
    else
        return lcm(a, b);

}
int main()
{
    int f,s;
    scanf("%d%d",&f,&s);
    printf("lcm of %d and %d is %d",f,s,lcm(f,s));
}
