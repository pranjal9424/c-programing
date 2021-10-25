#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char *k;
    if(n==1)
        k="MON";
    if(n==2)
        k="TUE";
    if(n==3)
        k="WED";
    if(n==4)
        k="THUS";
    if(n==5)
        k="FRI";
    if(n==6)
        k="SAT";
    if(n==7)
        k="SUN";

        printf("%s",k);
}
