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
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

bool erodd(string s, int i)
{
	char last = s[i];
	for (int j = i + 1; j < size(s); j++)
	{
		if (s[j] < last) return false;
		last = s[j];
	}

	last = s[i];
	for (int j = i - 1; j >= 0; j--)
	{
		if (s[j] < last) return false;
		last = s[j];
	}

	return true;
}

int main()
{
	string line;
	getline(cin, line);

	bool b = false;
	for (int i = 0; i < size(line); i++)
	{
		if (erodd(line, i))
		{
			b = true;
			break;
		}
	}

	cout << (b ? "Oddaord" : "Ekki oddaord") << endl;

	return 0;
}