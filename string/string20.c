#include<stdio.h>
#include<string.h>
char* del(char* s,char ch){
    int i=0,n=strlen(s);
    char *f;
    while(i<n && s[i]!=ch){
        i++;
    }

    while(i<n){
            s[i]=s[i+1];
        i++;
    }
   return f=s;

}
int main(){
   char ch;
   scanf("%c",&ch);

   char s[100];
   scanf("%s",s);

   printf("%s",del(s,ch));
   return 0;
}
