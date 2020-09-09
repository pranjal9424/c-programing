#include<stdio.h>
int sumEven(int l,int e)
{
    if(l>e){
        return 0;
    }
    return l+sumEven(l+2,e);
}
int main()
{
    int l,e;
    printf("enter lower limit:-");
    scanf("%d",&l);

    printf("enter upper limit:-");
    scanf("%d",&e);

    printf("sum of even sum are:-%d",sumEven(l,e));
    return 0;
}
