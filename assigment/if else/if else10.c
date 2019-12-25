 #include<stdio.h>
#include<conio.h>
void main ()
/*
{
    char ch;

    printf("enter any no. :");
    scanf("%c",&ch);

    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))


    printf("%c input are alphabet",ch);

    else


    if (ch>='0' && ch<='9')


    printf("%c input are digit",ch);



   else
     printf("%c input are special",ch);



}*/



{

    char ch;

    printf("enter any no. :");
    scanf("%c",&ch);

    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))


    printf("%c input are alphabet",ch);

    else


    if (ch>=48 || ch<=57)


    printf("input are digit");



   else
     printf("input are special");

getch();

}
