#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i=0;
    while(argv[1][i]!='\0'){
    if(argv[1][i]>='A' && argv[1][i]<='Z')
        argv[1][i]=argv[1][i]+32;
    i++;
    }

        printf("%s",argv[1]);
}


