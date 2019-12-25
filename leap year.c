#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("ENTER ANY YEAR :");
    scanf("%d",&n);

    if (n%4==0)

    {
        printf("\n %d is leap ",n);
    }
    else
    {
        printf("\n  %d is not leap year",n);
    }
}
