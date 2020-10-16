#include<stdio.h>
#include<string.h>
int polidrone(char* s){
     int n=strlen(s);
     int i=0,e=n-1;
     char ch[100];
     while(s[i]!='\0'){
        ch[e]=s[i];
        ++i;
        --e;
    }
    ch[n]='\0';
    for(int l=0;l<n;l++){
        if(s[l]!=ch[l]){
            printf("Not Palindrome");
            return 0;
        }
    }
        printf("Palindrome");
        return 0;
}
int main(){
   char s[100];
   scanf("%s",s);
   polidrone(s);
}
