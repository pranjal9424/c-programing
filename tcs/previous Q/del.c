#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0,temp;
    for(i=1;i<n;i++){
        if(arr[i]==0)
        {
             temp=arr[k];
             arr[k]=arr[i];
             arr[i]=temp;
             k++;
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
