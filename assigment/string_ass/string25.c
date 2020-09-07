#include<stdio.h>
char* removeLastOC(char* s,char ch,char rep){
    int i=0,flag=-1;
    while(s[i]!='\0'){
        if(s[i]==ch){
            flag=i;
        }
        i++;
    }
    if(flag==-1){
        return s;
    }
    s[flag]=rep;
    return s;
}
int main(){
    char ch,rep;
    scanf("%c",&ch);
    fflush(stdin);
    scanf("%c",&rep);

    char s[100];
    scanf("%s",s);
    printf("%s",removeLastOC(s,ch,rep));
}

