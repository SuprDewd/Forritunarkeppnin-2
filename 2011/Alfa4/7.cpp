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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main()
{
	map<int, int> nums;
	while (true)
	{
		int c;
		cin >> c;
		if (c < 0) break;
		nums[c]++;
	}

	int best = 0;
	for (map<int, int>::const_iterator it = nums.begin(); it != nums.end(); it++)
	{
		best = max(it->second, best);
	}

	for (map<int, int>::const_iterator it = nums.begin(); it != nums.end(); it++)
	{
		if (it->second == best)
		{
			cout << it->first << " kom " << it->second << " sinnum fyrir"<< endl;
		}
	}

	return 0;
}