#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter any no. :");
    scanf("%d",&a);

    switch(a%2==0)
    {
    case 0:
        printf("eneter no. is odd");
        break;

    case 1:
        printf("enter no. is even");
        break;
    }
}
