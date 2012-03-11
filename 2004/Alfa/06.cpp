#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()
#define INF 2147483647

template <class T> int size(T x) { return x.size(); }

string fix(string s)
{
	stringstream ss;
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') ss << static_cast<char>(s[i] - 'A' + 'a');
		else ss << s[i];
	}

	return ss.str();
}

string toUpper(string s)
{
	stringstream ss;
	for (int i = 0; i < size(s); i++)
	{
		ss << static_cast<char>(s[i] - 'a' + 'A');
	}

	return ss.str();
}

int main()
{
	string s;
	getline(cin, s);
	s = fix(s);

	map<string, int> cnts;

	for (int i = 0; i < size(s); i++)
	{
		for (int j = 2; j <= size(s) - i; j++)
		{
			string cur = s.substr(i, j);
			cnts[cur]++;
		}
	}

	for (map<string, int>::const_iterator it = cnts.begin(); it != cnts.end(); it++)
	{
		if (it->second >= 2)
		{
			int at = 0;
			while (true)
			{
				string::iterator it = s.find(it->first, at);
				if (it != string::npos)
				{
					s.replace(it, it + size(it->first), toUpper(it->first));
					at += size(it->first);
				}
				else break;
			}
		}
	}

	cout << s << endl;

	return 0;
}