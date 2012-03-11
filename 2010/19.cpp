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

int main()
{
	string pass;
	cin >> pass;
	string key = "";
	int last;
	for (int i = 0; i < size(pass); i++)
	{
		char cur = pass[i] - 'A' + 'a';
		if (key.find(cur) == string::npos)
		{
			key = key + cur;
			last = cur - 'a';
		}
	}

	for (int i = last + 1; i != last; i = (i + 1) % ('Z' - 'A' + 1))
	{
		if (key.find(static_cast<char>('a' + i)) == string::npos)
		{
			key = key + static_cast<char>('a' + i);
		}
	}

	string s;
	cin >> s;
	for (int i = 0; i < size(s); i++)
	{
		cout << key[s[i] - 'a'];
	}

	cout << endl;

	return 0;
}