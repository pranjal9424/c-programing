#include<stdio.h>
#include<string.h>
int main()
{
    int n,cc=1,i=0;
    char bin[100];
    gets(bin);
    while(bin[i]!='\0'){
        if(bin[i]=='0')
            bin[i]='1';
        else
            bin[i]='0';
        i++;
    }
    bin[i]='\0';
    while(bin[--i]!='\0'){
        if(bin[i]=='1' && cc==1)
            bin[i]='0';
        else
        if(bin[i]=='0' && cc==1){
            bin[i]='1';
            cc=0;
        }

    }
    printf("%s",bin);
}
