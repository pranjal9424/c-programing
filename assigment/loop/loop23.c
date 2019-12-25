#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n1,n2,mx,lcm=1;

    printf("enter any two no. :");
    scanf("%d%d",&n1,&n2);

    mx=(n1<n2)? n1: n2;

    i=mx;

    while (1)
    {
        if (i%n1==0 && i%n2==0)
        {
            lcm =i;

            break ;
        }
        i += mx;
    }
    printf("LCM of %d & %d =%d",n1,n2,lcm);

    return 0;
}
