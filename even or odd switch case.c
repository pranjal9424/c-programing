#include<stdio.h>
#include<conio.h>
void main()
{
    int c;

    printf("ENTER ANY CHAR.  :");
    scanf("%d",&c);


    switch(c%2)
    {
    case 0 :
        printf("%d is an even \n",c);
        break;

    case 1 :
                printf("%d is an odd \n",c);
        break;

    }
    getch();

}
