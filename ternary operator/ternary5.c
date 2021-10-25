#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;

    printf("enter any alphabet :");
    scanf("%c",&ch);

    (ch>='a' && ch<='z') ?

    printf("%c is alphabet",ch):

        printf("%c is other ",ch);
}
