#include<stdio.h>
void natural(int l,int u){
    if(u<l)
        return;
  printf("%d\n",l);
  natural(++l,u);
}
int main()
{
    int n;
    scanf("%d",&n);
    int l=1;
    natural(l,n);
    return 0;
}

