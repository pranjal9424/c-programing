#include<stdio.h>
int up(char* ch){
    int i=0,c=0;
    while(ch[i]!='\0'){
        if((ch[i]>='A' && ch[i]<='Z')  || (ch[i]>='a' && ch[i]<='z')){
            c++;
        }
        i++;
    }
    return c;
}
int main(){
    char ch[100];
    scanf("%s",ch);

    printf("%d",up(ch));
    return 0;
}




