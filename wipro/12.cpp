#include<iostream>
using namespace std;
int main()
{
    int n,k,t;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        cout<<arr[k-1];
}

/*
          input : 7
                  5
                  9 -3 8 -6 -7 18 10
          output : 9
*/

