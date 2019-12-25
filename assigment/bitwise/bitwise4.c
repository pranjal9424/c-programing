#include<stdio.h>
#include<conio.h>

void main ()
{
    int a,n, newnum;

    printf("enter any no. :");
    scanf("%d",&a);

    printf("enter bit no. b/w (0-31) :");
    scanf("%d",&n);

    newnum=(1 << n) | a;

    printf("bit set successfully . \n\n");
    printf("number before setting %d bit : %d (in decimal)\n",n,a);
    printf("number after setting %d bit : %d (in decimal)\n",n,newnum );



}

