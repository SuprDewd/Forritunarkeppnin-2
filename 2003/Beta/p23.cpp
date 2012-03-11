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

int main()
{
	int cnt;
	cin >> cnt;

	int last = 1,
		cur = 1;

	if (cnt >= 1) cout << 1 << endl;
	if (cnt >= 2) cout << 1 << endl;

	for (int i = 2; i < cnt; i++)
	{
		last += cur;
		swap(last, cur);
		cout << cur << endl;
	}

	return 0;
}