#include<stdio.h>
#include<conio.h>
int main()
{
    int octalconstant[]={0,1,10,11,100,101,110,111};

    long long binary,octal,tempbinary;

    int digit,place,i;

    octal=0;
    place=1;

    printf("enter any binary no. :");
    scanf("%lld",&binary);

    tempbinary=binary;
    while(tempbinary !=0)
    {
        digit=tempbinary % 1000;

        for (i=0;i<8;i++)
        {
            if(octalconstant[i]==digit)
            {
                octal =(i*place)+octal;
                break;
            }
        }
        tempbinary /=1000;
        place *=10;

    }
    printf("original binary number =%lld\n",binary);
    printf("octal number =%lld",octal);
    return 0;
}
