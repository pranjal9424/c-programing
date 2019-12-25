#include<stdio.h>
#include<conio.h>
void main()
{
    int ch;

    printf("ENTER ANY CHAR. :");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    printf("\n %c is vowel",ch);
    break ;

    default:
    printf("\n%c is not vowel",ch);
    break;

    }
    getch();

}
