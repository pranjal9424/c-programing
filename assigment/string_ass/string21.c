#include<stdio.h>
#include<string.h>
char* del(char* s,char ch){
    int i=0,n=strlen(s),flag=-1;
    char *f;
    while(s[i]!='\0'){
            if(s[i]==ch){
                flag=i;
            }
        i++;
    }

    while(flag<n){
            s[flag]=s[flag+1];
        flag++;
    }
    f=s;
    return f;

}
int main(){
   char ch;
   scanf("%c",&ch);

   char s[100];
   scanf("%s",s);

   printf("%s",del(s,ch));
   return 0;
}

