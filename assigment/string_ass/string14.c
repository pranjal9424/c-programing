#include<stdio.h>>
void LastOccurrence(char* s,char ch){
      int flag=-1,i=0;
      while(s[i]!='\0'){
        if(s[i]==ch){
            flag=i;
        }
        i++;
      }
      if(flag==-1)
          printf("not found");
      else
          printf("last occurrence %d",flag+1);
}

int main(){
   char ch;
   scanf("%c",&ch);
   char s[100];
   scanf("%s",s);

   LastOccurrence(s,ch);
}
