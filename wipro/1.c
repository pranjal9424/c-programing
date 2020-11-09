#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);

    int i=0,j=0,l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    while(i<l1 && j<l2)
    {
        if(str1[i]!=str2[j]){
            printf("%c",str1[i]);
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    for(int k =i;k<l1;k++)
        printf("%c",str1[k]);
}
