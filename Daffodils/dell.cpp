#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--){
    string s;
    cin>>s;
    bool val
        = next_permutation(s.begin(),
                           s.end());
    if (val == false)
        cout << "No Word Possible"
             << endl;
    else
        cout << s << endl;
    }
    return 0;
}
