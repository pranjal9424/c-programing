#include<stdio.h>
#include<math.h>
void    prinarr(int* arr,int s,int e)
{
    if(s>e)
        return;
    printf("%d ",arr[s]);

    return prinarr(arr,s+1,e);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],e=n-1;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("array which you entered:-\n");
    prinarr(arr,0,e);
}
