 #include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("enter any integer");
    scanf("%d",&n);

    if(n%2==0)

    {
        printf("\n%d is even",n);
    }
    else
    {
        printf("\n%d is odd",n);
    }


    getch();
}
