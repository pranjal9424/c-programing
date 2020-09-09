#include<stdio.h>
char* even(int a)
{
    if(a%2==0)
        return "EVEN";
    else
        return "ODD";

}
int main(){
   int a;
   scanf("%d",&a);

   printf("%s",even(a));
   return 0;
}
