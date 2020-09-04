
#include<stdio.h>
int main(){
    char ch[100], ch2[100];
    scanf("%s",ch);
    scanf("%s",ch2);
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]!=ch2[i]){
            printf("not same");
            return 0;
        }
        i++;
    }
    printf("same");
    return 0;
}


