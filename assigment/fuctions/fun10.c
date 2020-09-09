#include<stdio.h>
int pw(int b,int e){
    if(e==0)
        return 1;
   return b*pw(b,e-1);
}
int main()
{
    int b,e,p;
    scanf("%d",&b);
    scanf("%d",&e);

    printf("%d",pw(b,e));
    return 0;
}


