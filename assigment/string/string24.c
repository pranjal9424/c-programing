#include<stdio.h>
char* removeFirstOC(char* s,char ch,char rep){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==ch){
            s[i]=rep;
            break;
        }
        i++;
    }
    return s;
}
int main(){
    char ch,rep;
    scanf("%c",&ch);
    fflush(stdin);
    scanf("%c",&rep);

    char s[100];
    scanf("%s",s);
    printf("%s",removeFirstOC(s,ch,rep));
}
