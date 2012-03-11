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

char ov(char c)
{
	if (c == ')') return '(';
	if (c == ']') return '[';
	return 0;
}

bool isopen(char c)
{
	return c == '(' || c == '[';
}

int main()
{
	string line;
	getline(cin, line);

	stack<char> S;
	bool ok = true;
	for (int i = 0; i < size(line); i++)
	{
		if (isopen(line[i]))
		{
			S.push(line[i]);
		}
		else
		{
			if (S.empty())
			{
				ok = false;
				break;
			}

			char open = S.top();
			S.pop();
			if (open != ov(line[i]))
			{
				ok = false;
				break;
			}
		}
	}

	ok = ok && S.empty();
	cout << (ok ? "rett" : "rangt") << endl;

	return 0;
}