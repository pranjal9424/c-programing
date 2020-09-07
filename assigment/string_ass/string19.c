#include <stdio.h>
#include <string.h>
void countString(char* s){
    int c = 0, count[26] = {0}, x,i=0;
    while(s[i]!='\0'){
        if (s[i] >= 'a' && s[i] <= 'z'){
        x=s[i]-'a';
        count[x]++;
    }
        i++;
    }
    for(c=0;c<26;c++){
        if(count[c]!=0){
            printf("%c are occurrence %d \n",c+'a',count[c]);
        }
    }

}
int main()
{
   char string[100];

   printf("Enter a string\n");
   scanf("%s",string);

    countString(string);
   return 0;
}
