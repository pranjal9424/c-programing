 #include<stdio.h>
#include<conio.h>
void main ()

{
    char ch;

    printf("enter any no. :");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')

    printf("%c input are lower alphabet",ch);

    else
    if (ch>='A' && ch<='Z')

    printf("%c input are upper alphabet",ch);


}
