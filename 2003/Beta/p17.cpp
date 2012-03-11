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
	int cnt = 9;
	int m[] = { 5000, 2000, 1000, 500, 100, 50, 10, 5, 1 };
	int c[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	int n;
	cin >> n;
	for (int i = 0; i < cnt; i++)
	{
		while (n >= m[i])
		{
			c[i]++;
			n -= m[i];
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		if (c[i] != 0) cout << c[i] << " * " << m[i] << endl;
	}

	return 0;
}