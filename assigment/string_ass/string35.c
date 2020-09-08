#include<stdio.h>
void trimleading(char* str){
    int index,i;
    index=-1;

        i=0;
        while(str[i] != '\0'){
            if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n'){
               index=i;
            }
            i++;
        }
        str[index+1]='\0';
}
void main(){
  char str[100];
  gets(str);
  trimleading(str);
  printf("%s",str);
}

