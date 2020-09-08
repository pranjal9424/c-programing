#include<stdio.h>
#include<string.h>
void wordFirstOc(char* str,char* word){
           int index=0,flag=0,i;
    while(str[index]!='\0')
    {
        if(str[index]==word[0])
        {
                flag=1;
                i=0;
                while(word[i]!='\0'){
                     if(str[index+i]!=word[i]){
                           flag=0;
                           break;
                     }
                     i++;
                }

        }
        if(flag==1){
            printf("%s found at %d index\n",word,index+1);
            flag=0;
        }
        index++;
    }
    }
void main(){
    char str[100],word[100];
    gets(str);
    gets(word);

    wordFirstOc(str,word);

}
