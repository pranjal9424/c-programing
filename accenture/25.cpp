#include <iostream>
using namespace std;
int numbersum(int* arr,int n)
{
    int mn=INT_MAX;
    int mx=INT_MIN;

    for(int i=0;i<n;i++){
        if(mn>arr[i])
            mn=arr[i];
        if(mx<arr[i])
            mx=arr[i];
    }

    return mn+mx;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<numbersum(arr,n);
    return 0;
}
