#include<iostream>
using namespace std;
int main()
{
    int n,k,day=0;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(k>0)
            day++;
    }
    cout<<day;
}
