#include<stdio.h>
int main(){
    int i=0,c=0;
    char ch[100],ch2[100];
    scanf("%s",ch);
    while(ch[i]!='\0'){
        ch2[i]=ch[i];
        ++i;
    }

    //imp
    ch2[i]='\0';
    printf("%s",ch2);
    return 0;
}

