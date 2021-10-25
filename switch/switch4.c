#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;

    printf("enter any two no. :");
    scanf("%d%d",&a,&b);

    switch(a>b)
    {
    case 0 :
        printf("%d is smaller than %d ",a,b);
        break;

        case 1 :
        printf("%d is greater than %d ",a,b);
        break;
    }
}
