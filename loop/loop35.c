#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    char bin[100];
    gets(bin);
    n=strlen(bin);
    for(int j=0;j<n;j++){
        if(bin[j]=='0'){
            bin[j]='1';
            continue;
        }
        if(bin[j]=='1'){
            bin[j]='0';
            continue;
        }
        if(bin[j]!='1' && bin[j]!='0'){
            printf("error input");
            return 0;
        }
    }
    printf("%s",bin);
}
