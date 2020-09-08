#include<stdio.h>
#include<string.h>
void wordFirstOc(char* str){
           int index=0,flag=0,i;
    while(str[index]!='\0')
    {
        if(str[index]== ' ')
        {
            i=index;
                while(str[i]!='\0'){
                        str[i]=str[i+1];
                     i++;
                }
                continue;

        }
        index++;
    }

    printf("%s",str);
}
void main(){
    char str[100];
    gets(str);

    wordFirstOc(str);

}

