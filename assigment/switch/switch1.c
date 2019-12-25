#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;

    printf("enter any alphabet :");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        printf("%c is vowel",ch);
        break ;

    default:

    printf("%c is consonant",ch);
    break;
    }
}
