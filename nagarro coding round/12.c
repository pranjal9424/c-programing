#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sumSub(int* arr,char* str,int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        if(str[i]=='P')
            sum=sum+arr[i];
        else
            sum=sum-arr[i];
    }

    return abs(sum)*100;
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int n;
    scanf("%d",&n);
    int sum=0,i,arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",sumSub(arr,str,n));
}
