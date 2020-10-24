#include<stdio.h>
int main()
{
    int a[3];
    int b[3];
    int c[3];

    float avg[3];

    int i,j,sum=0,max;

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        scanf("%d",&c[i]);
    }

        for(j=0;j<3;j++){
            sum=sum+a[j];
        }
        avg[0]=sum/3;
        sum=0;
        for(j=0;j<3;j++){
            sum=sum+b[j];
        }
        avg[1]=sum/3;
        sum=0;
        for(j=0;j<3;j++){
            sum=sum+c[j];
        avg[2]=sum/3;
        }

    max=avg[0];
    for(i=1;i<3;i++)
        if(max<avg[i])
            max=avg[i];

    for(i=0;i<3;i++)
    {
        if(avg[i]==max)
        {
            if(max>70)
                printf("Trainee Number:%d\n",i+1);
            else
                printf("Trainee unfit");

        }
    }
}








