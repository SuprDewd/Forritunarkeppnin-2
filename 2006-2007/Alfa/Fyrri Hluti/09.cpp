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

int main()
{
	map<int, int> cnt;

	for (int i = 0; i < 5; i++)
	{
		int cur;
		cin >> cur;
		cnt[cur]++;
	}

	int c5 = -INF,
		c4 = -INF,
		c3 = -INF,
		c2 = -INF;

	int h2 = -INF;

	for (map<int, int>::const_iterator it = cnt.begin(); it != cnt.end(); it++)
	{
		if (it->second >= 5) c5 = max(c5, it->first);
		if (it->second >= 4) c4 = max(c4, it->first);
		if (it->second >= 3) c3 = max(c3, it->first);
		if (it->second >= 2) c2 = max(c2, it->first);
		if (it->second == 2) h2 = it->first;
	}

	if (c5 > 0) cout << "5 eins " << c5 << " = " << 5 * c5 << endl;
	if (c4 > 0) cout << "4 eins " << c4 << " = " << 4 * c4 << endl;
	if (c3 > 0) cout << "3 eins " << c3 << " = " << 3 * c3 << endl;
	if (c2 > 0) cout << "2 eins " << c2 << " = " << 2 * c2 << endl;

	if (h2 > 0 && c3 > 0)
	{
		cout << "Hus = " << 2 * h2 + 3 * c3 << endl;
	}

	return 0;
}