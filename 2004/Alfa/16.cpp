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

int factorial(int n)
{
	int res = 1;
	while (n) res *= n--;
	return res;
}

int main()
{
	double x;
	cin >> x;
	int cnt = 0;
	for (int i = 0; ; i++)
	{
		double cur = pow(x, i) / factorial(i);
		if (cur < 0.001) break;
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}