#include<stdio.h>
int perfect(int n){
  int sum=0;
  for(int j=1;j<n;j++){
    if(n%j==0){
        sum+=j;
    }
  }
  return sum;
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i==perfect(i)){
            printf("%d is perfect\n",i);
        }
    }
}
