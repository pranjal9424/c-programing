#include<stdio.h>
char* up(char* ch){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]+=32;
        }
        i++;
    }
    return ch;
}
int main(){
    char ch[100];
    scanf("%s",ch);

    printf("%s",up(ch));
    return 0;
}



