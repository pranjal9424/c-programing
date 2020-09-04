#include<stdio.h>
void up(char* ch){
    int i=0,c=0,v=0;
    while(ch[i]!='\0'){
        if( ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
            v++;
        }
        else
            c++;
        i++;
    }
    printf("con %d\n",c);
    printf("vov %d",v);
}
int main(){
    char ch[100];
    scanf("%s",ch);

    up(ch);
    return 0;
}




