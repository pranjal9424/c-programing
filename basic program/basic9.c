#include<stdio.h>
#include<conio.h>
int main()
{
    int day,year,week;

    printf("enter day :");
    scanf("%d",&day);

     year=(day / 365);
     week=(day%365)/7;
     day=day-((year * 365)+(week * 7));
     printf("year :%d \nweek :%d \nday :%d",year,week,day);


}



