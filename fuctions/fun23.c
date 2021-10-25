#include<stdio.h>
#include<math.h>
int sumarr(int* arr,int s,int e)
{
    if(s>e)
        return 0;
    return arr[s]+sumarr(arr,s+1,e);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],e=n-1;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("sum of array which you entered:- (%d)",sumarr(arr,0,e));
}

