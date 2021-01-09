#include<iostream>
using namespace std;
int main()
{
    int nd,ld,td,fd,year;
    cin>>year;
    nd=(year-1)*365;
    ld=(year-1)/4-(year-1)/100+(year-1)/400;
    td=nd+ld;
    fd=td%7;

    if(fd==0)
        cout<<"mon";
    if(fd==1)
        cout<<"tue";
    if(fd==2)
        cout<<"wed";
    if(fd==3)
        cout<<"thu";
    if(fd==4)
        cout<<"fri";
    if(fd==5)
        cout<<"sat";
    if(fd==6)
        cout<<"sun";
}
