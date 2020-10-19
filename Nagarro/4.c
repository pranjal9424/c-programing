#include<stdio.h>
int gcd(int n,int* arr)
{
    int hcf;
    hcf=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%hcf==0)
       {
           j++;
       }
       else
       {
           hcf=arr[j]%hcf;
           j++;
       }
    }
    return hcf;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("%d",gcd(n,arr));
    return 0;
}
