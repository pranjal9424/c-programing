#include<stdio.h>
#include<conio.h>
void main()
{
    int a;

    printf("enter month in no. :");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("manth jan 31 day");
        break;


        case 2:
        printf("manth feb 28 day");
        break;

        case 3:
        printf("manth march 31 day");
        break;

        case 4:
        printf("manth apr 28 day");
        break;

        case 5:
        printf("manth may 31 day");
        break;

        case 6:
        printf("manth jun 30 day");
        break;

        case 7:
        printf("manth jully 31 day");
        break;


        case 8:
        printf("manth aug 31 day");
        break;

        case 9:
        printf("manth sep 30 day");
        break;

        case 10:
        printf("manth oct 31 day");
        break;

        case 11:
        printf("manth nov 30 day");
        break;

        case 12:
        printf("manth dec 31 day");
        break;



        default:
            printf("wrong enter");

            break;


    }
}
