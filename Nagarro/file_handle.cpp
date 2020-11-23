#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myFile.dat");
    fout<<"hello";
    fout.close();
}
