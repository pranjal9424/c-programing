#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num,rev=0;

    printf("enter any no. for polindrome :");
    scanf("%d",&n);

  num=n;

    while (n != 0)
    {
        rev=(rev*10) +(n%10);

        n /= 10;
    }

    if (rev == num)
    {
        printf("%d are polindrome",rev);
    }
    else
    {
        printf("%d are not polindrome",rev);
    }
}
