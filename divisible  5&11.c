#include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("ENTER ANY NO. :");
    scanf("%d",&n);

    if (n%5==0)
    {
        printf("\n %d is divisible by 5",n);
    }
    else

        if (n%11==0)
    {
        printf("\n %d is divisible by 11",n);
    }
    else
    {
        printf("\n %d is not divisible by 5 and 11",n);
    }
}
