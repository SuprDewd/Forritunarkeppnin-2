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

int arskort, mid10, mid1, fjoldi;
int best;
int cur1 = 0, cur10 = 0;
int best1 = 0, best10 = 0;

void rec(int f)
{
	if (f <= 0)
	{
		int cur = cur1 * mid1 + cur10 * mid10;
		if (cur < best)
		{
			best = cur;
			best1 = cur1;
			best10 = cur10;
		}
	}
	else
	{
		cur10++;
		rec(f - 10);
		cur10--;
		cur1++;
		rec(f - 1);
		cur1--;
	}
}

int main()
{
	cin >> arskort >> mid10 >> mid1 >> fjoldi;
	best = arskort;
	rec(fjoldi);

	if (best == arskort)
	{
		cout << "arskort" << endl;
	}
	else
	{
		cout << best1 << " * stakar" << endl;
		cout << best10 << " * 10 mida kort" << endl;
	}

	return 0;
}