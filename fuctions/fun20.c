#include<stdio.h>
int hcf(int f,int s)
{
    if(s == 0)      //Base condition
        return f;
        return hcf(s,f%s);
}

int main()
{
    int f,s;
    scanf("%d%d",&f,&s);
    printf("hcf of %d and %d is %d",f,s,hcf(f,s));
}


