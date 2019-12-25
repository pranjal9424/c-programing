#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg,per;

    printf("enter no. obtain in five sub :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    sum=a+b+c+d+e;
    avg=(a+b+c+d+e)/5;
    per=(a+b+c+d+e)*100/500;
    printf("sum of marks : %d\naverage of marks :%f\npercentage obtain :%f",sum,avg,per);

    return 0;

}
