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

bool areSame(char a, char b)
{
	if (a >= 'A' && a <= 'Z') a = a - 'A' + 'a';
	if (b >= 'A' && b <= 'Z') b = b - 'A' + 'a';
	return a == b;
}

string strip(string s)
{
	stringstream ss;
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == ' ') continue;
		if (s[i] >= 'A' && s[i] <= 'Z') ss << static_cast<char>(s[i] - 'A' + 'a');
		else ss << s[i];
	}

	return ss.str();
}

int main()
{
	string s;
	getline(cin, s);
	bool all = true;

	s = strip(s);
	for (int i = 0, j = size(s) - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			all = false;
			break;
		}
	}

	cout << (all ? "samhverf" : "ekki samhverf") << endl;

	return 0;
}