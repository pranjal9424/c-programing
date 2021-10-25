#include<stdio.h>
#include<conio.h>
int main ()

{

    char ch;

    printf("enter any no. :");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')


    printf("%c is alphabet",ch);

    else

    printf("%c is not alphabet",ch);

}

/*


{

    int ch;

    printf("enter any no. :");
    scanf("%d",&ch);

    if (ch>=65 && ch<=90)
    printf("%c is alphabet",ch);

    else

    printf("%c is not alphabet",ch);

}

*/
