#include<stdio.h>
#include<conio.h>
void main()
{
    int n, num,rev=0;

    printf("enter any no. :");
    scanf("%d",&n);

    num=n;

    while(n !=0)
    {
        rev =(rev*10)+(n%10);

        n/=10;
    }

    while (rev !=0)
    {
        switch (rev %10)
        {
        case 0 :
            printf("zero ");
            break;

            case 1 :
            printf("one ");
            break;

            case 2 :
            printf("two ");
            break;

            case 3 :
            printf("three ");
            break;

            case 4 :
            printf("four ");
            break;

            case 5 :
            printf("five ");
            break;

            case 6 :
            printf("six ");
            break;

            case 7 :
            printf("seven ");
            break;

            case 8 :
            printf("eight ");
            break;

            case 9 :
            printf("nine ");
            break;
        }
        rev = rev/10;
    }
}

