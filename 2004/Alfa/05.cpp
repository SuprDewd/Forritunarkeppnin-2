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
		if (s[i] == ' ') continue;
		else if (s[i] >= 'A' && s[i] <= 'Z') ss << static_cast<char>(s[i] - 'A' + 'a');
		else ss << s[i];
	}

	return ss.str();
}

int main()
{
	string s;
	getline(cin, s);
	s = fix(s);

	bool any = false;
	for (int i = 1; i <= size(s) >> 1; i++)
	{
		bool all = true;
		for (int j = i; j < size(s); j += i)
		{
			for (int k = 0; k < i; k++)
			{
				if (s[j + k] != s[k])
				{
					all = false;
					break;
				}
			}

			if (!all) break;
		}

		if (all)
		{
			cout << "lotan = ";

			for (int j = 0; j < i; j++)
			{
				cout << s[j];
			}

			cout << endl;
			cout << "kemur " << (size(s) / i) << " sinnum fyrir" << endl;

			any = true;
			break;
		}
	}

	cout << (any ? "lotubundinn" : "ekki lotubundinn") << endl;

	return 0;
}