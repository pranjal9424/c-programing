#include<stdio.h>
#include<string.h>
void FirstOccurense(char* s,char ch){
    int flag=-1,i=1;
    while(s[i]!='\0'){
        if(s[i]==ch){
            flag++;
            break;
        }
        i++;
    }
    if(flag==-1)
         printf("not found");
    else
        printf("first occurrence postion %d",i);
}
int main(){
   char ch;
   scanf("%c",&ch);
   char s[100];
   scanf("%[^/n]s",s);

   FirstOccurense(s,ch);
}

