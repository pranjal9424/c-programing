#include<stdio.h>
#include<string.h>
void LastOccurrence(char* s){
      int flag=-1,i=0,n=strlen(s),h=0,f,j;
      char ch='\0';
      for(i;i<n-1;i++){
            f=0;
            for(j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    f++;
                }
            }
            if(h<f){
                h=f;
                ch=s[i];
            }
      }
      if(h==0)
              printf("no highest");
      else
      printf("%c highest with %d",ch,h+1);
}

int main(){
   char s[100];
   scanf("%s",s);

   LastOccurrence(s);
}


