#include<stdio.h>
void circle(int r)
{
    printf("diameter %d\n",(r*2));
    printf("circumference %.2f\n",2*3.14*r);
    printf("area %.2f\n",3.14*r*r);

}
int main(){
   int r;
   scanf("%d",&r);

   circle(r);
   return 0;
}
