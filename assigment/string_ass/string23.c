#include<stdio.h>
void sst(char* s,char ch){
    int i=0,flag;
    while(s[i]!='\0'){
        if(s[i]==ch){
            flag=i;
            while(s[flag]!='\0'){
                s[flag]=s[flag+1];
                flag++;
            }
            continue;
        }
        i++;
    }
    printf("%s",s);
}
int main(){
   char ch;
   scanf("%c",&ch);
   char s[100];
   scanf("%s",s);

   sst(s,ch);
   return 0;
}
