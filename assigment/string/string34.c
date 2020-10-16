#include<stdio.h>
void trimleading(char* str){
    int index,i,j;
    index=0;
    while(str[index]==' ' || str[index]=='\t' || str[index]=='\n'){
        index++;
    }

    if(index!=0){
        i=0;
        while(str[i+index] != '\0'){
            str[i]=str[i+index];
            i++;
        }
        str[i]='\0';
    }
}
void main(){
  char str[100];
  gets(str);
  trimleading(str);
  printf("%s",str);
}
