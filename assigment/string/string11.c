
#include<stdio.h>
char* up(char* ch){
    int i=0;
    char temp;
    while(ch[i]!='\0'){
        i++;
    }
    int f=0,l=i-1;
    while(f<l){
        temp=ch[f];
        ch[f]=ch[l];
        ch[l]=temp;
        f++;
        l--;
    }
    return ch;
}
int main(){
    char ch[100];
    scanf("%s",ch);

    printf("%s",up(ch));
    return 0;
}


