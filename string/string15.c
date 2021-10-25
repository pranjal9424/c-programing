#include<stdio.h>
void LastOccurrence(char* s,char ch){
      int flag=0,i=0;
      while(s[i]!='\0'){
        if(s[i]==ch){
            printf("%c occurrence at %d\n",ch,i);
        }
        i++;
      }

}

int main(){
   char ch;
   scanf("%c",&ch);
   char s[100];
   scanf("%s",s);

   LastOccurrence(s,ch);
}
