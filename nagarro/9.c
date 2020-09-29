#include<stdio.h>
int* so(int* arr,int n)
{
    int g=0,temp;
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            temp=arr[i];
            arr[i]=arr[g];
            arr[g]=temp;
            g++;
        }
    }
    return arr;
}
int main()
{
    int n,*p;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    p=so(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}
