#include<stdio.h>
#include<conio.h>
void main ()
{
    char ch;




    printf("enter alfhabet :");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is vowel",ch);

    }
    else
         printf("%c are consonant",ch);


}



