#include<iostream>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    if(prime(arr[i])==1)
        cout<<arr[i]<<" ";
    for(int i=0;i<n;i++)
    if(prime(arr[i])==0)
        cout<<arr[i]<<" ";
}
