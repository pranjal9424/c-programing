
#include<stdio.h>
int main(){
    char ch[100] = "i am ", ch2[] = "best";
    //scanf("%s",ch);
    //scanf("%s",ch2);
    int l=0,i=0;
    while(ch[i]!='\0'){
        ++l;
        ++i;
    }
    i=0;
    while(ch2[i]!='\0'){
        ch[l]=ch2[i];
        l++;
        i++;
    }
    ch[l]='\0';
    printf("%s",ch);
    return 0;
}

