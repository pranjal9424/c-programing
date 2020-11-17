#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#define CHAR_RANGE 128


string longestSubstr(string str)
{
	int k = (int)(str[0])-48;
	int n = str.length();

	int end = 0, begin = 0;
	unordered_set<char> window;

	int freq[CHAR_RANGE] = { 0 };

	for (int low = 0, high = 0; high < n; high++)
	{
		window.insert(str[high]);
		freq[str[high]]++;

		while (window.size() > k)
		{
			if (--freq[str[low]] == 0)
				window.erase(str[low]);

			low++;
		}

		if (end - begin < high - low)
		{
			end = high;
			begin = low;
		}
	}

	return str.substr(begin, end - begin + 1);
}

int main()
{
	string str="3aabacbebebe";
	cout << longestSubstr(str);
	return 0;
}
