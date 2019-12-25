#include<stdio.h>
#include<conio.h>
void main()
{
    float f;

    printf("enter your point");
    scanf("%f",&f);

    if(f>=9)
    {
        printf("a grade");
        }

    else
        if(f>=7.5)
        {
            printf("B grade");
        }
        else
            if (f>=6.0)
        {
            printf("c grade");
        }
        else
            if (f>=4.0)
        {
            printf("d grade");
        }
        else
            if (f<4.0)
        {
            printf("kyon re");
        }
        else
       getch();
}
