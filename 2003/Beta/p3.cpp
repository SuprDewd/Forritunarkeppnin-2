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
	char t;
	double v;
	cin >> v >> t;

	if (t == 'f')
	{
		cout << (5.0 / 9.0) * (v - 32) << " c" << endl;
	}
	else
	{
		cout << v / (5.0 / 9.0) + 32 << " f" << endl;
	}

	return 0;
}