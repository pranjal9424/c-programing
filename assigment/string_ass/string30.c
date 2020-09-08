#include<stdio.h>
#include<string.h>
int countWord(char* str,char* word)
{
    int i=0,flag=0,j,co=0;
    while(str[i]!='\0'){
        if(str[i]==word[0]){
            flag=1;
            j=0;
            while(word[j]!='\0'){
                 if(str[i+j]!=word[j]){
                    flag=0;
                    break;
                 }
                 j++;
            }
        }
        if(flag==1){
            co++;
            flag=0;
        }
        i++;
    }
    return co;
}
void main()
{
    char str[100],word[100];
    gets(str);
    gets(word);

    printf("%d",countWord(str,word));
}
