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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL

template <class T> int size(T x) { return x.size(); }

char toLower(char c)
{
	if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
	return c;
}

char toUpper(char c)
{
	if (c >= 'a' && c <= 'z') c = c - 'a' + 'A';
	return c;
}

string fix(string s)
{
	stringstream ss;
	char last = ' ';
	bool dotlast = true;
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == ' ')
		{
			if (last != ' ')
			{
				ss << s[i];
			}
		}
		else if (s[i] == '.')
		{
			ss << ". ";
			dotlast = true;
			last = ' ';
			continue;
		}
		else
		{
			ss << (dotlast ? toUpper(s[i]) : toLower(s[i]));
			dotlast = false;
		}

		last = s[i];
	}

	return ss.str();
}

int main()
{
	string line;
	getline(cin, line);
	cout << fix(line) << endl;

	return 0;
}