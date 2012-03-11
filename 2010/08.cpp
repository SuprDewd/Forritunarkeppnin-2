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
#include "regex.h"
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

bool ok(string s)
{
	bool inside = false;
	int starts = 0;
	int commas = 0;
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == ')')
		{
			if (!inside) return false;
			inside = false;
		}
		else if (s[i] == '(')
		{
			if (inside) return false;
			starts++;
			if (starts > 4) return false;
			inside = true;
		}
		else if (s[i] == '-')
		{

		}
	}
}

int main()
{
	string line;
	getline(cin, line);



	return 0;
}