#include<stdio.h>
#include<conio.h>
#define SIZE 8
int main()
{
    char binary[SIZE + 1],onecomp[SIZE + 1];

    int i,error=0;

    printf("Enter %d bit binary value :",SIZE);

    gets(binary);

        for(i=0;i<SIZE;i++)
        {
            if(binary[i] =='1')
            {
                onecomp[i]='0';
            }
            else
                if(binary[i]=='0')
            {
                onecomp[i]='1';
            }
            else
                {
                    printf("invalid input");
                    error=1;
                    break;
                }
        }
        onecomp[SIZE]='0';
        if (error==0)
        {
            printf("original binary =%s\n",binary);
            printf("ones complement =%s",onecomp);
        }
    return 0;
}

