#include<stdio.h>
int main(){
    int i=0,c=0;
    char ch[100];
    scanf("%s",ch);
    while(ch[i]!='\0'){
        c++;
        i++;
    }
    printf("%d",c);
    return 0;
}

